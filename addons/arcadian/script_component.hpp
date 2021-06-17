#define COMPONENT arcadian
#define COMPONENT_BEAUTIFIED Arcadian GT

#include "\x\tacs\addons\main\script_mod.hpp"

#include "\x\tacs\addons\main\script_macros.hpp"

#define MACRO_ARCADIAN_DAMAGE \
class Damage { \
    tex[] = {}; \
    mat[] = { \
        QPATHTOR(data\suv_body.rvmat), \
        QPATHTOR(data\suv_body_damage.rvmat), \
        QPATHTOR(data\suv_body_destruct.rvmat), \
        QPATHTOR(data\suv_chrom.rvmat), \
        QPATHTOR(data\suv_chrom_damage.rvmat), \
        QPATHTOR(data\suv_chrom_destruct.rvmat), \
        "a3\data_f\glass_veh.rvmat", \
        "a3\data_f\glass_veh_armored_damage.rvmat", \
        "a3\data_f\glass_veh_armored_damage.rvmat", \
    }; \
};

#define MACRO_INDEPENDENT_VEHICLE \
    scope = 2; \
    scopeCurator = 2; \
    forceInGarage = 1; \
    side = 2; \
    faction = QCLASS(IND); \
    crew = QCLASS(Unit_I_Contractor); \
    typicalCargo[] = {QCLASS(Unit_I_Contractor)};

#define MACRO_BLUFOR_VEHICLE \
    scope = 2; \
    forceInGarage = 0; \
    side = 1; \
    faction = QCLASS(BLU); \
    crew = QCLASS(Unit_B_Contractor); \
    typicalCargo[] = {QCLASS(Unit_B_Contractor)};
