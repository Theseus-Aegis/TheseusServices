class CfgVehicles {
    // Ground items
    #define MACRO_ITEM_COMMON \
        dlc = QUOTE(PREFIX); \
        scope = 2; \
        scopeCurator = 2

    class Weapon_Base_F;
    class CLASS(Item_MX_BlackCamo): Weapon_Base_F {
        MACRO_ITEM_COMMON;
        vehicleClass = "WeaponsPrimary";
        author = "Jonpas";
        displayName = CSTRING(MX_BlackCamo);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_BlackCamo),1);
        };
    };
    class CLASS(Item_MX_GL_BlackCamo): Weapon_Base_F {
        MACRO_ITEM_COMMON;
        vehicleClass = "WeaponsPrimary";
        author = "Jonpas";
        displayName = CSTRING(MX_GL_BlackCamo);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_GL_BlackCamo),1);
        };
    };
    class CLASS(Item_EBR_Black_F): Weapon_Base_F {
        MACRO_ITEM_COMMON;
        vehicleClass = "WeaponsPrimary";
        author = "Mike";
        displayName = CSTRING(EBR_Black_F);

        class TransportItems {
            MACRO_ADDITEM(CLASS(EBR_Black_F),1);
        };
    };
    class CLASS(Item_Mk20_Black_F): Weapon_Base_F {
        MACRO_ITEM_COMMON;
        vehicleClass = "WeaponsPrimary";
        author = "Mike";
        displayName = CSTRING(Mk20_Black_F);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Mk20_Black_F),1);
        };
    };
    class CLASS(Item_MK20C_Black_F): Weapon_Base_F {
        MACRO_ITEM_COMMON;
        vehicleClass = "WeaponsPrimary";
        author = "Mike";
        displayName = CSTRING(MK20C_Black_F);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MK20C_Black_F),1);
        };
    };
    class CLASS(Item_MK20_EGLM_Black_F): Weapon_Base_F {
        MACRO_ITEM_COMMON;
        vehicleClass = "WeaponsPrimary";
        author = "Mike";
        displayName = CSTRING(MK20_EGLM_Black_F);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MK20_EGLM_Black_F),1);
        };
    };
    class Pistol_Base_F;
    class CLASS(Item_Walther_P99): Pistol_Base_F {
        MACRO_ITEM_COMMON;
        vehicleClass = "WeaponsHandguns";
        author = "JoramD";
        displayName = CSTRING(Walther_P99);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Walther_P99),1);
        };
    };
    class CLASS(Item_Walther_P99_Tan): CLASS(Item_Walther_P99) {
        displayName = CSTRING(Walther_P99_Tan);

        class TransportItems {
            MACRO_ADDITEM(CLASS(Walther_P99_Tan),1);
        };
    };

    class Launcher_Base_F;
    class CLASS(Item_MRAWS_Black_F): Launcher_Base_F {
        MACRO_ITEM_COMMON;
        vehicleClass = "WeaponsSecondary";
        author = "Kresky";
        displayName = CSTRING(MRAWS_Black_F);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MRAWS_Black_F),1);
        };
    };
    class CLASS(Item_MRAWS_Black_Rail_F): Launcher_Base_F {
        MACRO_ITEM_COMMON;
        vehicleClass = "WeaponsSecondary";
        author = "Kresky";
        displayName = CSTRING(MRAWS_Black_Rail_F);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MRAWS_Black_Rail_F),1);
        };
    };


    // Box
    class Box_NATO_Wps_F;
    class CLASS(Box_Weapons): Box_NATO_Wps_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = ECSTRING(main,Author);
        displayName = CSTRING(Box_Weapons);

        transportMaxWeapons = 9001;
        transportMaxMagazines = 9001;
        transportMaxItems = 9001;
        maximumload = 9001;

        class TransportWeapons {
            MACRO_ADDWEAPON(CLASS(EBR_Black_F),10);
            MACRO_ADDWEAPON(CLASS(Mk20_Black_F),10);
            MACRO_ADDWEAPON(CLASS(MK20C_Black_F),10);
            MACRO_ADDWEAPON(CLASS(MK20_EGLM_Black_F),10);
            MACRO_ADDWEAPON(CLASS(MRAWS_Black_F),10);
            MACRO_ADDWEAPON(CLASS(MRAWS_Black_Rail_F),10);
            MACRO_ADDWEAPON(CLASS(MX_BlackCamo),10);
            MACRO_ADDWEAPON(CLASS(MX_GL_BlackCamo),10);
            MACRO_ADDWEAPON(CLASS(Walther_P99),10);
            MACRO_ADDWEAPON(CLASS(Walther_P99_Tan),10);
        };

        class TransportMagazines {};
        class TransportItems {};
        class TransportBackpacks {};
    };
};
