#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(BWA3_I_Eagle_Fleck),
            QCLASS(BWA3_B_Eagle_Fleck),
            QCLASS(BWA3_I_Eagle_FLW100_Fleck),
            QCLASS(BWA3_B_Eagle_FLW100_Fleck),
            QCLASS(BWA3_I_Eagle_Tropen),
            QCLASS(BWA3_B_Eagle_Tropen),
            QCLASS(BWA3_I_Eagle_FLW100_Tropen),
            QCLASS(BWA3_B_Eagle_FLW100_Tropen),
            QCLASS(BWA3_I_Eagle_Black),
            QCLASS(BWA3_B_Eagle_Black),
            QCLASS(BWA3_I_Eagle_FLW100_Black),
            QCLASS(BWA3_B_Eagle_FLW100_Black),
            QCLASS(BWA3_I_Eagle_Green),
            QCLASS(BWA3_B_Eagle_Green),
            QCLASS(BWA3_I_Eagle_FLW100_Green),
            QCLASS(BWA3_B_Eagle_FLW100_Green),
            QCLASS(BWA3_I_Eagle_Tan),
            QCLASS(BWA3_B_Eagle_Tan),
            QCLASS(BWA3_I_Eagle_FLW100_Tan),
            QCLASS(BWA3_B_Eagle_FLW100_Tan)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_units", "bwa3_eagle"};
        author = ECSTRING(main,Author);
        authors[] = {"BW-Mod", "GilleeDoo", "Jonpas"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
