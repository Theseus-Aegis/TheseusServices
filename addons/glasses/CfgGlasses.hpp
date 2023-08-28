class CfgGlasses {
    class G_Combat;
    #define MACRO_GOGGLES_COMMON \
        dlc = QUOTE(PREFIX); \
        scope = 2; \
        identityTypes[] = {}; \
        model = QPATHTOF(data\goggles.p3d); \
        mass = 2; \
        ace_overlay = ""; \
        ace_resistance = 2

    class CLASS(Goggles_Black): G_Combat {
        MACRO_GOGGLES_COMMON;
        author = "Pomigit, Jonpas";
        displayname = CSTRING(Goggles_Black);
        hiddenSelectionsTextures[] = {QPATHTOF(data\goggles_black_co.paa)};
    };
    class CLASS(Goggles_Green): G_Combat {
        MACRO_GOGGLES_COMMON;
        author = "Pomigit, Jonpas";
        displayname = CSTRING(Goggles_Green);
        hiddenSelectionsTextures[] = {QPATHTOF(data\goggles_green_co.paa)};
    };
    class CLASS(Goggles_Tan): G_Combat {
        MACRO_GOGGLES_COMMON;
        author = "Pomigit, Jonpas";
        displayname = CSTRING(Goggles_Tan);
        hiddenSelectionsTextures[] = {QPATHTOF(data\goggles_tan_co.paa)};
    };
};
