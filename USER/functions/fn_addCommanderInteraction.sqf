params ["_obj"];

private _action = ["mcd_search_commander","Hosentaschen durchsuchen","",{_this remoteExec ["mcd_fnc_commanderInteractionServer",2,false]},{!(missionNamespace getVariable ["mcd_objCommanderKillConfirmed",false]) && !(alive (_this select 0))},{},_intelID] call ace_interact_menu_fnc_createAction;
[_obj,0,["ACE_MainActions"],_action] call ace_interact_menu_fnc_addActionToObject;
