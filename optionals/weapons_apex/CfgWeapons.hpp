class CfgWeapons {
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
