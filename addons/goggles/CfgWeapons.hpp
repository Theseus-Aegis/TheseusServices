class CfgWeapons {
    class G_Tactical_Clear;
    class GVAR(Base): G_Tactical_Clear {
        _generalMacro = QGVAR(Base);
        scope = 0;
        dlc = DLC;
		picture = "\A3\Characters_F\data\ui\icon_g_tactical_ca.paa";
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 250};
    };
    class GVAR(Black): GVAR(Base) {
        _generalMacro = QGVAR(Black);
        scope = 2;
        displayname = "Tactical Goggles (Black)";
        model = QPATHTOF(data\tacs_goggles_black.p3d);
    };
    class GVAR(Green): GVAR(Base) {
        _generalMacro = QGVAR(Green);
        scope = 2;
        displayname = "Tactical Goggles (Green)";
        model = QPATHTOF(data\tacs_goggles_green.p3d);
    };
    class GVAR(Sand): GVAR(Base) {
        _generalMacro = QGVAR(Sand);
        scope = 2;
        displayname = "Tactical Goggles (Sand)";
        model = QPATHTOF(data\tacs_goggles_sand.p3d);
    };
};
