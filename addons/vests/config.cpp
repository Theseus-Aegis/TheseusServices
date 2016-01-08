#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {
            QCLASS(Vest_PlateCarrierFull_Black),
            QCLASS(Vest_PlateCarrierFull_Green),
            QCLASS(Vest_PlateCarrier_Black),
            QCLASS(Vest_PlateCarrier_Green),
            QCLASS(Vest_PlateCarrier_Coyote),
            QCLASS(Vest_PlateCarrier_Khaki),
            QCLASS(Vest_PlateCarrier_MARPAT),
            QCLASS(Vest_Tactical_DarkBlack)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_main"};
        author[]= {"Jonpas", "Pomigit", "BadHabitz"};
        authorUrl = "https://github.com/Theseus-Aegis/TheseusServices";
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
