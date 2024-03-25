class CfgWeapons {
    class arifle_MX_Black_F;
    class CLASS(MX_BlackCamo): arifle_MX_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "BadHabitz, Jonpas";
        displayName = CSTRING(MX_BlackCamo);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx_blackcamo_base_co.paa),
            QPATHTOF(data\mx_blackcamo_short_co.paa)
        };
        baseWeapon = QCLASS(MX_BlackCamo);
    };

    class arifle_MX_GL_Black_F;
    class CLASS(MX_GL_BlackCamo): arifle_MX_GL_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "BadHabitz, Jonpas";
        displayName = CSTRING(MX_GL_BlackCamo);
        picture = QPATHTOF(UI\mx_gl_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx_blackcamo_base_co.paa),
            QPATHTOF(data\mx_blackcamo_gl_co.paa)
        };
        baseWeapon = QCLASS(MX_GL_BlackCamo);
    };

    class srifle_EBR_F;
    class CLASS(EBR_Black_F): srifle_EBR_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Mike";
        displayName = CSTRING(EBR_Black_F);
        picture = QPATHTOF(UI\mk14_ebr_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\m14_ebr01_blackcamo_co.paa),
            QPATHTOF(data\m14_ebr02_blackcamo_co.paa)
        };
        baseWeapon = QCLASS(EBR_Black_F);
    };

    class arifle_Mk20_plain_F;
    class CLASS(Mk20_Black_F): arifle_Mk20_plain_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Mike";
        displayName = CSTRING(Mk20_Black_F);
        picture = QPATHTOF(UI\mk20_blackcamo_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mk20_blackcamo_co.paa)
        };
        baseWeapon = QCLASS(Mk20_Black_F);
    };

    class arifle_Mk20C_plain_F;
    class CLASS(MK20C_Black_F): arifle_Mk20C_plain_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Mike";
        displayName = CSTRING(Mk20C_Black_F);
        picture = QPATHTOF(UI\mk20c_blackcamo_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mk20_blackcamo_co.paa)
        };
        baseWeapon = QCLASS(MK20C_Black_F);
    };

    class arifle_Mk20_GL_plain_F;
    class CLASS(MK20_EGLM_Black_F): arifle_Mk20_GL_plain_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Mike";
        displayName = CSTRING(Mk20_EGLM_Black_F);
        picture = QPATHTOF(UI\mk20_eglm_ca.paa);
        hiddenSelections[] = {"camo", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mk20_blackcamo_co.paa),
            "\A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_utilities_CO.paa"
        };
        baseWeapon =  QCLASS(MK20_EGLM_Black_F);
    };

    class hgun_P07_F;
    class CLASS(Walther_P99): hgun_P07_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "JoramD";
        displayName = CSTRING(Walther_P99);
        picture = QPATHTOF(UI\walther_p99_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\walther_p99_co.paa)};
        baseWeapon = QCLASS(Walther_P99);
    };

    class CLASS(Walther_P99_Tan): CLASS(Walther_P99) {
        displayName = CSTRING(Walther_P99_Tan);
        picture = QPATHTOF(UI\walther_p99_tan_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\walther_p99_tan_co.paa)};
        baseWeapon = QCLASS(Walther_P99_Tan);
    };

    class hgun_Pistol_heavy_01_F;
    class CLASS(FNX_45_Black): hgun_Pistol_heavy_01_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "GilleeDoo";
        displayName = CSTRING(FNX_45_Black);
        picture = QPATHTOF(UI\fnx45_black_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\fnx_45_black_co.paa)};
        baseWeapon = QCLASS(FNX_45_Black);
    };
    class CLASS(FNX_45_Stainless): hgun_Pistol_heavy_01_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "GilleeDoo";
        displayName = CSTRING(FNX_45_Stainless);
        picture = QPATHTOF(UI\fnx45_stainless_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\fnx_45_stainless_co.paa)};
        baseWeapon = QCLASS(FNX_45_Stainless);
    };

    class launch_MRAWS_green_F;
    class CLASS(MRAWS_Black_F): launch_MRAWS_green_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Kresky";
        displayName = CSTRING(MRAWS_Black_F);
        picture = QPATHTOF(UI\mraws_black_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mraws_black_co.paa),
            "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
        };
        baseWeapon = QCLASS(MRAWS_Black_F);
    };

    class launch_MRAWS_green_rail_F;
    class CLASS(MRAWS_Black_Rail_F): launch_MRAWS_green_rail_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Kresky";
        displayName = CSTRING(MRAWS_Black_Rail_F);
        picture = QPATHTOF(UI\mraws_black_rail_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mraws_black_co.paa),
            "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
        };
        baseWeapon = QCLASS(MRAWS_Black_Rail_F);
    };

    // Equipped
    class CLASS(MX_BlackCamo_MRCO): CLASS(MX_BlackCamo) {
        scope = 1;

        class LinkedItems {
            class LinkedItemsOptics {
                slot = "CowsSlot";
                item = "optic_MRCO";
            };
        };
    };

    class CLASS(MX_BlackCamo_ACO): CLASS(MX_BlackCamo) {
        scope = 1;

        class LinkedItems {
            class LinkedItemsOptics {
                slot = "CowsSlot";
                item = "optic_aco";
            };
        };
    };

    class CLASS(MX_GL_BlackCamo_ACO): CLASS(MX_GL_BlackCamo) {
        scope = 1;

        class LinkedItems {
            class LinkedItemsOptics {
                slot = "CowsSlot";
                item = "optic_aco";
            };
        };
    };

    class arifle_MXM_Black_F;
    class CLASS(MXM_Black_HAMR): arifle_MXM_Black_F {
        scope = 1;

        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_hamr";
            };
        };
    };

    class arifle_SPAR_01_GL_blk_F;
    class CLASS(HK416_GL_Black_HAMR): arifle_SPAR_01_GL_blk_F {
        scope = 1;

        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_hamr";
            };
        };
    };

    class LMG_03_F;
    class CLASS(M249_Holo): LMG_03_F {
        scope = 1;

        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_holosight_blk_f";
            };
        };
    };

    class arifle_SPAR_01_blk_F;
    class CLASS(HK416_Black_Holo): arifle_SPAR_01_blk_F {
        scope = 1;

        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_holosight_blk_f";
            };
        };
    };
};
