#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(MELB_I_AH6M_H_Theseus_Black),
            QCLASS(MELB_B_AH6M_H_Theseus_Black)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_units", "bwa3_eagle"};
        author = ECSTRING(main,Author);
        authors[] = {"BW-Mod", "Mick Mathews", "Jonpas"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
