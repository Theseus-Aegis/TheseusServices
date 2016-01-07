class CfgGlasses {
    class G_Combat;
    class CLASS(Goggles_Base): G_Combat {
        dlc = QUOTE(PREFIX);
        scope = 0;
        identityTypes[] = {};
        model = QPATHTOF(data\goggles.p3d);
        mass = 2;
        // ACE3
        ace_overlay = "";
        ace_resistance = 2;
    };

    class CLASS(Goggles_Black): CLASS(Goggles_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayname = CSTRING(Goggles_Black);
        hiddenSelectionsTextures[] = {QPATHTOF(data\goggles_black_ca.paa)};
    };
    class CLASS(Goggles_Green): CLASS(Goggles_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayname = CSTRING(Goggles_Green);
        hiddenSelectionsTextures[] = {QPATHTOF(data\goggles_green_ca.paa)};
    };
    class CLASS(Goggles_Sand): CLASS(Goggles_Base) {
        scope = 2;
        author = "Pomigit, Jonpas";
        displayname = CSTRING(Goggles_Sand);
        hiddenSelectionsTextures[] = {QPATHTOF(data\goggles_sand_ca.paa)};
    };
};
