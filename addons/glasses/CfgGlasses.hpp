class CfgGlasses {
    class G_Combat;
    class CLASS(Goggles_Black): G_Combat {
        _generalMacro = QCLASS(Goggles_Black);
        dlc = DLC;
        scope = 2;
        identityTypes[] = {};
        author = "Pomigit, Jonpas";
        displayname = CSTRING(Goggles_Black);
        model = QPATHTOF(data\goggles.p3d);
        mass = 2;
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\goggles_black_ca.paa)};
        // ACE3
        ace_overlay = "";
        ace_resistance = 2;
    };
    class CLASS(Goggles_Green): CLASS(Goggles_Black) {
        _generalMacro = QCLASS(Goggles_Green);
        scope = 2;
        author = "Pomigit, Jonpas";
        displayname = CSTRING(Goggles_Green);
        hiddenSelectionsTextures[] = {QPATHTOF(data\goggles_green_ca.paa)};
    };
    class CLASS(Goggles_Sand): CLASS(Goggles_Black) {
        _generalMacro = QCLASS(Goggles_Sand);
        scope = 2;
        author = "Pomigit, Jonpas";
        displayname = CSTRING(Goggles_Sand);
        hiddenSelectionsTextures[] = {QPATHTOF(data\goggles_sand_ca.paa)};
    };
};
