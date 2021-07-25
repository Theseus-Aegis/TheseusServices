class UserActions {
    class OpenRearWindow {
        displayName = CSTRING(Window);
        displayNameDefault = "";
        position = "";
        radius = 3.7;
        onlyForPlayer = 0;
        priority = 0;
        condition = "this doorPhase 'reardoor_2_source' < 0.5 && {(this getCargoIndex (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player])) isEqualTo 0}";
        statement = "this animateDoor ['reardoor_2_source', 1];";
    };
    class CloseRearWindow: OpenRearWindow {
        displayName = CSTRING(Window_Close);
        condition = "this doorPhase 'reardoor_2_source' > 0.5 && {(this getCargoIndex (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player])) isEqualTo 0}";
        statement = "this animateDoor ['reardoor_2_source', 0];";
    };
};
