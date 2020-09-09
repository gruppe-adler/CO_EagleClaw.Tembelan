/*
*   Wird zum Missionsstart auf Server und Clients ausgeführt.
*   Funktioniert wie die init.sqf.
*/



if (isServer) then {
    [] execVM "USER\scripts\saveTeleportPositions.sqf";
};

if !(missionNamespace getVariable ["mcd_playersTeleported",false]) then {
    ace_map_BFT_Enabled = false;
};
