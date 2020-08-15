#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(Backpack_AssaultExpanded_Black),
            QCLASS(Backpack_AssaultExpanded_Green),
            QCLASS(Backpack_AssaultExpanded_Tan),
            QCLASS(Backpack_AssaultExpanded_White),
            QCLASS(Backpack_AssaultExpanded_RGR),
            QCLASS(Backpack_AssaultPack_RGR),
            QCLASS(Backpack_Carryall_DarkBlack),
            QCLASS(Backpack_Kitbag_DarkBlack),
            QCLASS(Backpack_Kitbag_White),
            QCLASS(Backpack_Kitbag_RGR),
            QCLASS(Backpack_Kitbag_Medic_White),
            QCLASS(Backpack_Kitbag_Medic_Black),
            QCLASS(Backpack_Kitbag_Medic_Coyote),
            QCLASS(Backpack_Kitbag_Medic_Digital),
            QCLASS(Backpack_Kitbag_Medic_MTP),
            QCLASS(Backpack_Kitbag_Medic_Green),
            QCLASS(Backpack_Kitbag_Medic_Sage),
            QCLASS(Backpack_Kitbag_Medic_Tan),
            QCLASS(Backpack_Kitbag_Medic_RGR),
            QCLASS(Backpack_ViperHarness_Coyote),
            QCLASS(Backpack_ViperHarness_Green),
            QCLASS(Backpack_ViperLightHarness_Coyote),
            QCLASS(Backpack_ViperLightHarness_Green)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_vests"};
        author = ECSTRING(main,Author);
        authors[] = {"Pomigit", "BadHabitz", "Jonpas", "Rory", "Kresky"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
