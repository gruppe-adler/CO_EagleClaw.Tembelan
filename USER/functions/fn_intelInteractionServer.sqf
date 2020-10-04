params ["_target","_caller","_intelID"];

if (isNull _target) exitWith {};
deleteVehicle _target;

private _intelDisplayName = [
    "Intel (Ordner)"
] select _intelID;

["grad_notification1",["INTEL",format ["%1 hat %2 gefunden. (Map >> Briefing)",name _caller,_intelDisplayName]]] remoteExec ["BIS_fnc_showNotification",0,false];

private _intelDiaryText = [
"Dokument mit dem Siegel des IKAN-Regimes.

Es beschreibt den erfolgreichen Abschuss eines unbekannten Flugzeuges.
Offensichtlich gab es keine Überlebenden. Und es wurden bis auf den Flugschreiber, keine brauchbaren Informationen geborgen.
"] select _intelID;

private _title = [
    "Intel (Ordner)"
] select _intelID;
[_title,_intelDiaryText] remoteExec ["mcd_fnc_createDiaryRecord",0,true];
