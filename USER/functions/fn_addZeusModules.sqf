["FALLEN EAGLE","JDAM",{_this call mcd_fnc_zeus_jdam}] call zen_custom_modules_fnc_register;
["FALLEN EAGLE","Repair Building",{[_this#0,0] call mcd_fnc_zeus_setBuildingDamage}] call zen_custom_modules_fnc_register;
["FALLEN EAGLE","Destroy Building",{[_this#0,1] call mcd_fnc_zeus_setBuildingDamage}] call zen_custom_modules_fnc_register;
["FALLEN EAGLE","End Mission",{_this spawn mcd_fnc_zeus_endMission}] call zen_custom_modules_fnc_register;
["FALLEN EAGLE","Spawn Exfil Boats",{_this remoteExec ["mcd_fnc_zeus_spawnExfilBoats",2,false]}] call zen_custom_modules_fnc_register;
["FALLEN EAGLE","Teleport to Start",{_this remoteExec ["mcd_fnc_zeus_teleportPlayers",2,false]}] call zen_custom_modules_fnc_register;

["FALLEN EAGLE","Complete Commander Task",{
    if (missionNamespace getVariable ["mcd_objCommanderKillConfirmed",false]) exitWith {
        [objNull,"Task ist bereits erfüllt."] call BIS_fnc_showCuratorFeedbackMessage;
    };
    missionNamespace setVariable ["mcd_objCommanderKillConfirmed",true,true];
    [objNull,"Task erfüllt."] call BIS_fnc_showCuratorFeedbackMessage;
}] call zen_custom_modules_fnc_register;

["FALLEN EAGLE","Cancel Intel Task",{
    if (missionNamespace getVariable ["mcd_objIntelAborted",false]) exitWith {
        [objNull,"Task ist bereits abgebrochen."] call BIS_fnc_showCuratorFeedbackMessage;
    };
    missionNamespace setVariable ["mcd_objIntelAborted",true,true];
    [objNull,"Task abgebrochen."] call BIS_fnc_showCuratorFeedbackMessage;
}] call zen_custom_modules_fnc_register;
