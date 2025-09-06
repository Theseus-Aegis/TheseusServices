class O_APC_Wheeled_02_rcws_v2_F;
class CLASS(Otokar_Base): O_APC_Wheeled_02_rcws_v2_F {
    scope = 0;
    class TextureSources {
        class CLASS(Black) {
            displayName = "$STR_A3_TEXTURESOURCES_BLACK0";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\otokar_ext_01_black_co.paa),
                QPATHTOF(data\otokar_ext_02_black_co.paa),
                QPATHTOF(data\hmg_turret_black_co.paa),
                "a3\armor_f\data\camonet_csat_hex_desert_co.paa",
                "a3\armor_f\data\cage_csat_co.paa"
            };
            factions[] = {QCLASS(IND), QCLASS(BLU)};
        };
        class TheseusBlack: CLASS(Black) {
            displayName = ECSTRING(Main,Theseus_Black);
            textures[] = {
                QPATHTOF(data\otokar_ext_01_theseus_black_co.paa),
                QPATHTOF(data\otokar_ext_02_black_co.paa),
                QPATHTOF(data\hmg_turret_black_co.paa),
                "a3\armor_f\data\camonet_csat_hex_desert_co.paa",
                "a3\armor_f\data\cage_csat_co.paa"
            };
        };
    };

    animationList[] = {
        "showCamonetHull", 0,
        "showSLATHull", 0
    };
};

class CLASS(Otokar_I_Black): CLASS(Otokar_Base) {
    dlc = QUOTE(PREFIX);
    scope = 2;
    forceInGarage = 1;
    side = 2;
    faction = QCLASS(IND);
    author = "Mike, GilleeDoo";
    displayName = CSTRING(Otokar_Black);
    editorPreview = QPATHTOF(UI\Otokar_Black.jpg);
    crew = QCLASS(Unit_I_Contractor);
    typicalCargo[] = {QCLASS(Unit_I_Engineer)};

    textureList[] = {
        QCLASS(Black), 0.5,
        "TheseusBlack", 0.5
    };
};

class CLASS(Otokar_B_Black): CLASS(Otokar_I_Black) {
    scope = 2;
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_Contractor);
    typicalCargo[] = {QCLASS(Unit_B_Engineer)};
};
