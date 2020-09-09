params ["_pos","_droppedOnObj"];

mcd_endMissionConfirmationCount = (missionNamespace getVariable ["mcd_endMissionConfirmationCount",0]) + 1;

if (mcd_endMissionConfirmationCount < 2) exitWith {
    [objNull,"Erneut platzieren, um wirklich zu beenden."] call BIS_fnc_showCuratorFeedbackMessage;
};

if (missionNamespace getVariable ["mcd_missionEnding",false]) exitWith {
    [objNull,"Mission endet bereits."] call BIS_fnc_showCuratorFeedbackMessage;
};

missionNamespace setVariable ["mcd_missionEnding",true,true];

sleep 2;

private _text = "<img size= '6' style='vertical-align:middle' shadow='false' image='data\gruppe-adler.paa'/><br/><t size='.9' color='#FFFFFF'>MISSION ERFOLGREICH</t>";
[_text,0,0,2,2] remoteExec ["BIS_fnc_dynamicText",0,false];
["mcd_missionCompleted"] remoteExec ["playSound",0,false];

sleep 8;

// stops record, sends data and starts replay
call GRAD_replay_fnc_stopRecord;
// ends mission after replay is over
[{
    REPLAY_FINISHED
}, {
    ["END1"] remoteExec ["endMission",0,false]; // your custom end mission call or whatever you want to do after replay
}, []] call CBA_fnc_waitUntilAndExecute;
