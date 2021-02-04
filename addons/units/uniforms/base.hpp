class Uniform_Base;

// Underwear
class U_BasicBody: Uniform_Base {
    class ItemInfo;
};
class CLASS(Underwear_BlackLogo): U_BasicBody {
    scope = 1;
    author = "Pomigit, Jonpas";
    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_Underwear_BlackLogo);
    };
};
class CLASS(Underwear_WhiteLogo): U_BasicBody {
    scope = 1;
    author = "Pomigit, Jonpas";
    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_Underwear_WhiteLogo);
    };
};
class CLASS(Underwear_BlueLogo): U_BasicBody {
    scope = 1;
    author = "Pomigit, Jonpas";
    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_Underwear_BlueLogo);
    };
};
class CLASS(Underwear_GreenLogo): U_BasicBody {
    scope = 1;
    author = "Pomigit, Jonpas";
    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_Underwear_GreenLogo);
    };
};

// Uniforms
class UniformItem;
class CLASS(Uniform_Base): Uniform_Base {
    dlc = QUOTE(PREFIX);
    scope = 0;
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

    class ItemInfo: UniformItem {
        uniformModel = "-";
        containerClass = "Supply40";
        mass = 40;
    };
};
class CLASS(Uniform_Base_Floral): CLASS(Uniform_Base) {
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

    class ItemInfo: UniformItem {
        uniformModel = "-";
        containerClass = "Supply40";
        mass = 40;
    };
};
