class UserActions {
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
};
