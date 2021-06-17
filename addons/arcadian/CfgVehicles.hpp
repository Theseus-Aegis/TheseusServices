class CfgVehicles {
    #include "base\baseclass.hpp"
    // Unarmed - Black
    class CLASS(Arcadian_I_Black): CLASS(Arcadian_Unarmed_Base) {
        MACRO_INDEPENDENT_VEHICLE
        displayName = CSTRING(Black);
        textureList[] = {
            "Black", 1
        };
    };
    class CLASS(Arcadian_B_Black): CLASS(Arcadian_I_Black) {
        MACRO_BLUFOR_VEHICLE
    };

    // Tan
    class CLASS(Arcadian_I_Tan): CLASS(Arcadian_Unarmed_Base) {
        MACRO_INDEPENDENT_VEHICLE
        displayName = CSTRING(Tan);
        textureList[] = {
            "Tan", 1
        };
    };
    class CLASS(Arcadian_B_Tan): CLASS(Arcadian_I_Tan) {
        MACRO_BLUFOR_VEHICLE
    };

    // Green
    class CLASS(Arcadian_I_Green): CLASS(Arcadian_Unarmed_Base) {
        MACRO_INDEPENDENT_VEHICLE
        displayName = CSTRING(Green);
        textureList[] = {
            "Green", 1
        };
    };
    class CLASS(Arcadian_B_Green): CLASS(Arcadian_I_Green) {
        MACRO_BLUFOR_VEHICLE
    };

    // Grey
    class CLASS(Arcadian_I_Grey): CLASS(Arcadian_Unarmed_Base) {
        MACRO_INDEPENDENT_VEHICLE
        displayName = CSTRING(Grey);
        textureList[] = {
            "Grey", 1
        };
    };
    class CLASS(Arcadian_B_Grey): CLASS(Arcadian_I_Grey) {
        MACRO_BLUFOR_VEHICLE
    };

    // Armed - Black
    class CLASS(Arcadian_Armed_I_Black): CLASS(Arcadian_Armed_Base) {
        MACRO_INDEPENDENT_VEHICLE
        displayName = CSTRING(Armed_Black);
        textureList[] = {
            "Armed_Black", 1
        };
    };
    class CLASS(Arcadian_Armed_B_Black): CLASS(Arcadian_Armed_I_Black) {
        MACRO_BLUFOR_VEHICLE
    };

    // Tan
    class CLASS(Arcadian_Armed_I_Tan): CLASS(Arcadian_Armed_Base) {
        MACRO_INDEPENDENT_VEHICLE
        displayName = CSTRING(Armed_Tan);
        textureList[] = {
            "Armed_Tan", 1
        };
    };
    class CLASS(Arcadian_Armed_B_Tan): CLASS(Arcadian_Armed_I_Tan) {
        MACRO_BLUFOR_VEHICLE
    };

    // Green
    class CLASS(Arcadian_Armed_I_Green): CLASS(Arcadian_Armed_Base) {
        MACRO_INDEPENDENT_VEHICLE
        displayName = CSTRING(Armed_Green);
        textureList[] = {
            "Armed_Green", 1
        };
    };
    class CLASS(Arcadian_Armed_B_Green): CLASS(Arcadian_Armed_I_Green) {
        MACRO_BLUFOR_VEHICLE
    };

    // Grey
    class CLASS(Arcadian_Armed_I_Grey): CLASS(Arcadian_Armed_Base) {
        MACRO_INDEPENDENT_VEHICLE
        displayName = CSTRING(Armed_Grey);
        textureList[] = {
            "Armed_Grey", 1
        };
    };
    class CLASS(Arcadian_Armed_B_Grey): CLASS(Arcadian_Armed_I_Grey) {
        MACRO_BLUFOR_VEHICLE
    };
};
