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
    hiddenSelectionMaterials[] = {
        QPATHTOF(data\suv_body.rvmat),
        QPATHTOF(data\suv_interier.rvmat)
    };

    animationList[] = {
        "gun_hide_source", 1,
        "CloseCover", 1,
        "reardoor_source", 0,
        "ram_hide_source", 0,
        "lightbar_hide_source", 1,
        "BeaconsStart", 1,
        "roofbar_hide_source", 0,
        "antenna_hide_source", 0,
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
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\arcadian_body_grey_co.paa),
        QPATHTOF(data\armoredsuv_interier_co.paa)
    };
};

class CLASS(Arcadian_B_Grey): CLASS(Arcadian_I_Grey) {
    MACRO_BLUFOR_VEHICLE
};
