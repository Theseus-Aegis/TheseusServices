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
            class black { \
                displayName = "Black"; \
                author = "Kresky"; \
                textures[] = { \
                    QPATHTOF(data\polaris_black_ext01_co.paa), \
                    QPATHTOF(data\polaris_black_ext02_co.paa), \
                    QPATHTOF(data\polaris_black_ext03_co.paa), \
                    QPATHTOF(data\polaris_black_adds_co.paa), \
                    QPATHTOF(data\polaris_black_atlauncher_co.paa), \
                    QPATHTOF(data\polaris_black_attube_co.paa) \
                }; \
                factions[] = {}; \
            }; \
            class tan { \
                displayName = "Tan"; \
                author = "Kresky"; \
                textures[] = { \
                    QPATHTOF(data\polaris_tan_ext01_co.paa), \
                    QPATHTOF(data\polaris_tan_ext02_co.paa), \
                    QPATHTOF(data\polaris_tan_ext03_co.paa), \
                    QPATHTOF(data\polaris_tan_adds_co.paa), \
                    QPATHTOF(data\polaris_tan_atlauncher_co.paa), \
                    QPATHTOF(data\polaris_tan_attube_co.paa) \
                }; \
                factions[] = {}; \
            }; \
            class green { \
                displayName = "Green"; \
                author = "Bohemia Interactive"; \
                textures[] = { \
                    "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa", \
                    "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa", \
                    "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa", \
                    "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa", \
                    "\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa", \
                    "\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa" \
                }; \
                factions[] = {}; \
            }; \
        }; \
        class EventHandlers: EventHandlers { \
            init = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle; };"; \
        };
