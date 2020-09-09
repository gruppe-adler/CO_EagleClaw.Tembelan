/*
*   Legt Gruppennamen, Standard- und Sonderkanäle fest.
*   Gruppenspezifische Kanäle können über die Einträge channel1-channel8 für Shortrange und channel1-channel9 für Longrange festgelegt werden.
*   Hier werden die in der radiosettings.hpp definierten Kanalnamen oder Klassennamen der Kanäle verwendet.
*
*   Beispiel:
*
    class BLUFOR {
        class group1 {
            groupName = "Command";

            class shortrange {
                defaultChannel = 1;
                altChannel = 3;
                altChannelOnlyTL = 1;

                channel1 = "Command Kanal";
                channel3 = "net13";
                channel7 = "Command Intern";
            };

            class longrange {
                defaultChannel = 2;
                altChannel = 5;
                altChannelOnlyTL = 1;

                channel2 = "Air";
                channel5 = "net10";
            };
        };
    };
*
*/

class BLUFOR {
    class cmd {
        groupName = "Cmd";
        class shortrange {
            defaultChannel = 1;
        };
    };
    class alpha {
        groupName = "Alpha";
        class shortrange {
            defaultChannel = 2;
            altChannel = 1;
            altChannelOnlyTL = 0;
        };
    };
    class alpha1 {
        groupName = "Alpha-1";
        class shortrange {
            defaultChannel = 3;
            altChannel = 2;
            altChannelOnlyTL = 1;
        };
    };
    class alpha2 {
        groupName = "Alpha-2";
        class shortrange {
            defaultChannel = 4;
            altChannel = 2;
            altChannelOnlyTL = 1;
        };
    };
    class bravo {
        groupName = "Bravo Net";
        class shortrange {
            defaultChannel = 5;
            altChannel = 1;
            altChannelOnlyTL = 0;
        };
    };
    class bravo1 {
        groupName = "Bravo-1";
        class shortrange {
            defaultChannel = 6;
            altChannel = 5;
            altChannelOnlyTL = 1;
        };
    };
    class bravo2 {
        groupName = "Bravo-2";
        class shortrange {
            defaultChannel = 7;
            altChannel = 5;
            altChannelOnlyTL = 1;
        };
    };
    class hotel {
        groupName = "Hotel";
        class shortrange {
            defaultChannel = 8;
            altChannel = 1;
            altChannelOnlyTL = 0;
        };
    };
    class hotel1: hotel {
        groupName = "Hotel-1";
        class shortrange: shortrange {};
    };
    class hotel2: hotel {
        groupName = "Hotel-2";
        class shortrange: shortrange {};
    };
};

class OPFOR {

};

class INDEPENDENT {

};
