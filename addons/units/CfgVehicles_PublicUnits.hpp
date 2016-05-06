// Included in CfgVehicles.hpp

class CLASS(Unit_I_Bodyguard): CLASS(Unit_Polo_CP_LS_TP_OB) {
    scope = 2;
    author = "Pomigit, Jonpas";
    displayName = CSTRING(Unit_Bodyguard);
    weapons[] = {"Throw", "Put", "SMG_02_ACO_F", "hgun_P07_F", "Binocular"};
    respawnWeapons[] = {"Throw", "Put", "SMG_02_ACO_F", "hgun_P07_F", "Binocular"};
    magazines[] = {ITEMS_9(30Rnd_9x21_Mag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    respawnMagazines[] = {ITEMS_9(30Rnd_9x21_Mag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    linkedItems[] = {"G_Shades_Black", QCLASS(Vest_Tactical_DarkBlack)};
    respawnLinkedItems[] = {"G_Shades_Black", QCLASS(Vest_Tactical_DarkBlack)};

    headgearList[] = {
        QCLASS(Cap_Earpiece_BlackLogo), 1,
        QCLASS(Cap_Earpiece_TanLogo), 1
    };

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_unitHeadgear; };";
    };
};
class CLASS(Unit_B_Bodyguard): CLASS(Unit_I_Bodyguard) {
    side = 1;
    faction = QCLASS(BLU);
};

class CLASS(Unit_I_Contractor): CLASS(Unit_Polo_TP_LS_TP_TB) {
    scope = 2;
    author = "Pomigit, Jonpas";
    displayName = CSTRING(Unit_Contractor);
    weapons[] = {"Throw", "Put", QCLASS(MX_BlackCamo), "hgun_P07_F", "Binocular"};
    respawnWeapons[] = {"Throw", "Put", QCLASS(MX_BlackCamo), "hgun_P07_F", "Binocular"};
    magazines[] = {ITEMS_8(30Rnd_65x39_caseless_mag), ITEMS_3(16Rnd_9x21_Mag), "SmokeShell", ITEMS_4(HandGrenade)};
    respawnMagazines[] = {ITEMS_8(30Rnd_65x39_caseless_mag), ITEMS_3(16Rnd_9x21_Mag), "SmokeShell", ITEMS_4(HandGrenade)};
    linkedItems[] = {"G_Shades_Black", QCLASS(Vest_PlateCarrier_MARPAT)};
    respawnLinkedItems[] = {"G_Shades_Black", QCLASS(Vest_PlateCarrier_MARPAT)};

    headgearList[] = {
        QCLASS(Cap_BlackLogo), 1,
        QCLASS(Cap_TanLogo), 1,
        QCLASS(Cap_Earpiece_BlackLogo), 1,
        QCLASS(Cap_Earpiece_TanLogo), 1
    };

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_unitHeadgear; };";
    };
};
class CLASS(Unit_B_Contractor): CLASS(Unit_I_Contractor) {
    scope = 2;
    side = 1;
    faction = QCLASS(BLU);
};

class CLASS(Unit_I_Contractor_GL): CLASS(Unit_Combat_RS_BS_GP_BB) {
    scope = 2;
    author = "Pomigit, Jonpas";
    displayName = CSTRING(Unit_Contractor_GL);
    weapons[] = {"Throw", "Put", QCLASS(MX_GL_BlackCamo), "hgun_P07_F", "Binocular"};
    respawnWeapons[] = {"Throw", "Put", QCLASS(MX_BlackCamo), "hgun_P07_F", "Binocular"};
    magazines[] = {ITEMS_5(30Rnd_65x39_caseless_mag), "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", ITEMS_3(1Rnd_HE_Grenade_shell), ITEMS_2(16Rnd_9x21_Mag), "SmokeShell", "SmokeShellGreen", ITEMS_2(HandGrenade)};
    respawnMagazines[] = {ITEMS_5(30Rnd_65x39_caseless_mag), "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", ITEMS_3(1Rnd_HE_Grenade_shell), ITEMS_2(16Rnd_9x21_Mag), "SmokeShell", "SmokeShellGreen", ITEMS_2(HandGrenade)};
    linkedItems[] = {"G_Shades_Black", QCLASS(Vest_Tactical_DarkBlack)};
    respawnLinkedItems[] = {"G_Shades_Black", QCLASS(Vest_Tactical_DarkBlack)};

    headgearList[] = {
        QCLASS(Cap_BlackLogo), 1,
        QCLASS(Cap_TanLogo), 1,
        QCLASS(Cap_Earpiece_BlackLogo), 1,
        QCLASS(Cap_Earpiece_TanLogo), 1
    };

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_unitHeadgear; };";
    };
};
class CLASS(Unit_B_Contractor_GL): CLASS(Unit_I_Contractor_GL) {
    scope = 2;
    side = 1;
    faction = QCLASS(BLU);
};

class CLASS(Unit_I_Engineer): CLASS(Unit_Polo_TP_LS_TP_TB) {
    scope = 2;
    author = "Pomigit, Jonpas";
    displayName = CSTRING(Unit_Engineer);
    weapons[] = {"Throw", "Put", QCLASS(MX_BlackCamo_MRCO), "hgun_P07_F", "Binocular"};
    respawnWeapons[] = {"Throw", "Put", QCLASS(MX_BlackCamo_MRCO), "hgun_P07_F", "Binocular"};
    magazines[] = {ITEMS_12(30Rnd_65x39_caseless_mag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    respawnMagazines[] = {ITEMS_12(30Rnd_65x39_caseless_mag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    linkedItems[] = {"G_Shades_Black", QCLASS(Vest_PlateCarrier_Green)};
    respawnLinkedItems[] = {"G_Shades_Black", QCLASS(Vest_PlateCarrier_Green)};
    backpack = QCLASS(Backpack_AssaultExpanded_Green_ExplosivesTechnician_Filled);

    engineer = 1;
    detectSkill = 80;
    canDeactivateMines = 1;
    icon = "iconManEngineer";
	picture = "pictureRepair";

    headgearList[] = {
        QCLASS(Cap_Backwards_BlackLogo), 1,
        QCLASS(Cap_Backwards_TanLogo), 1,
        QCLASS(Hat_Boonie_RangerGreen), 1,
        QCLASS(Hat_Boonie_DesertMARPAT), 1,
        QCLASS(Hat_Boonie_Woodland), 1,
        QCLASS(Hat_Boonie_UCP), 1
    };

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_unitHeadgear; };";
    };
};
class CLASS(Unit_B_Engineer): CLASS(Unit_I_Engineer) {
    scope = 2;
    side = 1;
    faction = QCLASS(BLU);
};

class CLASS(Unit_I_Medic): CLASS(Unit_Combat_RS_BS_GP_BB) {
    scope = 2;
    author = "Pomigit, Jonpas";
    displayName = CSTRING(Unit_Medic);
    weapons[] = {"Throw", "Put", "SMG_02_ACO_F", "hgun_P07_F", "Binocular"};
    respawnWeapons[] = {"Throw", "Put", "SMG_02_ACO_F", "hgun_P07_F", "Binocular"};
    magazines[] = {ITEMS_9(30Rnd_9x21_Mag), ITEMS_2(16Rnd_9x21_Mag), "SmokeShell", ITEMS_2(HandGrenade)};
    respawnMagazines[] = {ITEMS_9(30Rnd_9x21_Mag), ITEMS_2(16Rnd_9x21_Mag), "SmokeShell", ITEMS_2(HandGrenade)};
    linkedItems[] = {"G_Shades_Black", QCLASS(Helmet_Ballistic_DarkBlack), QCLASS(Vest_Tactical_DarkBlack)};
    respawnLinkedItems[] = {"G_Shades_Black", QCLASS(Helmet_Ballistic_DarkBlack), QCLASS(Vest_Tactical_DarkBlack)};
    backpack = QCLASS(Backpack_Kitbag_DarkBlack_Medic_Filled);

    attendant = 1;
    icon = "iconManMedic";
    picture = "pictureHeal";

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_unitHeadgear; };";
    };
};
class CLASS(Unit_B_Medic): CLASS(Unit_I_Medic) {
    scope = 2;
    side = 1;
    faction = QCLASS(BLU);
};

class CLASS(Unit_I_Specialist): CLASS(Unit_Combat_RS_BS_GP_BB) {
    scope = 2;
    author = "Pomigit, Jonpas";
    displayName = CSTRING(Unit_Specialist);
    weapons[] = {"Throw", "Put", "LMG_Mk200_MRCO_F", "hgun_Rook40_F", "Binocular"};
    respawnWeapons[] = {"Throw", "Put", "LMG_Mk200_MRCO_F", "hgun_Rook40_F", "Binocular"};
    magazines[] = {"200Rnd_65x39_cased_Box_Tracer", ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    respawnMagazines[] = {"200Rnd_65x39_cased_Box_Tracer", ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    linkedItems[] = {"G_Shades_Black", QCLASS(Vest_PlateCarrierFull_Black)};
    respawnLinkedItems[] = {"G_Shades_Black", QCLASS(Vest_PlateCarrierFull_Black)};
    backpack = QCLASS(Backpack_AssaultExpanded_Green_Specialist_Filled);

    icon = "iconManMG";

    headgearList[] = {
        QCLASS(Cap_BlackLogo), 1,
        QCLASS(Cap_TanLogo), 1,
        QCLASS(Cap_Earpiece_BlackLogo), 1,
        QCLASS(Cap_Earpiece_TanLogo), 1,
        QCLASS(Cap_Backwards_BlackLogo), 1,
        QCLASS(Cap_Backwards_TanLogo), 1
    };

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_unitHeadgear; };";
    };
};
class CLASS(Unit_B_Specialist): CLASS(Unit_I_Specialist) {
    scope = 2;
    side = 1;
    faction = QCLASS(BLU);
};

class CLASS(Unit_I_TeamLeader): CLASS(Unit_TShirt_JP_GS_LP_BB) {
    scope = 2;
    author = "Pomigit, Jonpas";
    displayName = CSTRING(Unit_TeamLeader);
    weapons[] = {"Throw", "Put", QCLASS(MX_BlackCamo_MRCO), "hgun_Rook40_F", "Binocular"};
    respawnWeapons[] = {"Throw", "Put", QCLASS(MX_BlackCamo_MRCO), "hgun_Rook40_F", "Binocular"};
    magazines[] = {ITEMS_11(30Rnd_65x39_caseless_mag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    respawnMagazines[] = {ITEMS_11(30Rnd_65x39_caseless_mag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    linkedItems[] = {"G_Shades_Black", QCLASS(Cap_Headphones_BlackLogo), QCLASS(Vest_PlateCarrier_Khaki)};
    respawnLinkedItems[] = {"G_Shades_Black", QCLASS(Cap_Headphones_BlackLogo), QCLASS(Vest_PlateCarrier_Khaki)};

    icon = "iconManLeader";
    textSingular = "$STR_A3_nameSound_veh_infantry_officer_s";
    textPlural = "$STR_A3_nameSound_veh_infantry_officer_p";
    nameSound = "veh_infantry_officer_s";

    class SpeechVariants {
        class Default {
            speechSingular[] = {"veh_infantry_officer_s"};
            speechPlural[] = {"veh_infantry_officer_p"};
        };
    };

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_unitHeadgear; };";
    };
};
class CLASS(Unit_B_TeamLeader): CLASS(Unit_I_TeamLeader) {
    scope = 2;
    side = 1;
    faction = QCLASS(BLU);
};

class CLASS(Unit_I_Marksman): CLASS(Unit_TShirt_JP_GS_LP_BB) {
    scope = 2;
    author = "Pomigit, Jonpas";
    displayName = CSTRING(Unit_Marksman);
    weapons[] = {"Throw", "Put", "srifle_EBR_SOS_F", "hgun_Rook40_F", "Binocular"};
    respawnWeapons[] = {"Throw", "Put", "srifle_EBR_SOS_F", "hgun_Rook40_F", "Binocular"};
    magazines[] = {ITEMS_6(20Rnd_762x51_Mag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    respawnMagazines[] = {ITEMS_6(20Rnd_762x51_Mag), ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    linkedItems[] = {"G_Shades_Black", QCLASS(Vest_Tactical_DarkBlack)};
    respawnLinkedItems[] = {"G_Shades_Black", QCLASS(Vest_Tactical_DarkBlack)};

    headgearList[] = {
        QCLASS(Cap_BlackLogo), 1,
        QCLASS(Cap_TanLogo), 1,
        QCLASS(Cap_Earpiece_BlackLogo), 1,
        QCLASS(Cap_Earpiece_TanLogo), 1,
        QCLASS(Cap_Backwards_BlackLogo), 1,
        QCLASS(Cap_Backwards_TanLogo), 1,
        QCLASS(Hat_Boonie_RangerGreen), 1,
        QCLASS(Hat_Boonie_DesertMARPAT), 1,
        QCLASS(Hat_Boonie_Woodland), 1,
        QCLASS(Hat_Boonie_UCP), 1
    };

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_unitHeadgear; };";
    };
};
class CLASS(Unit_B_Marksman): CLASS(Unit_I_Marksman) {
    scope = 2;
    side = 1;
    faction = QCLASS(BLU);
};

class CLASS(Unit_I_PilotHeli): CLASS(Unit_Combat_RS_BS_GP_BB) {
    scope = 2;
    author = "Pomigit, Jonpas";
    displayName = CSTRING(Unit_PilotHeli);
    weapons[] = {"Throw", "Put", "hgun_Rook40_F", "Binocular"};
    respawnWeapons[] = {"Throw", "Put", "hgun_Rook40_F", "Binocular"};
    magazines[] = {ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    respawnMagazines[] = {ITEMS_2(16Rnd_9x21_Mag), ITEMS_2(SmokeShell), ITEMS_2(HandGrenade)};
    linkedItems[] = {QCLASS(Helmet_PilotHeli_Tan), QCLASS(Vest_Tactical_DarkBlack)};
    respawnLinkedItems[] = {QCLASS(Helmet_PilotHeli_Tan), QCLASS(Vest_Tactical_DarkBlack)};

    textSingular = "$STR_A3_nameSound_veh_infantry_pilot_s";
    textPlural = "$STR_A3_nameSound_veh_infantry_pilot_p";
    nameSound = "veh_infantry_pilot_s";

    class SpeechVariants {
        class Default {
            speechSingular[] = {"veh_infantry_pilot_s"};
            speechPlural[] = {"veh_infantry_pilot_p"};
        };
    };
};
class CLASS(Unit_B_PilotHeli): CLASS(Unit_I_PilotHeli) {
    scope = 2;
    side = 1;
    faction = QCLASS(BLU);
};


// VIP
class Civilian_F;
class CLASS(Unit_I_VIP): Civilian_F {
    dlc = QUOTE(PREFIX);
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = QCLASS(IND);
    author = "Pomigit, Jonpas";
    displayname = CSTRING(Unit_VIP);
    model = QPATHTOF(data\vip.p3d);
    modelSides[] = {6};
    genericNames = QUOTE(PREFIX);
    uniformClass = QCLASS(Suit_VIP);

    weapons[] = {"Throw", "Put"};
    respawnWeapons[] = {"Throw", "Put"};
    magazines[] = {};
    respawnMagazines[] = {};
    items[] = {};
    respawnItems[] = {};
    linkedItems[] = {"G_Squares_Tinted"};
    respawnLinkedItems[] = {"G_Squares_Tinted"};
};
class CLASS(Unit_B_VIP): CLASS(Unit_I_VIP) {
    scope = 2;
    side = 1;
    faction = QCLASS(BLU);
};
