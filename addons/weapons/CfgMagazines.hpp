class CfgMagazines {
    class 30Rnd_65x39_caseless_mag;

    class CLASS(30Rnd_65x39_caseless_BlackCamo_mag): 30Rnd_65x39_caseless_mag {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "BadHabitz, TyroneMF";
        displayName = CSTRING(30Rnd_65x39_caseless_BlackCamo_mag);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\mx_blackcamo_base_co.paa)};
    };
};
