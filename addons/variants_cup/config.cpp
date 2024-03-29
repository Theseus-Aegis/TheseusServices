#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(Unit_Long_Black),
            QCLASS(Unit_Long_Earth),
            QCLASS(Unit_Long_Pattern_Foliage),
            QCLASS(Unit_Long_Plaid_Black1),
            QCLASS(Unit_Long_Plaid_Black2),
            QCLASS(Unit_Long_Plaid_Buffalo1),
            QCLASS(Unit_Long_Plaid_Buffalo2),
            QCLASS(Unit_Long_Plaid_Earth1),
            QCLASS(Unit_Long_Plaid_Earth2),
            QCLASS(Unit_Long_Plaid_Earth3),
            QCLASS(Unit_Long_Plaid_Foliage1),
            QCLASS(Unit_Long_Plaid_Foliage2),
            QCLASS(Unit_Long_Plaid_Foliage3),
            QCLASS(Unit_Long_Plaid_MM1),
            QCLASS(Unit_Long_Plaid_MM2),
            QCLASS(Unit_Long_Plaid_MM3),
            QCLASS(Unit_Long_Plaid_MM4),
            QCLASS(Unit_Long_Plaid_MM5),
            QCLASS(Unit_Long_Foliage_Kneepads),
            QCLASS(Unit_Rolled_Black),
            QCLASS(Unit_Rolled_Earth),
            QCLASS(Unit_Rolled_Pattern_Foliage),
            QCLASS(Unit_Rolled_Plaid_Black1),
            QCLASS(Unit_Rolled_Plaid_Black2),
            QCLASS(Unit_Rolled_Plaid_Buffalo1),
            QCLASS(Unit_Rolled_Plaid_Buffalo2),
            QCLASS(Unit_Rolled_Plaid_Earth1),
            QCLASS(Unit_Rolled_Plaid_Earth2),
            QCLASS(Unit_Rolled_Plaid_Earth3),
            QCLASS(Unit_Rolled_Plaid_Foliage1),
            QCLASS(Unit_Rolled_Plaid_Foliage2),
            QCLASS(Unit_Rolled_Plaid_Foliage3),
            QCLASS(Unit_Rolled_Plaid_MM1),
            QCLASS(Unit_Rolled_Plaid_MM2),
            QCLASS(Unit_Rolled_Plaid_MM3),
            QCLASS(Unit_Rolled_Plaid_MM4),
            QCLASS(Unit_Rolled_Plaid_MM5)
        };
        weapons[] = {
            QCLASS(Uniform_Long_Black),
            QCLASS(Uniform_Long_Earth),
            QCLASS(Uniform_Long_Pattern_Foliage),
            QCLASS(Uniform_Long_Plaid_Black1),
            QCLASS(Uniform_Long_Plaid_Black2),
            QCLASS(Uniform_Long_Plaid_Buffalo1),
            QCLASS(Uniform_Long_Plaid_Buffalo2),
            QCLASS(Uniform_Long_Plaid_Earth1),
            QCLASS(Uniform_Long_Plaid_Earth2),
            QCLASS(Uniform_Long_Plaid_Earth3),
            QCLASS(Uniform_Long_Plaid_Foliage1),
            QCLASS(Uniform_Long_Plaid_Foliage2),
            QCLASS(Uniform_Long_Plaid_Foliage3),
            QCLASS(Uniform_Long_Plaid_MM1),
            QCLASS(Uniform_Long_Plaid_MM2),
            QCLASS(Uniform_Long_Plaid_MM3),
            QCLASS(Uniform_Long_Plaid_MM4),
            QCLASS(Uniform_Long_Plaid_MM5),
            QCLASS(Uniform_Long_Foliage_Kneepads),
            QCLASS(Uniform_Rolled_Black),
            QCLASS(Uniform_Rolled_Earth),
            QCLASS(Uniform_Rolled_Pattern_Foliage),
            QCLASS(Uniform_Rolled_Plaid_Black1),
            QCLASS(Uniform_Rolled_Plaid_Black2),
            QCLASS(Uniform_Rolled_Plaid_Buffalo1),
            QCLASS(Uniform_Rolled_Plaid_Buffalo2),
            QCLASS(Uniform_Rolled_Plaid_Earth1),
            QCLASS(Uniform_Rolled_Plaid_Earth2),
            QCLASS(Uniform_Rolled_Plaid_Earth3),
            QCLASS(Uniform_Rolled_Plaid_Foliage1),
            QCLASS(Uniform_Rolled_Plaid_Foliage2),
            QCLASS(Uniform_Rolled_Plaid_Foliage3),
            QCLASS(Uniform_Rolled_Plaid_MM1),
            QCLASS(Uniform_Rolled_Plaid_MM2),
            QCLASS(Uniform_Rolled_Plaid_MM3),
            QCLASS(Uniform_Rolled_Plaid_MM4),
            QCLASS(Uniform_Rolled_Plaid_MM5)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_units"};
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"GilleeDoo", "Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
