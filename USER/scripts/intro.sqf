#define INTROLAYER  10

if ((typeOf player) isEqualTo "VirtualCurator_F") exitWith {};

private _fnc_text = {
    params ["_text","_duration",["_textSize",2.5],["_pos",[0,0.75,1,1]]];
    [
        parseText format ["<t font='RobotoCondensedLight' align='center' size='%1' valign='middle'>%2</t>",_textSize,_text],
        _pos,
        [10,10],
        _duration,
        1,
        0
    ] spawn BIS_fnc_textTiles;
};

["BlackAndWhite",1,false] call BIS_fnc_setPPeffectTemplate;
[0,1,false,true] call BIS_fnc_cinemaBorder;

sleep 1;
playSound "mcd_introMusic";


date params ["_year","_month","_day"];
private _timeStr = [daytime, "HH:MM"] call BIS_fnc_timeToString;
[format ["%1.%2.%3 - Um %4 Uhr Ortszeit startet ein Helikopter von Camp Rabin in Richtung Haifa Naval Base.",_day,_month,_year,_timeStr],6] call _fnc_text;
sleep 7;

INTROLAYER cutText ["","BLACK OUT",0.5];
sleep 0.8;
private _camStartPos = eyePos player;
private _cam = "camera" camCreate _camStartPos;
_cam cameraEffect ["internal", "BACK"];
showCinemaBorder true;
_cam camSetTarget (player modelToWorld [0,2,0]);
_cam camCommit 0;
_cam camSetPos (_camStartPos vectorAdd [0,0,30]);
_cam camCommit 6;
INTROLAYER cutText ["","BLACK IN",0.5,true];
["An Bord eine Task Force der IDF.",4] call _fnc_text;
sleep 4.5;

INTROLAYER cutText ["","BLACK OUT",0.5];
sleep 0.5;
["Ihr Auftrag...",4] call _fnc_text;
_cam camSetPos [3728.51,7863.12,4.56776];
_cam camSetTarget [3660.44,8025.18,2.11093];
_cam camCommit 0;
_cam camSetPos [3752.67,7905.84,4.76128];
_cam camCommit 5;
INTROLAYER cutText ["","BLACK IN",0.5,true];
sleep 4.5;

INTROLAYER cutText ["","BLACK OUT",0.5];
sleep 0.8;
["OPERATION FALLEN EAGLE",4,4.0,[0,0.5,1,1]] call _fnc_text;
sleep 7;
_cam cameraEffect ["terminate", "BACK"];
camDestroy _cam;
showCinemaBorder false;
INTROLAYER cutText ["","BLACK IN",0.5,true];
sleep 0.8;

["Default",1,false] call BIS_fnc_setPPeffectTemplate;
[1,1,false,true] call BIS_fnc_cinemaBorder;

sleep 3;

// ZEIT >> INFOTEXT
date params ["_year","_month","_day","_hour","_minute"];
_hour = str _hour;
_minute = str _minute;
if (count _hour == 1) then {_hour = "0" + _hour};
if (count _minute == 1) then {_minute = "0" + _minute};

[
    format ["%1-%2-%3 %4:%5",_day,_month,_year,_hour,_minute],
    mapGridPosition player
] spawn BIS_fnc_infoText;
