// Grey
#define MACRO_BATTLEBELT_GRY \
    picture = QPATHTOF(ui\icon_v_battle_belt_gry_ca.paa); \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo1", "camo2", "camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_battle_belt_gry_co.paa), \
        QPATHTOF(data\v_gear_01_gry_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

// Black
#define MACRO_BATTLEBELT_BLK \
    picture = QPATHTOF(ui\icon_v_battle_belt_blk_ca.paa); \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo1", "camo2", "camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_battle_belt_blk_co.paa), \
        QPATHTOF(data\v_gear_01_blk_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

// Assaulter Grey
class milgp_v_battle_belt_assaulter_RGR;
class CCLASS(battle_belt_assaulter_gry): milgp_v_battle_belt_assaulter_RGR {
    displayName = CSTRING(battle_belt_assaulter_gry);
    MACRO_BATTLEBELT_GRY
};

// Assaulter Black
class CCLASS(battle_belt_assaulter_blk): milgp_v_battle_belt_assaulter_RGR {
    displayName = CSTRING(battle_belt_assaulter_blk);
    MACRO_BATTLEBELT_BLK
};

// HeavyGunner Grey
class milgp_v_battle_belt_hgunner_RGR;
class CCLASS(battle_belt_hgunner_gry): milgp_v_battle_belt_hgunner_RGR {
    displayName = CSTRING(battle_belt_hgunner_gry);
    MACRO_BATTLEBELT_GRY
};

// HeavyGunner Black
class CCLASS(battle_belt_hgunner_blk): milgp_v_battle_belt_hgunner_RGR {
    displayName = CSTRING(battle_belt_hgunner_blk);
    MACRO_BATTLEBELT_BLK
};
