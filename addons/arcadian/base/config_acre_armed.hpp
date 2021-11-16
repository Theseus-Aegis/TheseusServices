// Used on armed variant only, Cargo index for unarmed is 1.
class AcreRacks {
    class Rack_1 {
        displayName = "$STR_ACRE_sys_rack_dash";
        shortName = "$STR_ACRE_sys_rack_dashShort";
        componentName = "ACRE_VRC103";
        allowedPositions[] = {"driver", {"cargo", 0}};
        disabledPositions[] = {};
        defaultComponents[] = {};
        mountedRadio = "ACRE_PRC117F";
        isRadioRemovable = 0;
        intercom[] = {};
    };
};
class AcreIntercoms {};
