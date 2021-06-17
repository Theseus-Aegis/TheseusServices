class CfgVehicles {
    #include "base\baseclass.hpp"
    // Unarmed.
    class CLASS(Arcadian_I_Black): CLASS(Arcadian_Unarmed_Base) {
        scope = 2;
        scopeCurator = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        displayName = "Test Arcadian Unarmed";
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Contractor)};

        textureList[] = {
            "Unarmed_Black", 1
        };
    };
    class CLASS(Arcadian_B_Black): CLASS(Arcadian_I_Black) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Contractor)};
    };

    // Armed.
    class CLASS(Arcadian_Armed_I_Black): CLASS(Arcadian_Armed_Base) {
        scope = 2;
        scopeCurator = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        displayName = "Test Arcadian Armed";
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Contractor)};

        textureList[] = {
            "Armed_Black", 1
        };
    };
    class CLASS(Arcadian_Armed_B_Black): CLASS(Arcadian_Armed_I_Black) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = QCLASS(BLU);
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Contractor)};
    };
};
