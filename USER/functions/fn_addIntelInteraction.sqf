params ["_obj","_intelID"];

private _actionName = [
    "mcd_pickup_folder",
    "mcd_pickup_wallet",
    "mcd_pickup_flightrecorder"
] select _intelID;

private _actionDisplayName = [
    "Ordner aufnehmen",
    "Portemonnaie aufnehmen",
    "Flugschreiber aufnehmen"
] select _intelID;

private _action = [_actionName,_actionDisplayName,"",{_this remoteExec ["mcd_fnc_intelInteractionServer",2,false]},{(side (_this select 1)) isEqualTo WEST},{},_intelID] call ace_interact_menu_fnc_createAction;
[_obj,0,["ACE_MainActions"],_action] call ace_interact_menu_fnc_addActionToObject;
