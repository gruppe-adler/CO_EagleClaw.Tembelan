params ["_pos","_damage"];

private _building = nearestBuilding ASLtoAGL _pos;
if (isNull _building) exitWith {
    [objNull,"No building found."] call BIS_fnc_showCuratorFeedbackMessage;
};

_building setDamage _damage;
[objNull,format ["Building %1 %2.",_building,["repaired","destroyed"] select _damage]] call BIS_fnc_showCuratorFeedbackMessage;
