#define COMPONENT arcadian
#define COMPONENT_BEAUTIFIED Arcadian GT

#include "\x\tacs\addons\main\script_mod.hpp"

#include "\x\tacs\addons\main\script_macros.hpp"

#define MACRO_BLUFOR_VEHICLE \
    scope = 2; \
    forceInGarage = 0; \
    side = 1; \
    faction = QCLASS(BLU); \
    crew = QCLASS(Unit_B_Contractor); \
    typicalCargo[] = {QCLASS(Unit_B_Contractor)};
