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
            QCLASS(Item_Vest_Tactical_DarkBlack)
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
            QCLASS(Vest_Tactical_DarkBlack)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_main"};
        author = ECSTRING(main,Author);
        authors[] = {"Jonpas", "Pomigit", "BadHabitz", "Rory", "Kresky"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
