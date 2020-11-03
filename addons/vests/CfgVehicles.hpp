class CfgVehicles {
    // Ground items
    #define MACRO_ITEM_COMMON \
        dlc = QUOTE(PREFIX); \
        scope = 2; \
        scopeCurator = 2; \
        vehicleClass = "ItemsVests";

    // Plate Carrier Full
    class Vest_Base_F;
    class CLASS(Item_Vest_PlateCarrierFull_Black): Vest_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas";
        displayName = CSTRING(Vest_PlateCarrierFull_Black);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Vest_PlateCarrierFull_Black),1);
        };
    };
    class CLASS(Item_Vest_PlateCarrierFull_Green): Vest_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas";
        displayName = CSTRING(Vest_PlateCarrierFull_Green);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Vest_PlateCarrierFull_Green),1);
        };
    };

    // Plate Carrier
    class CLASS(Item_Vest_PlateCarrier_Black): Vest_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas";
        displayName = CSTRING(Vest_PlateCarrier_Black);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Vest_PlateCarrier_Black),1);
        };
    };
    class CLASS(Item_Vest_PlateCarrier_Green): Vest_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas";
        displayName = CSTRING(Vest_PlateCarrier_Green);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Vest_PlateCarrier_Green),1);
        };
    };
    class CLASS(Item_Vest_PlateCarrier_Coyote): Vest_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas";
        displayName = CSTRING(Vest_PlateCarrier_Coyote);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Vest_PlateCarrier_Coyote),1);
        };
    };
    class CLASS(Item_Vest_PlateCarrier_Khaki): Vest_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas";
        displayName = CSTRING(Vest_PlateCarrier_Khaki);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Vest_PlateCarrier_Khaki),1);
        };
    };
    class CLASS(Item_Vest_PlateCarrier_MARPAT): Vest_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas";
        displayName = CSTRING(Vest_PlateCarrier_MARPAT);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Vest_PlateCarrier_MARPAT),1);
        };
    };
    class CLASS(Item_Vest_PlateCarrier_White): Vest_Base_F {
        MACRO_ITEM_COMMON
        author = "Kresky";
        displayName = CSTRING(Vest_PlateCarrier_White);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Vest_PlateCarrier_White),1);
        };
    };
    class CLASS(Item_Vest_PlateCarrier_RGR): Vest_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas, JoramD, GilleeDoo";
        displayName = CSTRING(Vest_PlateCarrier_RGR);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Vest_PlateCarrier_RGR),1);
        };
    };

    // Plate Carrier Heavy
    class CLASS(Item_Vest_PlateCarrierHeavy_Black): Vest_Base_F {
        MACRO_ITEM_COMMON
        author = "Kresky";
        displayName = CSTRING(Vest_PlateCarrierHeavy_Black);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Vest_PlateCarrierHeavy_Black),1);
        };
    };
    class CLASS(Item_Vest_PlateCarrierHeavy_Coyote): Vest_Base_F {
        MACRO_ITEM_COMMON
        author = "Kresky";
        displayName = CSTRING(Vest_PlateCarrierHeavy_Coyote);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Vest_PlateCarrierHeavy_Coyote),1);
        };
    };
    class CLASS(Item_Vest_PlateCarrierHeavy_Green): Vest_Base_F {
        MACRO_ITEM_COMMON
        author = "Kresky";
        displayName = CSTRING(Vest_PlateCarrierHeavy_Green);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Vest_PlateCarrierHeavy_Green),1);
        };
    };
    class CLASS(Item_Vest_PlateCarrierHeavy_White): Vest_Base_F {
        MACRO_ITEM_COMMON
        author = "Kresky";
        displayName = CSTRING(Vest_PlateCarrierHeavy_White);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Vest_PlateCarrierHeavy_White),1);
        };
    };

    // Tactical
    class CLASS(Item_Vest_Tactical_DarkBlack): Vest_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas";
        displayName = CSTRING(Vest_Tactical_DarkBlack);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Vest_Tactical_DarkBlack),1);
        };
    };

    // Modular Carrier
    class CLASS(Item_Vest_Modular_Black): Vest_Base_F {
        MACRO_ITEM_COMMON
        author = "Trenchgun, TyroneMF";
        displayName = CSTRING(Vest_Modular_Black);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Vest_Modular_Black),1);
        };
    };

    class CLASS(Item_Vest_Modular_Green): Vest_Base_F {
        MACRO_ITEM_COMMON
        author = "Trenchgun, TyroneMF";
        displayName = CSTRING(Vest_Modular_Green);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Vest_Modular_Green),1);
        };
    };

    class CLASS(Item_Vest_Modular_Coyote): Vest_Base_F {
        MACRO_ITEM_COMMON
        author = "Trenchgun, TyroneMF";
        displayName = CSTRING(Vest_Modular_Coyote);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Vest_Modular_Coyote),1);
        };
    };

    // Box
    class B_supplyCrate_F;
    class CLASS(Box_Wearables): B_supplyCrate_F {
        class TransportItems {
            MACRO_ADDITEM(CLASS(Vest_PlateCarrierFull_Black),10);
            MACRO_ADDITEM(CLASS(Vest_PlateCarrierFull_Green),10);
            MACRO_ADDITEM(CLASS(Vest_PlateCarrier_Black),10);
            MACRO_ADDITEM(CLASS(Vest_PlateCarrier_Green),10);
            MACRO_ADDITEM(CLASS(Vest_PlateCarrier_Coyote),10);
            MACRO_ADDITEM(CLASS(Vest_PlateCarrier_Khaki),10);
            MACRO_ADDITEM(CLASS(Vest_PlateCarrier_MARPAT),10);
            MACRO_ADDITEM(CLASS(Vest_PlateCarrier_White),10);
            MACRO_ADDITEM(CLASS(Vest_PlateCarrierHeavy_Black),10);
            MACRO_ADDITEM(CLASS(Vest_PlateCarrierHeavy_Coyote),10);
            MACRO_ADDITEM(CLASS(Vest_PlateCarrierHeavy_Green),10);
            MACRO_ADDITEM(CLASS(Vest_PlateCarrierHeavy_White),10);
            MACRO_ADDITEM(CLASS(Vest_Tactical_DarkBlack),10);
            MACRO_ADDITEM(CLASS(Vest_Modular_Black),10);
            MACRO_ADDITEM(CLASS(Vest_Modular_Green),10);
            MACRO_ADDITEM(CLASS(Vest_Modular_Coyote),10);
        };
    };
};
