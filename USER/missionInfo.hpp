/*
*   Legt allgemeine Information über die Mission fest.
*/

author = "XiviD & McD für Gruppe Adler";                                               // Missionsersteller
onLoadName = "COOP FALLEN EAGLE";                                                   // Name der Mission
onLoadMission = "";                                                             // Beschreibung der Mission (wird im Ladebildschirm unterhalb des Ladebildes angezeigt)
loadScreen = "data\loadpic.paa";                                                // Ladebild
overviewPicture = "";                                                           // Bild, das in der Missionsauswahl angezeigt wird
overviewText = "";                                                              // Text, der in der Missionsauswahl angezeigt wird


class GRAD_Replay {
    precision = 5;                                    // precision of replay, 5 means every 5 seconds one snapshot (number)
    trackedSides[] = {"west","east"};    // defines the sides that will be tracked (possible are "west", "east", "independent", "civilian") (array)
    stepsPerTick = 1;                                 // defines steps played back at once (number)
    trackedVehicles = 0;                              // defines if empty and AI steered vehicles will be tracked (0/1)
    trackedAI = 1;                                    // defines if AI will be tracked (0/1)
    sendingChunkSize = 20;                            // higher number means replay loading is faster, but might cause instability / lags during loading (number)
    trackShots = 1;                                   // defines if shots will be tracked (0/1)
    upload = 1;                                       // defines if replay data will be uploaded to replay.gruppe-adler.de (0/1)
};
