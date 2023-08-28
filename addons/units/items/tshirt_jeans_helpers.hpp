// Naming pattern: SizeSleeves_ColorShirt_ColorPants_ColorBoots
// TShirt - Jean Pants
class CLASS(Unit_TShirt_JP_Base): B_Soldier_base_F {
    MACRO_BASE_CLASS_COMMON;
    nakedUniform = QCLASS(Unit_Underwear_BlackLogo);
    model = "\A3\Characters_F\Civil\c_citizen5.p3d";
    hiddenSelections[] = {"Camo1", "Camo2"};
};

class CLASS(Unit_TShirt_JP_GS_LP_BB): CLASS(Unit_TShirt_JP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_TShirt_JP_GS_LP_BB);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\underwear_greenlogo_co.paa),
        QPATHTOF(data\jeans_lp_bb_co.paa)
    };
};
class CLASS(Unit_TShirt_JP_GS_TP_BB): CLASS(Unit_TShirt_JP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_TShirt_JP_GS_TP_BB);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\underwear_greenlogo_co.paa),
        QPATHTOF(data\jeans_tp_bb_co.paa)
    };
};
class CLASS(Unit_TShirt_JP_BS_LP_BB): CLASS(Unit_TShirt_JP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_TShirt_JP_BS_LP_BB);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\underwear_blacklogo_co.paa),
        QPATHTOF(data\jeans_lp_bb_co.paa)
    };
};
class CLASS(Unit_TShirt_JP_BS_TP_BB): CLASS(Unit_TShirt_JP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_TShirt_JP_BS_TP_BB);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\underwear_blacklogo_co.paa),
        QPATHTOF(data\jeans_tp_bb_co.paa)
    };
};
class CLASS(Unit_TShirt_JP_LS_LP_BB): CLASS(Unit_TShirt_JP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_TShirt_JP_LS_LP_BB);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\underwear_bluelogo_co.paa),
        QPATHTOF(data\jeans_lp_bb_co.paa)
    };
};
class CLASS(Unit_TShirt_JP_WS_LP_BB): CLASS(Unit_TShirt_JP_Base) {
    scope = 1;
    author = "Pomigit, Jonpas";
    uniformClass = QCLASS(Uniform_TShirt_JP_WS_LP_BB);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\underwear_whitelogo_co.paa),
        QPATHTOF(data\jeans_lp_bb_co.paa)
    };
};
