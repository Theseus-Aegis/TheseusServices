class CLASS(Arcadian_I_Armed_Black): CLASS(Arcadian_Base) {
    scope = 2;
    scopeCurator = 2;
    forceInGarage = 1;
    side = 2;
    faction = QCLASS(IND);
    displayName = CSTRING(Armed_Black);
    //editorPreview = QPATHTOF(ui\Arcadian_Armed_Black.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\arcadian_body_armed_black_co.paa),
        QPATHTOF(data\arcadian_interier_armed_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(data\suv_armouredbody.rvmat),
        QPATHTOF(data\suv_interier.rvmat)
    };
    crew = QCLASS(Unit_I_Contractor);
    typicalCargo[] = {QCLASS(Unit_I_Contractor)};

    class AnimationSources: AnimationSources {
        class gun_hide_source: gun_hide_source {
            initPhase = 0;
        };
        class rearseats_source: rearseats_source {
            initPhase = 1;
        };
    };
    animationList[] = {
        "gun_hide_source", 0,
        "rearseats_source", 1
    };
};

class CLASS(Arcadian_B_Armed_Black): CLASS(Arcadian_I_Armed_Black) {
    MACRO_BLUFOR_VEHICLE
};

// Tan Variants
class CLASS(Arcadian_I_Armed_Tan): CLASS(Arcadian_I_Armed_Black) {
    scope = 2;
    displayName = CSTRING(Armed_Tan);
    //editorPreview = QPATHTOF(ui\Arcadian_Armed_Tan.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\arcadian_body_armed_tan_co.paa),
        QPATHTOF(data\arcadian_interier_armed_co.paa)
    };
};

class CLASS(Arcadian_B_Armed_Tan): CLASS(Arcadian_I_Armed_Tan) {
    MACRO_BLUFOR_VEHICLE
};

class CLASS(Arcadian_I_Armed_Green): CLASS(Arcadian_I_Armed_Black) {
    scope = 2;
    displayName = CSTRING(Armed_Green);
    //editorPreview = QPATHTOF(ui\Arcadian_Armed_Green.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\arcadian_body_armed_green_co.paa),
        QPATHTOF(data\arcadian_interier_armed_co.paa)
    };
};

class CLASS(Arcadian_B_Armed_Green): CLASS(Arcadian_I_Armed_Green) {
    MACRO_BLUFOR_VEHICLE
};

class CLASS(Arcadian_I_Armed_Grey): CLASS(Arcadian_I_Armed_Black) {
    scope = 2;
    displayName = CSTRING(Armed_Grey);
    //editorPreview = QPATHTOF(ui\Arcadian_Armed_Grey.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\arcadian_body_armed_grey_co.paa),
        QPATHTOF(data\arcadian_interier_armed_co.paa)
    };
};

class CLASS(Arcadian_B_Armed_Grey): CLASS(Arcadian_I_Armed_Grey) {
    MACRO_BLUFOR_VEHICLE
};
