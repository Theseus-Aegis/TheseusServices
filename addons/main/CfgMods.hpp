class CfgMods {
    class Mod_Base;
    class PREFIX: Mod_Base {
        author = CSTRING(common,Author);
        dir = "@theseus_services";
        name = CSTRING(Name);
        picture = QUOTE(PATHTOF(UI\logo_tac_ca.paa));
        logo = QUOTE(PATHTOF(UI\logo_tac_small_ca.paa));
        logoOver = QUOTE(PATHTOF(UI\logo_tac_small_ca.paa));
        logoSmall = QUOTE(PATHTOF(UI\logo_tac_small_ca.paa));
        hidePicture = "true";
        hideName = "true";
        actionName = "GitHub";
        action = "https://github.com/Theseus-Aegis/TheseusServices";
        description = "Issue Tracker: https://github.com/Theseus-Aegis/TheseusServices/issues";
    };
};
