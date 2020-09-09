/*
*   Definiert voreingestellte Funkfrequenzen und Netznamen.
*   Netzname ist optional und wird, sofern vorhanden, bei Spielstart am Kartenrand vermerkt.
*
*   Die ersten 8 Shortrange Netze werden auf den SR Kanälen 1-8 und die ersten 9 Longrange Netze werden auf den LR Kanälen 1-9 voreingestellt.
*   Es können weitere Netze definiert werden, die dann in der groupsettings.hpp einzelnen Gruppen zugewiesen werden können.
*
*   Beispiel:
    class net1 {
        freq = 32.5;
        name = "Command Kanal";
    };

    //[...]

    class net10 {
        freq = 80.1;
        name = "Air Intern";
    };
*/

//SHORTRANGE KANÄLE ============================================================
class shortrange {
    class net1 {
        name = "Platoon Net";
        freq = 50;
    };

    class net2 {
        name = "Alpha Net"
        freq = 60;
    };

    class net3 {
        name = "Alpha-1";
        freq = 61;
    };

    class net4 {
        name = "Alpha-2";
        freq = 62;
    };

    class net5 {
        name = "Bravo Net";
        freq = 70;
    };

    class net6 {
        name = "Bravo-1";
        freq = 71;
    };

    class net7 {
        name = "Bravo-2";
        freq = 72;
    };

    class net8 {
        name = "Hotel Net";
        freq = 80;
    };
};


//LONGRANGE KANÄLE =============================================================
class longrange {
    class net1 {
        freq = 32;
    };

    class net2 {
        freq = 33;
    };

    class net3 {
        freq = 34;
    };

    class net4 {
        freq = 35;
    };

    class net5 {
        freq = 36;
    };

    class net6 {
        freq = 37;
    };

    class net7 {
        freq = 38;
    };

    class net8 {
        freq = 39;
    };

    class net9 {
        freq = 40;
    };
};
