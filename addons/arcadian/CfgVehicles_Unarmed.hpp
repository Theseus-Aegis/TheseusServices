class CLASS(Arcadian_I_Black): CLASS(Arcadian_Base) {
    scope = 2;
    scopeCurator = 2;
    forceInGarage = 1;
    side = 2;
    faction = QCLASS(IND);
    displayName = CSTRING(Black);
    crew = QCLASS(Unit_I_Contractor);
    typicalCargo[] = {QCLASS(Unit_I_Contractor)};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\arcadian_body_black_co.paa),
        QPATHTOF(data\arcadian_interier_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(data\suv_body.rvmat),
        QPATHTOF(data\suv_interier.rvmat)
    };

    class AnimationSources: AnimationSources {
        class gun_hide_source: gun_hide_source {
            initPhase = 1;
        };
        class rearseats_source: rearseats_source {
            initPhase = 0;
        };
    };
    animationList[] = {
        "gun_hide_source", 1,
        "rearseats_source", 0
    };
};
class CLASS(Arcadian_B_Black): CLASS(Arcadian_I_Black) {
    MACRO_BLUFOR_VEHICLE
};

// Tan Variants
class CLASS(Arcadian_I_Tan): CLASS(Arcadian_I_Black) {
    scope = 2;
    displayName = CSTRING(Tan);
    //editorPreview = QPATHTOF(ui\Arcadian_Tan.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\arcadian_body_tan_co.paa),
        QPATHTOF(data\arcadian_interier_co.paa)
    };
};
class CLASS(Arcadian_B_Tan): CLASS(Arcadian_I_Tan) {
    MACRO_BLUFOR_VEHICLE
};

// Green Variants
class CLASS(Arcadian_I_Green): CLASS(Arcadian_I_Black) {
    scope = 2;
    displayName = CSTRING(Green);
    //editorPreview = QPATHTOF(ui\Arcadian_Green.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\arcadian_body_green_co.paa),
        QPATHTOF(data\arcadian_interier_co.paa)
    };
};
class CLASS(Arcadian_B_Green): CLASS(Arcadian_I_Green) {
    MACRO_BLUFOR_VEHICLE
};

// Grey Variants
class CLASS(Arcadian_I_Grey): CLASS(Arcadian_I_Black) {
    scope = 2;
    displayName = CSTRING(Grey);
    //editorPreview = QPATHTOF(ui\Arcadian_Grey.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\arcadian_body_grey_co.paa),
        QPATHTOF(data\arcadian_interier_co.paa)
    };
};

class CLASS(Arcadian_B_Grey): CLASS(Arcadian_I_Grey) {
    MACRO_BLUFOR_VEHICLE
};
