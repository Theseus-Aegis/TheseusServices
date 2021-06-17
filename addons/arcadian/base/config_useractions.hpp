class UserActions {
    class OpenRearDoor {
        displayName = "Open Rear Door";
        displayNameDefault = "";
        position = "reardoor_mem";
        radius = 0.8;
        onlyForPlayer = 0;
        priority = 1;
        condition = "this doorPhase 'reardoor_source' < 0.5 && this doorPhase 'reardoor_2_source' < 0.5";
        statement = "this animateDoor ['reardoor_source', 1];";
    };
    class CloseRearDoor: OpenRearDoor {
        displayName = "Close Rear Door";
        condition = "this doorPhase 'reardoor_source' > 0.5 && this doorPhase 'reardoor_2_source' < 0.5";
        statement = "this animateDoor ['reardoor_source', 0];";
    };
    class OpenRearWindow {
        displayName = "Open Rear Window";
        displayNameDefault = "";
        position = "";
        radius = 3.7;
        onlyForPlayer = 0;
        priority = 10;
        condition = "this doorPhase 'reardoor_source' < 0.5 && this doorPhase 'reardoor_2_source' < 0.5 && ((this getCargoIndex player) isEqualTo 0)";
        statement = "this animateDoor [""reardoor_2_source"",1];";
    };
    class CloseRearWindow: OpenRearWindow {
        displayName = "Close Rear Window";
        condition = "this doorPhase 'reardoor_source' < 0.5 && this doorPhase 'reardoor_2_source' > 0.5 && ((this getCargoIndex player) isEqualTo 0)";
        statement = "this animateDoor ['reardoor_2_source', 0];";
    };
    class Beacons_Start {
        displayName = "Beacons On";
        displayNameDefault = "<img image='\a3\ui_f\data\igui\cfg\actions\beacons_on_ca.paa' size='2.5'/>";
        position = "mph_axis";
        radius = 1.8;
        onlyForPlayer = 0;
        priority = 1.5;
        animPeriod = 2;
        condition = "(driver this == player) && {{this animationSourcePhase _x isEqualTo 0} count ['lightbar_hide_source'] > 0.5} && {this animationPhase 'BeaconsStart' > 0.5} && {alive (this)}";
        statement = "this animateSource ['BeaconsStart', 0];";
        userActionID = 50;
    };
    class Beacons_Stop: Beacons_Start {
        displayName = "Beacons Off";
        condition = "(driver this == player) && {{this animationSourcePhase _x isEqualTo 0} count ['lightbar_hide_source'] > 0.5} && {this animationPhase 'BeaconsStart' < 0.5} && {alive (this)}";
        userActionID = 51;
    };
};
