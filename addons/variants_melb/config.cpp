#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            QCLASS(MELB_AH6M_H),
            QCLASS(MELB_AH6M_L),
            QCLASS(MELB_AH6M_M),
            QCLASS(MELB_H6M),
            QCLASS(MELB_MH6M)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_units", "MELB"};
        author = ECSTRING(main,Author);
        authors[] = {"Diesel5187", "sykoCrazy", "Rory", "Jonpas"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
