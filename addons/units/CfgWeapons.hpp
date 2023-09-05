class CfgWeapons {
    #include "uniforms\base.hpp"
    #include "uniforms\combat_long.hpp"
    #include "uniforms\combat_long_atacs.hpp"
    #include "uniforms\combat_long_plaid.hpp"
    #include "uniforms\combat_rolled.hpp"
    #include "uniforms\combat_rolled_atacs.hpp"
    #include "uniforms\combat_rolled_plaid.hpp"
    #include "uniforms\floral_jeans.hpp"
    #include "uniforms\floral_shorts.hpp"
    #include "uniforms\garment_long.hpp"
    #include "uniforms\garment_rolled.hpp"
    #include "uniforms\heli_pilot_coveralls.hpp"
    #include "uniforms\plaid_jeans.hpp"
    #include "uniforms\plaid_shorts.hpp"
    #include "uniforms\polo_cord.hpp"
    #include "uniforms\polo_tactical.hpp"
    #include "uniforms\tshirt_jeans.hpp"
    #include "uniforms\vip_suit.hpp"

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
