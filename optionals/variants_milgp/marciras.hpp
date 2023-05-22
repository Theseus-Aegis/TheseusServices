// Grey
#define MACRO_MARCIRAS_GRY \
    picture = QPATHTOF(ui\icon_v_marciras_gry_ca.paa); \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo", "camo2", "camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_marciras_gry_co.paa), \
        QPATHTOF(data\v_gear_01_gry_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

#define MACRO_MARCIRAS_BELT_GRY \
    picture = QPATHTOF(ui\icon_v_marciras_gry_ca.paa); \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo", "camo1", "camo2", "camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_marciras_gry_co.paa), \
        QPATHTOF(data\v_battle_belt_gry_co.paa), \
        QPATHTOF(data\v_gear_01_gry_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

// Black
#define MACRO_MARCIRAS_BLK \
    picture = QPATHTOF(ui\icon_v_marciras_blk_ca.paa); \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo", "camo2", "camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_marciras_blk_co.paa), \
        QPATHTOF(data\v_gear_01_blk_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

#define MACRO_MARCIRAS_BELT_BLK \
    picture = QPATHTOF(ui\icon_v_marciras_blk_ca.paa); \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo", "camo1", "camo2", "camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_marciras_blk_co.paa), \
        QPATHTOF(data\v_battle_belt_blk_co.paa), \
        QPATHTOF(data\v_gear_01_blk_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

// Light Grey
class milgp_v_marciras_light_rgr;
class CCLASS(marciras_light_gry): milgp_v_marciras_light_rgr {
    displayName = CSTRING(marciras_light_gry);
    picture = QPATHTOF(ui\icon_v_marciras_gry_ca.paa);
    author = "GilleeDoo";
    scope = 2;
    hiddenSelections[] = {"camo","camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\v_marciras_gry_co.paa),
        QPATHTOF(data\v_gear_01_gry_co.paa)
    };
};

// Light Black
class CCLASS(marciras_light_blk): milgp_v_marciras_light_rgr {
    displayName = CSTRING(marciras_light_blk);
    picture = QPATHTOF(ui\icon_v_marciras_blk_ca.paa);
    author = "GilleeDoo";
    scope = 2;
    hiddenSelections[] = {"camo","camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\v_marciras_blk_co.paa),
        QPATHTOF(data\v_gear_01_blk_co.paa)
    };
};

// Assaulter Grey
class milgp_v_marciras_assaulter_rgr;
class CCLASS(marciras_assaulter_gry): milgp_v_marciras_assaulter_rgr {
    displayName = CSTRING(marciras_assaulter_gry);
    MACRO_MARCIRAS_GRY
};

class milgp_v_marciras_assaulter_belt_rgr;
class CCLASS(marciras_assaulter_belt_gry): milgp_v_marciras_assaulter_belt_rgr {
    displayName = CSTRING(marciras_assaulter_belt_gry);
    MACRO_MARCIRAS_BELT_GRY
};

// Assaulter Black
class CCLASS(marciras_assaulter_blk): milgp_v_marciras_assaulter_rgr {
    displayName = CSTRING(marciras_assaulter_blk);
    MACRO_MARCIRAS_BLK
};

class CCLASS(marciras_assaulter_belt_blk): milgp_v_marciras_assaulter_belt_rgr {
    displayName = CSTRING(marciras_assaulter_belt_blk);
    MACRO_MARCIRAS_BELT_BLK
};

// Grenadier Grey
class milgp_v_marciras_grenadier_rgr;
class CCLASS(marciras_grenadier_gry): milgp_v_marciras_grenadier_rgr {
    displayName = CSTRING(marciras_grenadier_gry);
    MACRO_MARCIRAS_GRY
};

class milgp_v_marciras_grenadier_belt_rgr;
class CCLASS(marciras_grenadier_belt_gry): milgp_v_marciras_grenadier_belt_rgr {
    displayName = CSTRING(marciras_grenadier_belt_gry);
    MACRO_MARCIRAS_BELT_GRY
};

// Grenadier Black
class CCLASS(marciras_grenadier_blk): milgp_v_marciras_grenadier_rgr {
    displayName = CSTRING(marciras_grenadier_blk);
    MACRO_MARCIRAS_BLK
};

class CCLASS(marciras_grenadier_belt_blk): milgp_v_marciras_grenadier_belt_rgr {
    displayName = CSTRING(marciras_grenadier_belt_blk);
    MACRO_MARCIRAS_BELT_BLK
};

// HeavyGunner Grey
class milgp_v_marciras_hgunner_rgr;
class CCLASS(marciras_hgunner_gry): milgp_v_marciras_hgunner_rgr {
    displayName = CSTRING(marciras_hgunner_gry);
    MACRO_MARCIRAS_GRY
};

class milgp_v_marciras_hgunner_belt_rgr;
class CCLASS(marciras_hgunner_belt_gry): milgp_v_marciras_hgunner_belt_rgr {
    displayName = CSTRING(marciras_hgunner_belt_gry);
    MACRO_MARCIRAS_BELT_GRY
};

// HeavyGunner Black
class CCLASS(marciras_hgunner_blk): milgp_v_marciras_hgunner_rgr {
    displayName = CSTRING(marciras_hgunner_blk);
    MACRO_MARCIRAS_BLK
};

class CCLASS(marciras_hgunner_belt_blk): milgp_v_marciras_hgunner_belt_rgr {
    displayName = CSTRING(marciras_hgunner_belt_gry);
    MACRO_MARCIRAS_BELT_BLK
};

// Marksman Grey
class milgp_v_marciras_marksman_rgr;
class CCLASS(marciras_marksman_gry): milgp_v_marciras_marksman_rgr {
    displayName = CSTRING(marciras_marksman_gry);
    MACRO_MARCIRAS_GRY
};

class milgp_v_marciras_marksman_belt_rgr;
class CCLASS(marciras_marksman_belt_gry): milgp_v_marciras_marksman_belt_rgr {
    displayName = CSTRING(marciras_marksman_belt_gry);
    MACRO_MARCIRAS_BELT_GRY
};

// Marksman Black
class CCLASS(marciras_marksman_blk): milgp_v_marciras_marksman_rgr {
    displayName = CSTRING(marciras_marksman_blk);
    MACRO_MARCIRAS_BLK
};

class CCLASS(marciras_marksman_belt_blk): milgp_v_marciras_marksman_belt_rgr {
    displayName = CSTRING(marciras_marksman_belt_blk);
    MACRO_MARCIRAS_BELT_BLK
};

// Medic Grey
class milgp_v_marciras_medic_rgr;
class CCLASS(marciras_medic_gry): milgp_v_marciras_medic_rgr {
    displayName = CSTRING(marciras_medic_gry);
    MACRO_MARCIRAS_GRY
};

class milgp_v_marciras_medic_belt_rgr;
class CCLASS(marciras_medic_belt_gry): milgp_v_marciras_medic_belt_rgr {
    displayName = CSTRING(marciras_medic_belt_gry);
    MACRO_MARCIRAS_BELT_GRY
};

// Medic Black
class CCLASS(marciras_medic_blk): milgp_v_marciras_medic_rgr {
    displayName = CSTRING(marciras_medic_blk);
    MACRO_MARCIRAS_BLK
};

class milgp_v_marciras_medic_belt_rgr;
class CCLASS(marciras_medic_belt_blk): milgp_v_marciras_medic_belt_rgr {
    displayName = CSTRING(marciras_medic_belt_blk);
    MACRO_MARCIRAS_BELT_BLK
};

// TeamLeader Grey
class milgp_v_marciras_teamleader_RGR;
class CCLASS(marciras_teamleader_gry): milgp_v_marciras_teamleader_RGR {
    displayName = CSTRING(marciras_teamleader_gry);
    MACRO_MARCIRAS_GRY
};

class milgp_v_marciras_teamleader_belt_RGR;
class CCLASS(marciras_teamleader_belt_gry): milgp_v_marciras_teamleader_belt_RGR {
    displayName = CSTRING(marciras_teamleader_belt_gry);
    MACRO_MARCIRAS_BELT_GRY
};

// TeamLeader Black
class CCLASS(marciras_teamleader_blk): milgp_v_marciras_teamleader_RGR {
    displayName = CSTRING(marciras_teamleader_blk);
    MACRO_MARCIRAS_BLK
};

class CCLASS(marciras_teamleader_belt_blk): milgp_v_marciras_teamleader_belt_RGR {
    displayName = CSTRING(marciras_teamleader_belt_blk);
    MACRO_MARCIRAS_BELT_BLK
};
