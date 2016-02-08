class CfgVehicles {
    // Empty
    class B_AssaultPack_Kerry;
    class CLASS(Backpack_AssaultExpanded_Black): B_AssaultPack_Kerry {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "BadHabitz, Jonpas";
        displayname = CSTRING(Backpack_AssaultExpanded_Black);
        //picture = QPATHTOF(UI\backpack_assaultexpanded_black_ca.paa);//@todo
        hiddenSelectionsTextures[] = {
            "\a3\weapons_f\ammoboxes\bags\data\backpack_compact_blk_co.paa",
            QPATHTOEF(vests,data\vest_platecarrier_black_co.paa) // Expanded part - vest texture
        };
        maximumLoad = 180;
    };
    class CLASS(Backpack_AssaultExpanded_Green): B_AssaultPack_Kerry {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "BadHabitz, Jonpas";
        displayname = CSTRING(Backpack_AssaultExpanded_Green);
        //picture = QPATHTOF(UI\backpack_assaultexpanded_green_ca.paa);//@todo
        hiddenSelectionsTextures[] = {
            "\a3\weapons_f\ammoboxes\bags\data\backpack_compact_rgr_co.paa",
            QPATHTOEF(vests,data\vest_platecarrier_green_co.paa) // Expanded part - vest texture
        };
        maximumLoad = 180;
    };
    class CLASS(Backpack_AssaultExpanded_Tan): B_AssaultPack_Kerry {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "BadHabitz, Jonpas";
        displayname = CSTRING(Backpack_AssaultExpanded_Tan);
        picture = QPATHTOF(UI\backpack_assaultexpanded_tan_ca.paa);//@todo - update
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_assaultexpanded_tan_main_co.paa),
            QPATHTOEF(vests,data\vest_platecarrier_coyote_co.paa) // Expanded part - vest texture
        };
        maximumLoad = 180;
    };

    class B_Carryall_Base;
    class CLASS(Backpack_Carryall_DarkBlack): B_Carryall_Base {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Bohemia Interactive, BadHabitz, Jonpas";
        displayName = CSTRING(Backpack_Carryall_DarkBlack);
        picture = "\a3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_blk.paa";
        hiddenSelectionsTextures[] = {"\a3\weapons_f\ammoboxes\bags\data\backpack_tortila_blk_co.paa"};
    };

    class B_Kitbag_Base;
    class CLASS(Backpack_Kitbag_DarkBlack): B_Kitbag_Base {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Bohemia Interactive, BadHabitz, Jonpas";
        displayName = CSTRING(Backpack_Kitbag_DarkBlack);
        picture = QPATHTOF(UI\backpack_kitbag_darkblack_ca.paa);
        hiddenSelectionsTextures[] = {"\a3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
    };


    // Filled
    class CLASS(Backpack_AssaultExpanded_Green_ExplosivesTechnician_Filled): CLASS(Backpack_AssaultExpanded_Green) {
        scope = 1;

        class TransportMagazines {
            MACRO_ADDMAGAZINE(APERSBoundingMine_Range_Mag,3)
            MACRO_ADDMAGAZINE(ClaymoreDirectionalMine_Remote_Mag,2)
            MACRO_ADDMAGAZINE(SLAMDirectionalMine_Wire_Mag,2)
            MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,1)
        };

        class TransportItems {
            MACRO_ADDITEM(ToolKit,1)
            MACRO_ADDITEM(MineDetector,1)
        };
    };

    class CLASS(Backpack_Kitbag_DarkBlack_Medic_Filled): CLASS(Backpack_Kitbag_DarkBlack) {
        scope = 1;

        class TransportItems {
            MACRO_ADDITEM(Medikit,1)
            MACRO_ADDITEM(FirstAidKit,10)
        };
    };
};
