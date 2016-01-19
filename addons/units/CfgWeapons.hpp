class CfgWeapons {
    // Underwear
    class Uniform_Base;
    class U_BasicBody: Uniform_Base {
        class ItemInfo;
    };
    class CLASS(Uniform_Underwear_BlackLogo): U_BasicBody {
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Underwear_BlackLogo);
        };
    };
    class CLASS(Uniform_Underwear_WhiteLogo): U_BasicBody {
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Underwear_WhiteLogo);
        };
    };
    class CLASS(Uniform_Underwear_BlueLogo): U_BasicBody {
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Underwear_BlueLogo);
        };
    };
    class CLASS(Uniform_Underwear_GreenLogo): U_BasicBody {
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Underwear_GreenLogo);
        };
    };


    // Combat - Long SLeeves
    class CLASS(): U_BasicBody {
        scope = 2;
        author = "Pomigit, Jonpas";

    };
};
