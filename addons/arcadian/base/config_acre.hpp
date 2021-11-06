// Used on unarmed variant only, Cargo index for armed is 0.
class AcreRacks {
    class Rack_1 {
        displayName = "$STR_ACRE_sys_rack_dash";
        shortName = "$STR_ACRE_sys_rack_dashShort";
        componentName = "ACRE_VRC103";
        allowedPositions[] = {"driver", {"cargo", 1}};
        disabledPositions[] = {};
        defaultComponents[] = {};
        mountedRadio = "ACRE_PRC117F";
        isRadioRemovable = 0;
        intercom[] = {};
    };
};
class AcreIntercoms {};
