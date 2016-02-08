class CfgVehicles {
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
