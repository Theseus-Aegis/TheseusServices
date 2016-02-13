class CfgVehicles {
    // Ground items
    #define MACRO_ITEM_COMMON \
        dlc = QUOTE(PREFIX); \
        scope = 2; \
        scopeCurator = 2; \
        vehicleClass = "WeaponsPrimary";

    class Weapon_Base_F;
    class CLASS(Item_MX_BlackCamo): Weapon_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas";
        displayName = CSTRING(MX_BlackCamo);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_BlackCamo),1);
        };
    };
    class CLASS(Item_MX_GL_BlackCamo): Weapon_Base_F {
        MACRO_ITEM_COMMON
        author = "Jonpas";
        displayName = CSTRING(MX_GL_BlackCamo);

        class TransportItems {
            MACRO_ADDITEM(CLASS(MX_GL_BlackCamo),1);
        };
    };


    // Box
    class Box_NATO_Support_F;
    class CLASS(Box_Weapons): Box_NATO_Support_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = ECSTRING(main,Author);
        displayName = CSTRING(Box_Weapons);

        transportMaxWeapons = 9001;
        transportMaxMagazines = 9001;
        transportMaxItems = 9001;
        maximumload = 9001;

        class TransportWeapons {
            MACRO_ADDWEAPON(CLASS(MX_BlackCamo),10)
            MACRO_ADDWEAPON(CLASS(MX_GL_BlackCamo),10)
        };

        class TransportMagazines {};
        class TransportItems {};
        class TransportBackpacks {};
    };
};
