params ["_unit",["_pos", [0,0,0]]];

if (!local _unit) exitWith {};

_unit allowDamage false;
_unit setPosASL _pos;
[{_this allowDamage true},_unit, 2] call CBA_fnc_waitAndExecute;
