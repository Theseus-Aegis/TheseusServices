#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(Heli_I_MH6_Blue),
            QCLASS(Heli_B_MH6_Blue),
            QCLASS(Heli_I_Wildcat_Theseus),
            QCLASS(Heli_B_Wildcat_Theseus),
            QCLASS(Heli_I_Wildcat_Theseus_Unarmed),
            QCLASS(Heli_B_Wildcat_Theseus_Unarmed),
            QCLASS(HEMTT_I_Ammo),
            QCLASS(HEMTT_B_Ammo),
            QCLASS(HEMTT_I_Fuel),
            QCLASS(HEMTT_B_Fuel),
            QCLASS(HEMTT_I_Repair),
            QCLASS(HEMTT_B_Repair),
            QCLASS(HEMTT_I_Transport),
            QCLASS(HEMTT_B_Transport),
            QCLASS(Offroad_I_Black),
            QCLASS(Offroad_B_Black),
            QCLASS(Offroad_I_Armed_Black),
            QCLASS(Offroad_B_Armed_Black),
            QCLASS(Polaris_I_Black),
            QCLASS(Polaris_B_Black),
            QCLASS(Polaris_I_Armed_Black),
            QCLASS(Polaris_B_Armed_Black),
            QCLASS(Polaris_I_AT_Black),
            QCLASS(Polaris_B_AT_Black),
            QCLASS(Polaris_I_Tan),
            QCLASS(Polaris_B_Tan),
            QCLASS(Polaris_I_Armed_Tan),
            QCLASS(Polaris_B_Armed_Tan),
            QCLASS(Polaris_I_AT_Tan),
            QCLASS(Polaris_B_AT_Tan),
            QCLASS(Polaris_I_Green),
            QCLASS(Polaris_B_Green),
            QCLASS(Polaris_I_Armed_Green),
            QCLASS(Polaris_B_Armed_Green),
            QCLASS(Polaris_I_AT_Green),
            QCLASS(Polaris_B_AT_Green),
            QCLASS(RHIB_I_Theseus_Black),
            QCLASS(RHIB_B_Theseus_Black),
            QCLASS(Van_Cargo_I_Black),
            QCLASS(Van_Cargo_B_Black),
            QCLASS(Van_Transport_I_Black),
            QCLASS(Van_Transport_B_Black)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_units"};
        author = ECSTRING(main,Author);
        authors[] = {"Pomigit", "BadHabitz", "Jonpas", "Mike", "GilleeDoo"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
