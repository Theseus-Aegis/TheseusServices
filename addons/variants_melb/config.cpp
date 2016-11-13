#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            QCLASS(MELB_I_AH6M_H_Theseus),
            QCLASS(MELB_B_AH6M_H_Theseus),
            QCLASS(MELB_I_AH6M_L_Theseus),
            QCLASS(MELB_B_AH6M_L_Theseus),
            QCLASS(MELB_I_AH6M_M_Theseus),
            QCLASS(MELB_B_AH6M_M_Theseus),
            QCLASS(MELB_I_H6M_Theseus),
            QCLASS(MELB_B_H6M_Theseus),
            QCLASS(MELB_I_MH6M_Theseus),
            QCLASS(MELB_B_MH6M_Theseus)
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
