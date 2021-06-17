#define COMPONENT arcadian
#define COMPONENT_BEAUTIFIED Arcadian GT

#include "\x\tacs\addons\main\script_mod.hpp"

#include "\x\tacs\addons\main\script_macros.hpp"

#define MACRO_DAMAGE \
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
        "a3\data_f\Glass_veh_damage.rvmat", \
        "a3\data_f\Glass_veh_damage.rvmat", \
        "a3\data_f\default.rvmat", \
        "a3\data_f\default.rvmat", \
        "a3\data_f\default_destruct.rvmat" \
    }; \
};

#define MACRO_BLUFOR_VEHICLE \
    scope = 2; \
    forceInGarage = 0; \
    side = 1; \
    faction = QCLASS(BLU); \
    crew = QCLASS(Unit_B_Contractor); \
    typicalCargo[] = {QCLASS(Unit_B_Contractor)};
