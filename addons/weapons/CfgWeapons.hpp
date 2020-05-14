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
        author = "Tyrone";
        displayName = CSTRING(EBR_Black_F);
        picture = QPATHTOF(UI\mk14_ebr_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {
            QPATHTOF(data\m14_ebr01_blackcamo_co.paa),
            QPATHTOF(data\m14_ebr02_blackcamo_co.paa)
        };
        baseWeapon = QCLASS(EBR_Black_F);
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
};
