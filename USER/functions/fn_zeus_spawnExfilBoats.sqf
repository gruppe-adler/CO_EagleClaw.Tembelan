private _boatSpawnPosCenter = getMarkerPos "mcd_boatspawnMarker";
private _boatWp1Pos = getMarkerPos "mcd_boatwp1";
private _boatWp2Pos = getMarkerPos "mcd_boatwp2";

([_boatSpawnPosCenter vectorAdd [60,0,5],_boatSpawnPosCenter getDir _boatWp1Pos,"rhsusf_mkvsoc",WEST] call BIS_fnc_spawnVehicle) params ["_boat1","","_group1"];
([_boatSpawnPosCenter vectorAdd [-60,0,5],_boatSpawnPosCenter getDir _boatWp2Pos,"rhsusf_mkvsoc",WEST] call BIS_fnc_spawnVehicle) params ["_boat2","","_group2"];

diag_log [_boat1,"_boat1"];

_group1 addWaypoint [_boatWp1Pos,0];
_group2 addWaypoint [_boatWp2Pos,0];

{
    private _unit = _x;
    {
        _unit disableAI _x;
    } forEach [
        "SUPPRESSION",
        "COVER"
    ];
} forEach ((units _group1) + (units _group2));

{
    _x addCuratorEditableObjects [[_boat1], true];
    _x addCuratorEditableObjects [[_boat2], true];
} forEach allCurators;
