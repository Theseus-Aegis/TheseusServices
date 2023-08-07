class Boat_Transport_02_base_F;
class CLASS(RHIB_Base): Boat_Transport_02_base_F {
    class TextureSources {
        class TheseusBlack {
            displayName = ECSTRING(Main,Theseus_Black);
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\rhib_ext_co.paa),
                QPATHTOF(data\rhib_int02_co.paa)
            };
            factions[] = {QCLASS(IND), QCLASS(BLU)};
        };
    };
};

class CLASS(RHIB_I_Theseus_Black): CLASS(RHIB_Base) {
    MACRO_LANDVEHICLE_CARGO;
    dlc = QUOTE(PREFIX);
    scope = 2;
    scopeCurator = 2;
    forceInGarage = 1;
    side = 2;
    faction = QCLASS(IND);
    author = "GilleeDoo, JoramD";
    editorPreview = QPATHTOF(UI\RHIB_Theseus_Black.jpg);
    crew = QCLASS(Unit_I_Contractor);
    typicalCargo[] = {QCLASS(Unit_I_Contractor)};

    textureList[] = {
        "TheseusBlack", 1
    };
};
class CLASS(RHIB_B_Theseus_Black): CLASS(RHIB_I_Theseus_Black) {
    scope = 2;
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_Contractor);
    typicalCargo[] = {QCLASS(Unit_B_Contractor)};
};
