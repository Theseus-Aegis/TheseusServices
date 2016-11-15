class CfgMods {
    class Mod_Base;
    class PREFIX: Mod_Base {
        author = CSTRING(Common,Author);
        dir = "@theseus_services";
        name = CSTRING(Name);
        picture = QPATHTOF(UI\logo_tacs_ca.paa);
        logo = QPATHTOF(UI\logo_tacs_small_ca.paa);
        logoOver = QPATHTOF(UI\logo_tacs_small_ca.paa);
        logoSmall = QPATHTOF(UI\logo_tacs_small_ca.paa);
        hidePicture = "true";
        hideName = "true";
        actionName = "GitHub";
        action = "https://github.com/Theseus-Aegis/TheseusServices";
        description = "Issue Tracker: https://github.com/Theseus-Aegis/TheseusServices/issues";
    };
};
