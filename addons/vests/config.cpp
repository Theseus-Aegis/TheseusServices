#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(Item_Vest_PlateCarrierHeavy_Black),
            QCLASS(Item_Vest_PlateCarrierHeavy_Coyote),
            QCLASS(Item_Vest_PlateCarrierHeavy_Green),
            QCLASS(Item_Vest_PlateCarrierHeavy_White),
            QCLASS(Item_Vest_PlateCarrierFull_Black),
            QCLASS(Item_Vest_PlateCarrierFull_Green),
            QCLASS(Item_Vest_PlateCarrier_Black),
            QCLASS(Item_Vest_PlateCarrier_Green),
            QCLASS(Item_Vest_PlateCarrier_Coyote),
            QCLASS(Item_Vest_PlateCarrier_Khaki),
            QCLASS(Item_Vest_PlateCarrier_MARPAT),
            QCLASS(Item_Vest_PlateCarrier_White),
            QCLASS(Item_Vest_PlateCarrier_RGR),
            QCLASS(Item_Vest_PlateCarrier_Grey),
            QCLASS(Item_Vest_Tactical_DarkBlack),
            QCLASS(Item_Vest_Modular_Black),
            QCLASS(Item_Vest_Modular_Coyote)
        };
        weapons[] = {
            QCLASS(Vest_PlateCarrierHeavy_Black),
            QCLASS(Vest_PlateCarrierHeavy_Coyote),
            QCLASS(Vest_PlateCarrierHeavy_Green),
            QCLASS(Vest_PlateCarrierHeavy_White),
            QCLASS(Vest_PlateCarrierFull_Black),
            QCLASS(Vest_PlateCarrierFull_Green),
            QCLASS(Vest_PlateCarrier_Black),
            QCLASS(Vest_PlateCarrier_Green),
            QCLASS(Vest_PlateCarrier_Coyote),
            QCLASS(Vest_PlateCarrier_Khaki),
            QCLASS(Vest_PlateCarrier_MARPAT),
            QCLASS(Vest_PlateCarrier_White),
            QCLASS(Vest_PlateCarrier_RGR),
            QCLASS(Vest_PlateCarrier_Grey),
            QCLASS(Vest_Tactical_DarkBlack),
            QCLASS(Vest_Modular_Black),
            QCLASS(Vest_Modular_Coyote)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_main"};
        author = ECSTRING(main,Author);
        authors[] = {"Jonpas", "Pomigit", "BadHabitz", "Rory", "Emythiel", "Trenchgun", "Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
