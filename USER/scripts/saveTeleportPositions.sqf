mcd_teleportPositionsASL = [];
private _varNameBase = "mcd_teleportPos_%1";

for [{_curIndex = 1},{_curIndex<100},{_curIndex = _curIndex + 1}] do {
    private _curVarname = format [_varNameBase,_curIndex];
    if (isNil _curVarname) exitWith {};

    private _logic = call compile _curVarname;
    mcd_teleportPositionsASL pushBack (getPosASL _logic);
    deleteVehicle _logic;
    missionNamespace setVariable [_curVarname,nil,true];
};

publicVariable "mcd_teleportPositionsASL";
