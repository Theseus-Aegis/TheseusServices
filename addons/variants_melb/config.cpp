#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(MELB_I_AH6M_H_Theseus_Black),
            QCLASS(MELB_B_AH6M_H_Theseus_Black),
            QCLASS(MELB_I_AH6M_L_Theseus_Black),
            QCLASS(MELB_B_AH6M_L_Theseus_Black),
            QCLASS(MELB_I_AH6M_M_Theseus_Black),
            QCLASS(MELB_B_AH6M_M_Theseus_Black),
            QCLASS(MELB_I_H6M_Theseus_Black),
            QCLASS(MELB_B_H6M_Theseus_Black),
            QCLASS(MELB_I_MH6M_Theseus_Black),
            QCLASS(MELB_B_MH6M_Theseus_Black),
            QCLASS(MELB_I_AH6M_H_Black),
            QCLASS(MELB_B_AH6M_H_Black),
            QCLASS(MELB_I_AH6M_L_Black),
            QCLASS(MELB_B_AH6M_L_Black),
            QCLASS(MELB_I_AH6M_M_Black),
            QCLASS(MELB_B_AH6M_M_Black),
            QCLASS(MELB_I_H6M_Black),
            QCLASS(MELB_B_H6M_Black),
            QCLASS(MELB_I_MH6M_Black),
            QCLASS(MELB_B_MH6M_Black)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_units", "MELB"};
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Diesel5187", "sykoCrazy", "Emythiel", "Jonpas", "Rory"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
