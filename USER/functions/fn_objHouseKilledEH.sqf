params ["_logic"];

if (!isServer) exitWith {};

mcd_objHouse = nearestBuilding getPos _logic;
mcd_objHouseAttachments = synchronizedObjects _logic;


addMissionEventHandler ["BuildingChanged", {
	params ["_previousObject", "_newObject", "_isRuin"];

    diag_log _this;
    diag_log mcd_objHouse;

    if !(_previousObject isEqualTo mcd_objHouse) exitWith {};
    removeMissionEventHandler ["BuildingChanged",_thisEventHandler];

    if (alive mcd_objCommander) then {
        mcd_objCommander setDamage 1;
    };

    {deleteVehicle _x} forEach mcd_objHouseAttachments;
}];
