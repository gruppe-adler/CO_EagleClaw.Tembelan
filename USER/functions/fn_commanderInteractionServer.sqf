params ["_target","_caller"];

if (missionNamespace getVariable ["mcd_objCommanderKillConfirmed",false]) exitWith {};
missionNamespace setVariable ["mcd_objCommanderKillConfirmed",true,true];

["grad_notification1",["INTEL",format ["%1 hat den feindl. Anführer gefunden. (Map >> Briefing)",name _caller]]] remoteExec ["BIS_fnc_showNotification",0,false];

private _intelDiaryText = "In den Ruinen des bombardierten Hauses wurde ein Getöteter in militärischer Uniform gefunden. Die Überprüfung der persönlichen Gegenstände der Person zeigte, dass es sich bei dem Getöteten um den feindlichen Anführer handelte. Gute Arbeit.";

["feindl. Commander",_intelDiaryText] remoteExec ["mcd_fnc_createDiaryRecord",0,true];
