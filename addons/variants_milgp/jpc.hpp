// Grey
#define MACRO_JPC_GRY \
    picture = QPATHTOF(ui\icon_v_jpc_gry_ca.paa); \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo","camo2","camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_jpc_gry_co.paa), \
        QPATHTOF(data\v_gear_01_gry_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    }

#define MACRO_JPC_BELT_GRY \
    picture = QPATHTOF(ui\icon_v_jpc_gry_ca.paa); \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo","camo1","camo2","camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_jpc_gry_co.paa), \
        QPATHTOF(data\v_battle_belt_gry_co.paa), \
        QPATHTOF(data\v_gear_01_gry_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    }

// Black
#define MACRO_JPC_BLK \
    picture = QPATHTOF(ui\icon_v_jpc_blk_ca.paa); \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo","camo2","camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_jpc_blk_co.paa), \
        QPATHTOF(data\v_gear_01_blk_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    }

#define MACRO_JPC_BELT_BLK \
    picture = QPATHTOF(ui\icon_v_jpc_blk_ca.paa); \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo","camo1","camo2","camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_jpc_blk_co.paa), \
        QPATHTOF(data\v_battle_belt_blk_co.paa), \
        QPATHTOF(data\v_gear_01_blk_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    }

// Light Grey
class milgp_v_jpc_Light_rgr;
class CCLASS(jpc_light_gry): milgp_v_jpc_Light_rgr {
    displayName = CSTRING(jpc_light_gry);
    MACRO_JPC_GRY;
};

// Light Black
class CCLASS(jpc_light_blk): milgp_v_jpc_Light_rgr {
    displayName = CSTRING(jpc_light_blk);
    MACRO_JPC_BLK;
};

// Assaulter Grey
class milgp_v_jpc_assaulter_rgr;
class CCLASS(jpc_assaulter_gry): milgp_v_jpc_assaulter_rgr {
    displayName = CSTRING(jpc_assaulter_gry);
    MACRO_JPC_GRY;
};

class milgp_v_jpc_assaulter_belt_rgr;
class CCLASS(jpc_assaulter_belt_gry): milgp_v_jpc_assaulter_belt_rgr {
    displayName = CSTRING(jpc_assaulter_belt_gry);
    MACRO_JPC_BELT_GRY;
};

// Assaulter Black
class CCLASS(jpc_assaulter_blk): milgp_v_jpc_assaulter_rgr {
    displayName = CSTRING(jpc_assaulter_blk);
    MACRO_JPC_BLK;
};

class CCLASS(jpc_assaulter_belt_blk): milgp_v_jpc_assaulter_belt_rgr {
    displayName = CSTRING(jpc_assaulter_belt_blk);
    MACRO_JPC_BELT_BLK;
};

// Grenadier Grey
class milgp_v_jpc_Grenadier_rgr;
class CCLASS(jpc_grenadier_gry): milgp_v_jpc_Grenadier_rgr {
    displayName = CSTRING(jpc_grenadier_gry);
    MACRO_JPC_GRY;
};

class milgp_v_jpc_Grenadier_belt_rgr;
class CCLASS(jpc_grenadier_belt_gry): milgp_v_jpc_Grenadier_belt_rgr {
    displayName = CSTRING(jpc_grenadier_belt_gry);
    MACRO_JPC_BELT_GRY;
};

// Grenadier Black
class CCLASS(jpc_grenadier_blk): milgp_v_jpc_Grenadier_rgr {
    displayName = CSTRING(jpc_grenadier_blk);
    MACRO_JPC_BLK;
};

class CCLASS(jpc_grenadier_belt_blk): milgp_v_jpc_Grenadier_belt_rgr {
    displayName = CSTRING(jpc_grenadier_belt_blk);
    MACRO_JPC_BELT_BLK;
};

// HeavyGunner Grey
class milgp_v_jpc_hgunner_rgr;
class CCLASS(jpc_hgunner_gry): milgp_v_jpc_hgunner_rgr {
    displayName = CSTRING(jpc_hgunner_gry);
    MACRO_JPC_GRY;
};

class milgp_v_jpc_hgunner_belt_rgr;
class CCLASS(jpc_hgunner_belt_gry): milgp_v_jpc_hgunner_belt_rgr {
    displayName = CSTRING(jpc_hgunner_belt_gry);
    MACRO_JPC_BELT_GRY;
};

// HeavyGunner Black
class CCLASS(jpc_hgunner_blk): milgp_v_jpc_hgunner_rgr {
    displayName = CSTRING(jpc_hgunner_blk);
    MACRO_JPC_BLK;
};

class CCLASS(jpc_hgunner_belt_blk): milgp_v_jpc_hgunner_belt_rgr {
    displayName = CSTRING(jpc_hgunner_belt_blk);
    MACRO_JPC_BELT_BLK;
};

// Marksman Grey
class milgp_v_jpc_Marksman_rgr;
class CCLASS(jpc_marksman_gry): milgp_v_jpc_Marksman_rgr {
    displayName = CSTRING(jpc_marksman_gry);
    MACRO_JPC_GRY;
};

class milgp_v_jpc_marksman_belt_rgr;
class CCLASS(jpc_marksman_belt_gry): milgp_v_jpc_marksman_belt_rgr {
    displayName = CSTRING(jpc_marksman_belt_gry);
    MACRO_JPC_BELT_GRY;
};

// Marksman Black
class CCLASS(jpc_marksman_blk): milgp_v_jpc_Marksman_rgr {
    displayName = CSTRING(jpc_marksman_blk);
    MACRO_JPC_BLK;
};

class CCLASS(jpc_marksman_belt_blk): milgp_v_jpc_marksman_belt_rgr {
    displayName = CSTRING(jpc_marksman_belt_blk);
    MACRO_JPC_BELT_BLK;
};

// Medic Grey
class milgp_v_jpc_Medic_rgr;
class CCLASS(jpc_medic_gry): milgp_v_jpc_Medic_rgr {
    displayName = CSTRING(jpc_medic_gry);
    MACRO_JPC_GRY;
};

class milgp_v_jpc_medic_belt_rgr;
class CCLASS(jpc_medic_belt_gry): milgp_v_jpc_medic_belt_rgr {
    displayName = CSTRING(jpc_medic_belt_gry);
    MACRO_JPC_BELT_GRY;
};

// Medic Black
class CCLASS(jpc_medic_blk): milgp_v_jpc_Medic_rgr {
    displayName = CSTRING(jpc_medic_blk);
    MACRO_JPC_BLK;
};

class CCLASS(jpc_medic_belt_blk): milgp_v_jpc_medic_belt_rgr {
    displayName = CSTRING(jpc_medic_belt_blk);
    MACRO_JPC_BELT_BLK;
};

// TeamLeader Grey
class milgp_v_jpc_TeamLeader_rgr;
class CCLASS(jpc_teamleader_gry): milgp_v_jpc_TeamLeader_rgr {
    displayName = CSTRING(jpc_teamleader_gry);
    MACRO_JPC_GRY;
};

class milgp_v_jpc_teamleader_belt_rgr;
class CCLASS(jpc_teamleader_belt_gry): milgp_v_jpc_teamleader_belt_rgr {
    displayName = CSTRING(jpc_teamleader_belt_gry);
    MACRO_JPC_BELT_GRY;
};

// TeamLeader Black
class CCLASS(jpc_teamleader_blk): milgp_v_jpc_TeamLeader_rgr {
    displayName = CSTRING(jpc_teamleader_blk);
    MACRO_JPC_BLK;
};

class CCLASS(jpc_teamleader_belt_blk): milgp_v_jpc_teamleader_belt_rgr {
    displayName = CSTRING(jpc_teamleader_belt_blk);
    MACRO_JPC_BELT_BLK;
};
