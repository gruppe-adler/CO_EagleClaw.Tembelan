if (!isServer) exitWith {};

if (!canSuspend) exitWith {_this spawn mcd_fnc_zeus_teleportPlayers};

if (missionNamespace getVariable ["mcd_playersTeleported",false]) exitWith {
    [objNull,"Players already teleported."] call BIS_fnc_showCuratorFeedbackMessage;
};
missionNamespace setVariable ["mcd_playersTeleported",true,true];
missionNamespace setVariable ["ace_map_BFT_Enabled",true,true];
[] remoteExec ["GRAD_replay_fnc_init",0,true];

mcd_introHeli setFuel 1;
mcd_introHeli engineOn true;

sleep 10;

[[],"USER\scripts\intro.sqf"] remoteExec ["execVM",0,false];

sleep 20;
skipTime ((24 - dayTime) + 5.83);

{
    [{
        params ["_unit","_forEachIndex"];
        _pos = mcd_teleportPositionsASL param [_forEachIndex,[0,0,0]];
        [_unit,_pos] remoteExec ["mcd_fnc_teleport",_unit,false];
    },[_x,_forEachIndex],random 3] call CBA_fnc_waitAndExecute;
} forEach playableUnits;

/* {deleteVehicle _x} forEach (crew mcd_introHeli);
deleteVehicle mcd_introHeli; */

// DEBUG
/* mcd_introHeli setFuel 0;
mcd_introHeli engineOn false;
setDate [2020, 2, 23, 10, 50]; */
