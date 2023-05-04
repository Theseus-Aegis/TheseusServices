// Grey
#define MACRO_MMAC_GRY \
    picture = QPATHTOF(ui\icon_v_mmac_gry_ca.paa); \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo", "camo2", "camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_mmac_gry_co.paa), \
        QPATHTOF(data\v_gear_01_gry_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

#define MACRO_MMAC_BELT_GRY \
    picture = QPATHTOF(ui\icon_v_mmac_gry_ca.paa); \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo", "camo1", "camo2", "camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_mmac_gry_co.paa), \
        QPATHTOF(data\v_battle_belt_gry_co.paa), \
        QPATHTOF(data\v_gear_01_gry_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

// Black
#define MACRO_MMAC_BLK \
    picture = QPATHTOF(ui\icon_v_mmac_blk_ca.paa); \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo", "camo2", "camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_mmac_blk_co.paa), \
        QPATHTOF(data\v_gear_01_blk_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

#define MACRO_MMAC_BELT_BLK \
    picture = QPATHTOF(ui\icon_v_mmac_blk_ca.paa); \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo", "camo1", "camo2", "camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_mmac_blk_co.paa), \
        QPATHTOF(data\v_battle_belt_blk_co.paa), \
        QPATHTOF(data\v_gear_01_blk_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

// Light Grey
class milgp_v_mmac_light_rgr;
class CLASS(mmac_light_gry):milgp_v_mmac_light_rgr {
    displayName = CSTRING(mmac_light_gry);
    MACRO_MMAC_GRY
};

// Light Black
class CLASS(mmac_light_blk):milgp_v_mmac_light_rgr {
    displayName = CSTRING(mmac_light_blk);
    MACRO_MMAC_BLK
};

// Assaulter Grey
class milgp_v_mmac_assaulter_rgr;
class CLASS(mmac_assaulter_gry): milgp_v_mmac_assaulter_rgr {
    displayName = CSTRING(mmac_assaulter_gry);
    MACRO_MMAC_GRY
};

class milgp_v_mmac_assaulter_belt_rgr;
class CLASS(mmac_assaulter_belt_gry): milgp_v_mmac_assaulter_belt_rgr {
    displayName = CSTRING(mmac_assaulter_belt_gry);
    MACRO_MMAC_BELT_GRY
};

// Assaulter Black
class CLASS(mmac_assaulter_blk): milgp_v_mmac_assaulter_rgr {
    displayName = CSTRING(mmac_assaulter_blk);
    MACRO_MMAC_BLK
};

class CLASS(mmac_assaulter_belt_blk): milgp_v_mmac_assaulter_belt_rgr {
    displayName = CSTRING(mmac_assaulter_belt_blk);
    MACRO_MMAC_BELT_BLK
};

// Grenadier Grey
class milgp_v_mmac_grenadier_rgr;
class CLASS(mmac_grenadier_gry):milgp_v_mmac_grenadier_rgr {
    displayName = CSTRING(mmac_grenadier_gry);
    MACRO_MMAC_GRY
};

class milgp_v_mmac_grenadier_belt_rgr;
class CLASS(mmac_grenadier_belt_gry):milgp_v_mmac_grenadier_belt_rgr {
    displayName = CSTRING(mmac_grenadier_belt_gry);
    MACRO_MMAC_BELT_GRY
};

// Grenadier Black
class CLASS(mmac_grenadier_blk):milgp_v_mmac_grenadier_rgr {
    displayName = CSTRING(mmac_grenadier_blk);
    MACRO_MMAC_BLK
};

class CLASS(mmac_grenadier_belt_blk):milgp_v_mmac_grenadier_belt_rgr {
    displayName = CSTRING(mmac_grenadier_belt_blk);
    MACRO_MMAC_BELT_BLK
};

// HeavyGunner Grey
class milgp_v_mmac_hgunner_rgr;
class CLASS(mmac_hgunner_gry):milgp_v_mmac_hgunner_rgr {
    displayName = CSTRING(mmac_hgunner_gry);
    MACRO_MMAC_GRY
};

class milgp_v_mmac_hgunner_belt_rgr;
class CLASS(mmac_hgunner_belt_gry):milgp_v_mmac_hgunner_belt_rgr {
    displayName = CSTRING(mmac_hgunner_belt_gry);
    MACRO_MMAC_BELT_GRY
};

// HeavyGunner Black
class CLASS(mmac_hgunner_blk):milgp_v_mmac_hgunner_rgr {
    displayName = CSTRING(mmac_hgunner_blk);
    MACRO_MMAC_BLK
};

class CLASS(mmac_hgunner_belt_blk):milgp_v_mmac_hgunner_belt_rgr {
    displayName = CSTRING(mmac_hgunner_belt_blk);
    MACRO_MMAC_BELT_BLK
};

// Marksman Grey
class milgp_v_mmac_marksman_rgr;
class CLASS(mmac_marksman_gry):milgp_v_mmac_marksman_rgr {
    displayName = CSTRING(mmac_marksman_gry);
    MACRO_MMAC_GRY
};

class milgp_v_mmac_marksman_belt_rgr;
class CLASS(mmac_marksman_belt_gry):milgp_v_mmac_marksman_belt_rgr {
    displayName = CSTRING(mmac_marksman_belt_gry);
    MACRO_MMAC_BELT_GRY
};

// Marksman Black
class CLASS(mmac_marksman_blk):milgp_v_mmac_marksman_rgr {
    displayName = CSTRING(mmac_marksman_blk);
    MACRO_MMAC_BLK
};

class CLASS(mmac_marksman_belt_blk):milgp_v_mmac_marksman_belt_rgr {
    displayName = CSTRING(mmac_marksman_belt_blk);
    MACRO_MMAC_BELT_BLK
};

// Medic Grey
class milgp_v_mmac_medic_rgr;
class CLASS(mmac_medic_gry):milgp_v_mmac_medic_rgr {
    displayName = CSTRING(mmac_medic_gry);
    MACRO_MMAC_GRY
};

class milgp_v_mmac_medic_belt_rgr;
class CLASS(mmac_medic_belt_gry):milgp_v_mmac_medic_belt_rgr {
    displayName = CSTRING(mmac_medic_belt_gry);
    MACRO_MMAC_BELT_GRY
};

// Medic Black
class CLASS(mmac_medic_blk):milgp_v_mmac_medic_rgr {
    displayName = CSTRING(mmac_medic_blk);
    MACRO_MMAC_BLK
};

class CLASS(mmac_medic_belt_blk):milgp_v_mmac_medic_belt_rgr {
    displayName = CSTRING(mmac_medic_belt_blk);
    MACRO_MMAC_BELT_BLK
};

// TeamLeader Grey
class milgp_v_mmac_teamleader_rgr;
class CLASS(mmac_teamleader_gry):milgp_v_mmac_teamleader_rgr {
    displayName = CSTRING(mmac_teamleader_gry);
    MACRO_MMAC_GRY
};

class milgp_v_mmac_teamleader_belt_rgr;
class CLASS(mmac_teamleader_belt_gry):milgp_v_mmac_teamleader_belt_rgr {
    displayName = CSTRING(mmac_teamleader_belt_gry);
    MACRO_MMAC_BELT_GRY
};

// TeamLeader Black
class CLASS(mmac_teamleader_blk):milgp_v_mmac_teamleader_rgr {
    displayName = CSTRING(mmac_teamleader_blk);
    MACRO_MMAC_BLK
};

class CLASS(mmac_teamleader_belt_blk):milgp_v_mmac_teamleader_belt_rgr {
    displayName = CSTRING(mmac_teamleader_belt_blk);
    MACRO_MMAC_BELT_BLK
};
