#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(Backpack_AssaultExpanded_Black),
            QCLASS(Backpack_AssaultExpanded_Green),
            QCLASS(Backpack_AssaultExpanded_Tan),
            QCLASS(Backpack_AssaultExpanded_White),
            QCLASS(Backpack_Carryall_DarkBlack),
            QCLASS(Backpack_Kitbag_DarkBlack)
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
