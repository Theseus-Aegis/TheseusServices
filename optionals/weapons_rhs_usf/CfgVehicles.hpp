class CfgVehicles {
    class CLASS(Backpack_AssaultExpanded_Green);
    class CLASS(Backpack_AssaultExpanded_Green_Specialist_Filled): CLASS(Backpack_AssaultExpanded_Green) {
        scope = 1;

        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhs_200rnd_556x45_M_SAW,3);
        };
    };

    class CLASS(Unit_Polo_CP_LS_TP_OB);
    class CLASS(Unit_I_Bodyguard): CLASS(Unit_Polo_CP_LS_TP_OB) {
        weapons[] = {"Throw", "Put", "tacs_rhsusf_weap_MP7A2", "rhsusf_weap_glock17g4", "Binocular"};
        respawnWeapons[] = {"Throw", "Put", "tacs_rhsusf_weap_MP7A2", "rhsusf_weap_glock17g4", "Binocular"};
        magazines[] = {ITEMS_9(rhsusf_mag_40Rnd_46x30_FMJ), ITEMS_2(rhsusf_mag_17Rnd_9x19_FMJ), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        respawnMagazines[] = {ITEMS_9(rhsusf_mag_40Rnd_46x30_FMJ), ITEMS_2(rhsusf_mag_17Rnd_9x19_FMJ), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    };

    class CLASS(Unit_Polo_TP_LS_TP_TB);
    class CLASS(Unit_I_Contractor): CLASS(Unit_Polo_TP_LS_TP_TB) {
        weapons[] = {"Throw", "Put", "tacs_rhs_weap_m4_pmag_grip3", "rhsusf_weap_glock17g4", "Binocular"};
        respawnWeapons[] = {"Throw", "Put", "tacs_rhs_weap_m4_pmag_grip3", "rhsusf_weap_glock17g4", "Binocular"};
        magazines[] = {ITEMS_8(rhs_mag_30Rnd_556x45_Mk318_Stanag), ITEMS_3(rhsusf_mag_17Rnd_9x19_FMJ), "SmokeShell", ITEMS_4(HandGrenade)};
        respawnMagazines[] = {ITEMS_8(rhs_mag_30Rnd_556x45_Mk318_Stanag), ITEMS_3(rhsusf_mag_17Rnd_9x19_FMJ), "SmokeShell", ITEMS_4(HandGrenade)};
    };

    class CLASS(Unit_Combat_RS_BS_GP_BB);
    class CLASS(Unit_I_Contractor_GL): CLASS(Unit_Combat_RS_BS_GP_BB) {
        weapons[] = {"Throw", "Put", "tacs_rhs_weap_m4_m203", "rhsusf_weap_glock17g4", "Binocular"};
        respawnWeapons[] = {"Throw", "Put", "tacs_rhs_weap_m4_m203", "rhsusf_weap_glock17g4", "Binocular"};
        magazines[] = {ITEMS_5(rhs_mag_30Rnd_556x45_Mk318_Stanag), "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", ITEMS_3(rhs_mag_M441_HE), ITEMS_2(rhsusf_mag_17Rnd_9x19_FMJ), "SmokeShell", "SmokeShellGreen", ITEMS_2(HandGrenade)};
        respawnMagazines[] = {ITEMS_5(rhs_mag_30Rnd_556x45_Mk318_Stanag), "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", ITEMS_3(rhs_mag_M441_HE), ITEMS_2(rhsusf_mag_17Rnd_9x19_FMJ), "SmokeShell", "SmokeShellGreen", ITEMS_2(HandGrenade)};
    };

    class CLASS(Unit_I_Engineer): CLASS(Unit_Polo_TP_LS_TP_TB) {
        weapons[] = {"Throw", "Put", "tacs_rhs_weap_m4_mstock", "rhsusf_weap_glock17g4", "Binocular"};
        respawnWeapons[] = {"Throw", "Put", "tacs_rhs_weap_m4_mstock", "rhsusf_weap_glock17g4", "Binocular"};
        magazines[] = {ITEMS_12(rhs_mag_30Rnd_556x45_Mk318_Stanag), ITEMS_2(rhsusf_mag_17Rnd_9x19_FMJ), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        respawnMagazines[] = {ITEMS_12(rhs_mag_30Rnd_556x45_Mk318_Stanag), ITEMS_2(rhsusf_mag_17Rnd_9x19_FMJ), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    };

    class CLASS(Unit_I_Medic): CLASS(Unit_Combat_RS_BS_GP_BB) {
        weapons[] = {"Throw", "Put", "tacs_rhsusf_weap_MP7A2", "rhsusf_weap_glock17g4", "Binocular"};
        respawnWeapons[] = {"Throw", "Put", "tacs_rhsusf_weap_MP7A2", "rhsusf_weap_glock17g4", "Binocular"};
        magazines[] = {ITEMS_9(rhsusf_mag_40Rnd_46x30_FMJ), ITEMS_2(rhsusf_mag_17Rnd_9x19_FMJ), "SmokeShell", ITEMS_2(HandGrenade)};
        respawnMagazines[] = {ITEMS_9(rhsusf_mag_40Rnd_46x30_FMJ), ITEMS_2(rhsusf_mag_17Rnd_9x19_FMJ), "SmokeShell", ITEMS_2(HandGrenade)};
    };

    class CLASS(Unit_I_Specialist): CLASS(Unit_Combat_RS_BS_GP_BB) {
        weapons[] = {"Throw", "Put", "tacs_rhs_weap_m249_pip_S", "rhsusf_weap_glock17g4", "Binocular"};
        respawnWeapons[] = {"Throw", "Put", "tacs_rhs_weap_m249_pip_S", "rhsusf_weap_glock17g4", "Binocular"};
        magazines[] = {"rhs_200rnd_556x45_M_SAW", ITEMS_2(rhsusf_mag_17Rnd_9x19_FMJ), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        respawnMagazines[] = {"rhs_200rnd_556x45_M_SAW", ITEMS_2(rhsusf_mag_17Rnd_9x19_FMJ), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    };

    class CLASS(Unit_TShirt_JP_GS_LP_BB);
    class CLASS(Unit_I_TeamLeader): CLASS(Unit_TShirt_JP_GS_LP_BB) {
        weapons[] = {"Throw", "Put", "tacs_rhs_weap_m4_mstock", "rhsusf_weap_glock17g4", "Binocular"};
        respawnWeapons[] = {"Throw", "Put", "tacs_rhs_weap_m4_mstock", "rhsusf_weap_glock17g4", "Binocular"};
        magazines[] = {ITEMS_11(rhs_mag_30Rnd_556x45_Mk318_Stanag), ITEMS_2(rhsusf_mag_17Rnd_9x19_FMJ), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        respawnMagazines[] = {ITEMS_11(rhs_mag_30Rnd_556x45_Mk318_Stanag), ITEMS_2(rhsusf_mag_17Rnd_9x19_FMJ), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    };

    class CLASS(Unit_I_Marksman): CLASS(Unit_TShirt_JP_GS_LP_BB) {
        weapons[] = {"Throw", "Put", "tacs_rhs_weap_sr25", "rhsusf_weap_glock17g4", "Binocular"};
        respawnWeapons[] = {"Throw", "Put", "tacs_rhs_weap_sr25", "rhsusf_weap_glock17g4", "Binocular"};
        magazines[] = {ITEMS_6(rhsusf_20Rnd_762x51_m118_special_Mag), ITEMS_2(rhsusf_mag_17Rnd_9x19_FMJ), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        respawnMagazines[] = {ITEMS_6(rhsusf_20Rnd_762x51_m118_special_Mag), ITEMS_2(rhsusf_mag_17Rnd_9x19_FMJ), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    };

    class CLASS(Unit_I_PilotHeli): CLASS(Unit_Combat_RS_BS_GP_BB) {
        weapons[] = {"Throw", "Put", "rhsusf_weap_glock17g4", "Binocular"};
        respawnWeapons[] = {"Throw", "Put", "rhsusf_weap_glock17g4", "Binocular"};
        magazines[] = {ITEMS_2(rhsusf_mag_17Rnd_9x19_FMJ), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
        respawnMagazines[] = {ITEMS_2(rhsusf_mag_17Rnd_9x19_FMJ), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    };
};
