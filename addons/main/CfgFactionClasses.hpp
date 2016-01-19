class CfgFactionClasses {
    class CLASS(IND) {
        displayName = CSTRING(Company);
        //flag = QPATHTOF(UI\flag_tac_co.paa);//@todo - Theseus flag
        icon = QPATHTOF(UI\logo_tac_small_ca.paa);
        side = 2;
        priority = 2;
    };
    class CLASS(BLU): CLASS(IND) {
        side = 1;
        priority = 3;
    };
};
