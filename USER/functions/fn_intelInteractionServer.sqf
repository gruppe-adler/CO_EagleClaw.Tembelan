params ["_target","_caller","_intelID"];

if (isNull _target) exitWith {};
deleteVehicle _target;

private _intelDisplayName = [
    "Prisoner medical report (Ordner)"
] select _intelID;

["grad_notification1",["INTEL",format ["%1 hat %2 gefunden. (Map >> Briefing)",name _caller,_intelDisplayName]]] remoteExec ["BIS_fnc_showNotification",0,false];

private _intelDiaryText = [
"Dokument mit dem Siegel des IKAN-Regimes. Der Text ist persisch.

Es handelt sich offensichtlich um eine Art medizinischen Bericht. Der Bericht beschreibt kurz die wichtigsten Daten des Gefangenen. Gesundheitlich geht es ihm nicht gut. Der Patient scheint nicht bei Bewusstsein zu sein und befindet sich in einem Gefangenlager, welches in der Stadt "Rusak Iman" liegt. Die Nationalität des Gefangenen ist... das kann nicht sein... israelisch. Zudem ist er Militärangehöriger. Es hat offesichtlich doch ein Pilot überlebt. Wir müssen ihm helfen. 

"] select _intelID;

private _title = [
    "Intel (Ordner)"
] select _intelID;
[_title,_intelDiaryText] remoteExec ["mcd_fnc_createDiaryRecord",0,true];
