class CfgVehicles {
    class B_supplyCrate_F;
    class CLASS(Box_Wearables): B_supplyCrate_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = CSTRING(Author);
        displayName = CSTRING(Box_Wearables);

        transportMaxWeapons = 9001;
        transportMaxMagazines = 9001;
        transportMaxItems = 9001;
        maximumload = 9001;

        class TransportWeapons {};
        class TransportMagazines {};
        class TransportItems {};
        class TransportBackpacks {};
    };
};
