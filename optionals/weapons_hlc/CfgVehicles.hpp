class CfgVehicles {
    class CLASS(Unit_Polo_TP_LS_TP_TB);
    class CLASS(Unit_I_Contractor): CLASS(Unit_Polo_TP_LS_TP_TB) {
        weapons[] = {"Throw", "Put", "hlc_rifle_M4", "hgun_P07_F", "Binocular"};
        respawnWeapons[] = {"Throw", "Put", "hlc_rifle_M4", "hgun_P07_F", "Binocular"};
        magazines[] = {ITEMS_8(hlc_30rnd_556x45_EPR), ITEMS_3(16Rnd_9x21_Mag), "SmokeShell", ITEMS_4(HandGrenade)};
        respawnMagazines[] = {ITEMS_8(hlc_30rnd_556x45_EPR), ITEMS_3(16Rnd_9x21_Mag), "SmokeShell", ITEMS_4(HandGrenade)};
    };

    class CLASS(Unit_Combat_RS_BS_GP_BB);
    class CLASS(Unit_I_Contractor_GL): CLASS(Unit_Combat_RS_BS_GP_BB) {
        weapons[] = {"Throw", "Put", "hlc_rifle_m4m203", "hgun_P07_F", "Binocular"};
        respawnWeapons[] = {"Throw", "Put", "hlc_rifle_m4m203", "hgun_P07_F", "Binocular"};
        magazines[] = {ITEMS_5(hlc_30rnd_556x45_EPR), "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", ITEMS_3(1Rnd_HE_Grenade_shell), ITEMS_2(16Rnd_9x21_Mag), "SmokeShell", "SmokeShellGreen", ITEMS_2(HandGrenade)};
        respawnMagazines[] = {ITEMS_5(hlc_30rnd_556x45_EPR), "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", ITEMS_3(1Rnd_HE_Grenade_shell), ITEMS_2(16Rnd_9x21_Mag), "SmokeShell", "SmokeShellGreen", ITEMS_2(HandGrenade)};
    };

    class CLASS(Unit_I_Engineer): CLASS(Unit_Polo_TP_LS_TP_TB) {
        weapons[] = {"Throw", "Put", "hlc_rifle_M4", "hgun_P07_F", "Binocular"};
        respawnWeapons[] = {"Throw", "Put", "hlc_rifle_M4", "hgun_P07_F", "Binocular"};
        magazines[] = {ITEMS_12(hlc_30rnd_556x45_EPR), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        respawnMagazines[] = {ITEMS_12(hlc_30rnd_556x45_EPR), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    };

    class CLASS(Unit_TShirt_JP_GS_LP_BB);
    class CLASS(Unit_I_TeamLeader): CLASS(Unit_TShirt_JP_GS_LP_BB) {
        weapons[] = {"Throw", "Put", "hlc_rifle_M4", "hgun_Rook40_F", "Binocular"};
        respawnWeapons[] = {"Throw", "Put", "hlc_rifle_M4", "hgun_Rook40_F", "Binocular"};
        magazines[] = {ITEMS_11(hlc_30rnd_556x45_EPR), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        respawnMagazines[] = {ITEMS_11(hlc_30rnd_556x45_EPR), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    };
};
