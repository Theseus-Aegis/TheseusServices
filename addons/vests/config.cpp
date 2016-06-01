#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            QCLASS(Item_Vest_PlateCarrierFull_Black),
            QCLASS(Item_Vest_PlateCarrierFull_Green),
            QCLASS(Item_Vest_PlateCarrier_Black),
            QCLASS(Item_Vest_PlateCarrier_Green),
            QCLASS(Item_Vest_PlateCarrier_Coyote),
            QCLASS(Item_Vest_PlateCarrier_Khaki),
            QCLASS(Item_Vest_PlateCarrier_MARPAT),
            QCLASS(Item_Vest_Tactical_DarkBlack)
        };
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
        author = ECSTRING(main,Author);
        authors[] = {"Jonpas", "Pomigit", "BadHabitz", "Rory"};
        authorUrl = "https://github.com/Theseus-Aegis/TheseusServices";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
