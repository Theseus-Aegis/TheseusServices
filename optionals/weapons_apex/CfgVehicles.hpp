class CfgVehicles {
    class CLASS(Unit_Polo_TP_LS_TP_TB);
    class CLASS(Unit_I_Contractor): CLASS(Unit_Polo_TP_LS_TP_TB) {
        weapons[] = {QCLASS(tac_HK416_Mod), "hgun_P07_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(tac_HK416_Mod), "hgun_P07_F", "Binocular", "Throw", "Put"};
        magazines[] = {ITEMS_8(30Rnd_556x45_Stanag), ITEMS_3(16Rnd_9x21_Mag), "SmokeShell", ITEMS_4(HandGrenade)};
        respawnMagazines[] = {ITEMS_8(30Rnd_556x45_Stanag), ITEMS_3(16Rnd_9x21_Mag), "SmokeShell", ITEMS_4(HandGrenade)};
    };

    class CLASS(Unit_Combat_RS_BS_GP_BB);
    class CLASS(Unit_I_Contractor_GL): CLASS(Unit_Combat_RS_BS_GP_BB) {
        weapons[] = {QCLASS(tac_HK416GL_Mod), "hgun_P07_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(tac_HK416GL_Mod), "hgun_P07_F", "Binocular", "Throw", "Put"};
        magazines[] = {ITEMS_5(30Rnd_556x45_Stanag), "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", ITEMS_3(1Rnd_HE_Grenade_shell), ITEMS_2(16Rnd_9x21_Mag), "SmokeShell", "SmokeShellGreen", ITEMS_2(HandGrenade)};
        respawnMagazines[] = {ITEMS_5(30Rnd_556x45_Stanag), "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", ITEMS_3(1Rnd_HE_Grenade_shell), ITEMS_2(16Rnd_9x21_Mag), "SmokeShell", "SmokeShellGreen", ITEMS_2(HandGrenade)};
    };

    class CLASS(Unit_I_Engineer): CLASS(Unit_Polo_TP_LS_TP_TB) {
        weapons[] = {QCLASS(tac_HK416_Mod), "hgun_P07_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(tac_HK416_Mod), "hgun_P07_F", "Binocular", "Throw", "Put"};
        magazines[] = {ITEMS_12(30Rnd_556x45_Stanag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        respawnMagazines[] = {ITEMS_12(30Rnd_556x45_Stanag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    };

    class CLASS(Unit_TShirt_JP_GS_LP_BB);
    class CLASS(Unit_I_TeamLeader): CLASS(Unit_TShirt_JP_GS_LP_BB) {
        weapons[] = {QCLASS(tac_HK416_Mod), "hgun_P07_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(tac_HK416_Mod), "hgun_P07_F", "Binocular", "Throw", "Put"};
        magazines[] = {ITEMS_11(30Rnd_556x45_Stanag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        respawnMagazines[] = {ITEMS_11(30Rnd_556x45_Stanag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    };

    class CLASS(Unit_I_Medic): CLASS(Unit_Combat_RS_BS_GP_BB) {
        weapons[] = {QCLASS(tac_HK416_Mod), "hgun_P07_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(tac_HK416_Mod), "hgun_P07_F", "Binocular", "Throw", "Put"};
        magazines[] = {ITEMS_11(30Rnd_556x45_Stanag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        respawnMagazines[] = {ITEMS_11(30Rnd_556x45_Stanag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    };

    class CLASS(Unit_I_Marksman): CLASS(Unit_TShirt_JP_GS_LP_BB) {
        weapons[] = {QCLASS(tac_MXM_Mod), "hgun_P07_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(tac_MXM_Mod), "hgun_P07_F", "Binocular", "Throw", "Put"};
        magazines[] = {ITEMS_7(30Rnd_65x39_caseless_black_mag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        respawnMagazines[] = {ITEMS_7(30Rnd_65x39_caseless_black_mag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    };

    class CLASS(Unit_I_Specialist): CLASS(Unit_Combat_RS_BS_GP_BB) {
        weapons[] = {QCLASS(tac_FN_Mod)};
        respawnWeapons[] = {QCLASS(tac_FN_Mod)};
        magazines[] = {ITEMS_3(200Rnd_556x45_Box_F), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        respawnMagazines[] = {ITEMS_3(200Rnd_556x45_Box_F), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    };

    class CLASS(Unit_I_PilotHeli): CLASS(Unit_Combat_RS_BS_GP_BB) {
        weapons[] = {"SMG_03C_black", "hgun_P07_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"SMG_03C_black", "hgun_P07_F", "Binocular", "Throw", "Put"};
        magazines[] = {ITEMS_4(50Rnd_570x28_SMG_03), ITEMS_2(16Rnd_9x21_Mag), "SmokeShell", ITEMS_4(HandGrenade)};
        respawnMagazines[] = {ITEMS_4(50Rnd_570x28_SMG_03), ITEMS_2(16Rnd_9x21_Mag), "SmokeShell", ITEMS_4(HandGrenade)};
    };
};
