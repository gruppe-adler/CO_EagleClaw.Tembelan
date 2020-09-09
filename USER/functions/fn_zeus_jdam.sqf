#define PLANESPEED      400
#define PLANEALTITUDE   800
#define MISSILEDISTANCE 850
#define SOUNDDISTANCE   2600

params ["_pos","_droppedOnObj"];

([(ASLtoATL _pos) vectorAdd [0,-10000,PLANEALTITUDE],0,"B_Plane_Fighter_01_F",WEST] call BIS_fnc_spawnVehicle) params ["_plane","","_grp"];
_plane setVelocityModelSpace [0,PLANESPEED,0];

_plane flyInHeightASL [PLANEALTITUDE,PLANEALTITUDE,PLANEALTITUDE];
_plane limitSpeed 1600;

private _wp = _grp addWaypoint [(ASLtoATL _pos) vectorAdd [0,10000,PLANEALTITUDE],0];
_wp setWaypointCompletionRadius 500;
_wp setWaypointStatements ["true","if (isServer) then {_plane = vehicle this; {deleteVehicle _x} forEach thisList; deleteVehicle _plane}"];

[{
    params ["_args", "_handle"];
    _args params ["_plane", "_targetPos"];
    if (isNull _plane) exitWith {
        [_handle] call CBA_fnc_removePerFrameHandler;
    };
    drawIcon3D ["a3\ui_f\data\gui\Rsc\RscDisplayIntel\azimuth_ca.paa", [1,1,1,1], getPosATL _plane, 1, 1, 45, "plane", 1, 0.04, "PuristaMedium", "center", true];

    _plane setVelocityModelSpace [0,PLANESPEED,0];
},0,[_plane,ASLtoATL _pos]] call CBA_fnc_addPerFrameHandler;

private _targetMarkerHandle = [{
    params ["_targetPos", "_handle"];
    drawIcon3D ["a3\ui_f\data\gui\Rsc\RscDisplayIntel\azimuth_ca.paa", [1,1,1,1], _targetPos, 1, 1, 45, "target", 1, 0.04, "PuristaMedium", "center", true];
},0,ASLtoATL _pos] call CBA_fnc_addPerFrameHandler;


private _fnc_waitCondition = {
    params ["_plane","_pos"];
    (_plane distance2D _pos) < MISSILEDISTANCE
};

private _fnc_spawnMissile = {
    params ["_plane","_pos","_targetMarkerHandle"];

    private _height = ((getPos _plane) param [2,PLANEALTITUDE]) - 50;
    private _pitchVector = [0,0.55,1];
    _spawnPos = (getPos _plane) vectorAdd [0,0,-50];

    private _missile = createVehicle ["rhs_ammo_agm65",_spawnPos];
    _missile setVectorUp _pitchVector;
    _missile setVelocityModelSpace [0,(speed _plane) * 0.2,0];

    private _payload = createVehicle ["Bo_GBU12_LGB",[0,0,100],[],0,"CAN_COLLIDE"];
    _payload setMass 0;
    _payload attachTo [_missile,[0,0,0]];

    _missile setMissileTargetPos (ASLtoAGL _pos);

    [{
        params ["_args", "_handle"];
        _args params ["_missile","_targetMarkerHandle"];
        if (isNull _missile) exitWith {
            [_targetMarkerHandle] call CBA_fnc_removePerFrameHandler;
            [_handle] call CBA_fnc_removePerFrameHandler;
        };
        drawIcon3D ["a3\ui_f\data\gui\Rsc\RscDisplayIntel\azimuth_ca.paa", [1,1,1,1], getPosATL _missile, 1, 1, 45, "missile", 1, 0.04, "PuristaMedium", "center", true];
        _args set [2,getPos _missile];
    },0,[_missile,_targetMarkerHandle]] call CBA_fnc_addPerFrameHandler;
};

[_fnc_waitCondition,_fnc_spawnMissile,[_plane,_pos,_targetMarkerHandle]] call CBA_fnc_waitUntilAndExecute;


[{(_this#0 distance2D _this#1) < SOUNDDISTANCE},{["mcd_flyby"] remoteExec ["playSound",0,false]},[_plane,_pos]] call CBA_fnc_waitUntilAndExecute;
