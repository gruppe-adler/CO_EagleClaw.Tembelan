/*
*  Original by bux, PabstMirror for ACE mod
*  Adapted for mission by McDiod
*/

// eagleclaw_suppressingUnits
// eagleclaw_suppressionZone

if (!isServer) exitWith {};


private _fnc_doSuppressUnit = {
    params [["_unit",objNull],"_fnc_doSuppressUnit"];

    if (isNull _unit) exitWith {};
    if (!alive _unit) exitWith {};
    if (_unit getVariable ["eagleclaw_suppressionRunning",false]) exitWith {};
    if ((count list eagleclaw_suppressionZone) == 0) exitWith {
        _unit setVariable ["eagleclaw_suppressionRunning",false];
    };

    _unit setVariable ["eagleclaw_suppressionRunning",true];

    // refill mags
    private _defaultMag = ([configfile >> "CfgWeapons" >> (primaryWeapon _unit),"magazines",[""]] call BIS_fnc_returnConfigEntry) param [0,""];
    for "_i" from 0 to 5 do {
        if (_unit canAddItemToVest _defaultMag) then {
            _unit addItemToVest _defaultMag
        } else {
            if (_unit canAddItemToUniform _defaultMag) then {
                _unit addItemToUniform _defaultMag;
            };
        };
    };

    private _vehicle = vehicle _unit;
    private _targetASL = (ATLtoASL (eagleclaw_suppressionZone call BIS_fnc_randomPosTrigger)) vectorAdd [0,0,0.6];

    // Direct fire - Get a target position that will work
    private _lis = lineIntersectsSurfaces [eyePos _unit, _targetASL, _unit, _vehicle];
    // If point is hidden, unit won't fire, do a ray cast to find where they should shoot at
    if ((count _lis) > 0) then {
        _targetASL = ((_lis select 0) select 0);
    };
    // Max range a unit can fire seems to be based on the weapon's config
    if (_unit isEqualTo _vehicle) then {
        private _distance =  _targetASL vectorDistance eyePos _unit;
        private _maxWeaponRange = getNumber (configFile >> "CfgWeapons" >> (currentWeapon _unit) >> "maxRange");
        if (_distance > (_maxWeaponRange - 50)) then {
            if (_distance > (2.5 * _maxWeaponRange)) then {
                _targetASL = [];
            } else {
                // 1-2.5x the weapon max range, find a virtual point the AI can shoot at (won't have accurate elevation, but it will put rounds downrange)
                private _fakeElevation = (_distance / 100000) * (_distance - _maxWeaponRange);
                _targetASL = (eyePos _unit) vectorAdd (((eyePos _unit) vectorFromTo _targetASL) vectorMultiply (_maxWeaponRange - 50)) vectorAdd [0,0,_fakeElevation];
            };
        };
    };

    // restart if failed
    if (
        (_targetASL isEqualTo []) ||
        !([_unit] call ACE_common_fnc_isAwake)
    ) exitWith {
        _unit setVariable ["eagleclaw_suppressionRunning",false];
        [_fnc_doSuppressUnit,[_unit,_fnc_doSuppressUnit],5 + random 10] call CBA_fnc_waitAndExecute;
    };

    // do between 5 and 15 bursts, then restart
    private _numberOfBursts = (round random 10) + 5;
    [{
        params ["_unit", "_burstsLeft", "_nextRun", "_targetASL"];
        if (!alive _unit) exitWith {true};
        if (CBA_missionTime >= _nextRun) then {
            _burstsLeft = _burstsLeft - 1;
            _this set [1, _burstsLeft];
            _this set [2, _nextRun + 4];
            _unit doSuppressiveFire _targetASL;
        };
        (_burstsLeft <= 0)
    },{
        params ["_unit","","","","_fnc_doSuppressUnit"];
        _unit setVariable ["eagleclaw_suppressionRunning",false];
        if (alive _unit) then {
            [_fnc_doSuppressUnit,[_unit,_fnc_doSuppressUnit],random 10] call CBA_fnc_waitAndExecute;
        };
    },[_unit, _numberOfBursts, CBA_missionTime, _targetASL, _fnc_doSuppressUnit]] call CBA_fnc_waitUntilAndExecute;
};

// start all units over 15s, so it doesn't look too scripted
{
    [_fnc_doSuppressUnit,[_x,_fnc_doSuppressUnit],random 15] call CBA_fnc_waitAndExecute;
} forEach eagleclaw_suppressingUnits;
