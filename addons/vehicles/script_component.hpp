#define COMPONENT vehicles
#define COMPONENT_BEAUTIFIED Vehicles
#include "\x\tacs\addons\main\script_mod.hpp"

#ifdef DEBUG_ENABLED_VEHICLES
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_VEHICLES
    #define DEBUG_SETTINGS DEBUG_SETTINGS_VEHICLES
#endif

#include "\x\tacs\addons\main\script_macros.hpp"

#define MACRO_POLARIS_TEXTURES \
    class textureSources { \
        class Black { \
            displayName = "STR_A3_TEXTURESOURCES_BLACK0"; \
            author = "Kresky"; \
            textures[] = { \
                QPATHTOF(data\polaris_black_ext01_co.paa), \
                QPATHTOF(data\polaris_black_ext02_co.paa), \
                QPATHTOF(data\polaris_black_ext03_co.paa), \
                QPATHTOF(data\polaris_black_adds_co.paa), \
                "\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa", \
                "\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa" \
            }; \
            factions[] = {QCLASS(IND), QCLASS(BLU)}; \
        }; \
        class Tan { \
            displayName = "STR_A3_TEXTURESOURCES_TAN0"; \
            author = "GilleeDoo"; \
            textures[] = { \
                QPATHTOF(data\polaris_tan_ext01_co.paa), \
                QPATHTOF(data\polaris_tan_ext02_co.paa), \
                QPATHTOF(data\polaris_tan_ext03_co.paa), \
                QPATHTOF(data\polaris_tan_adds_co.paa), \
                "\A3\weapons_f_beta\launchers\titan\data\launcher_co.paa", \
                "\A3\weapons_f_beta\launchers\titan\data\tubem_co.paa" \
            }; \
            factions[] = {QCLASS(IND), QCLASS(BLU)}; \
        }; \
        class Green { \
            displayName = "STR_A3_TEXTURESOURCES_GREEN0"; \
            author = "GilleeDoo"; \
            textures[] = { \
                QPATHTOF(data\polaris_green_ext01_co.paa), \
                QPATHTOF(data\polaris_green_ext02_co.paa), \
                QPATHTOF(data\polaris_green_ext03_co.paa), \
                QPATHTOF(data\polaris_green_adds_co.paa), \
                "\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa", \
                "\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa" \
            }; \
            factions[] = {QCLASS(IND), QCLASS(BLU)}; \
        }; \
    }; \
    class EventHandlers: EventHandlers { \
        init = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle; };"; \
    };
