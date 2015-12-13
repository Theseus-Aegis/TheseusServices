class CfgGlasses {
    class G_Tactical_Clear;
    class CLASS(Goggles_Base): G_Tactical_Clear {
        dlc = DLC;
        scope = 0;
        identityTypes[] = {};
        //hiddenSelections[] = {"camo"};
    };

    class CLASS(Goggles_Black): CLASS(Goggles_Base) {
        _generalMacro = QCLASS(Goggles_Black);
        scope = 2;
        author = "Pomigit, Jonpas";
        displayname = CSTRING(Goggles_Black);
        model = QPATHTOF(data\goggles_black.p3d);
        //hiddenSelectionsTextures[] = {QPATHTOF(data\goggles_sand_ca.paa)};
    };

    class CLASS(Goggles_Green): CLASS(Goggles_Base) {
        _generalMacro = QCLASS(Goggles_Green);
        scope = 2;
        author = "Pomigit, Jonpas";
        displayname = CSTRING(Goggles_Green);
        model = QPATHTOF(data\goggles_green.p3d);
    };

    class CLASS(Goggles_Sand): CLASS(Goggles_Base) {
        _generalMacro = QCLASS(Goggles_Sand);
        scope = 2;
        author = "Pomigit, Jonpas";
        displayname = CSTRING(Goggles_Sand);
        model = QPATHTOF(data\goggles_sand.p3d);
    };
};
