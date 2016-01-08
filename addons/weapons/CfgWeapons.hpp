class CfgWeapons {
    class arifle_MX_F;
    class CLASS(MX_BlackCamo): arifle_MX_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "BadHabitz";
        displayName = CSTRING(MX_BlackCamo);
        picture = "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_rifle_black_X_CA.paa";//picture = PATHTOF(UI\mx_blackcamo_ca.paa);//@todo
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx_blackcamo_base_co.paa),
            QPATHTOF(data\mx_blackcamo_short_co.paa)
        };
    };

    class arifle_MX_GL_F;
    class CLASS(MX_GL_BlackCamo): arifle_MX_GL_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "BadHabitz";
        displayName = CSTRING(MX_GL_BlackCamo);
        picture = "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_rifle_gl_black_X_CA.paa";//picture = PATHTOF(UI\mx_gl_blackcamo_ca.paa);//@todo
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx_blackcamo_base_co.paa),
            QPATHTOF(data\mx_blackcamo_gl_co.paa)
        };
    };
};
