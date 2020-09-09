params ["_title","_text"];

if (!hasInterface) exitWith {};

player createDiaryRecord ["Diary",[_title,_text]];
