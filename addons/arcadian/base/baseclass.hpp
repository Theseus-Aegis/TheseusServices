class LandVehicle;
class Car: LandVehicle {
    class ACE_Actions {
        class ACE_MainActions;
    };
};

class Car_F: Car {
    class AnimationSources;
    class NewTurret;
    class Turrets {
        class MainTurret: NewTurret {
            class ViewOptics;
        };
    };

    class HitPoints {
        class HitRGlass;
        class HitLGlass;
        class HitGlass1;
        class HitGlass2;
        class HitGlass3;
        class HitGlass4;
        class HitGlass5;
        class HitGlass6;
        class HitBody;
        class HitFuel;
        class HitEngine;
        class HitLFWheel;
        class HitLF2Wheel;
        class HitRFWheel;
        class HitRF2Wheel;
    };

    class EventHandlers;
    class CargoTurret;
};

class CLASS(Arcadian_Base): Car_F {
    model = QPATHTOF(data\Arcadian.p3d);
    icon = "iconCar";
    picture = QPATHTOF(ui\icon_arcadian.paa);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\arcadian_body_black_co.paa),
        QPATHTOF(data\arcadian_interior_co.paa)
    };
    MACRO_ARCADIAN_DAMAGE

    #include "config_ace.hpp"
    #include "config_acre.hpp"
    #include "config_animationsources.hpp"
    #include "config_hitpoints.hpp"
    #include "config_misc.hpp"
    #include "config_plateinfo.hpp"
    #include "config_physx.hpp"
    #include "config_reflectors.hpp"
    #include "config_rendertargets.hpp"
    #include "config_simpleobject.hpp"
    #include "config_sound.hpp"
    #include "config_turret_rear.hpp"
};

class CLASS(Arcadian_Unarmed_Base): CLASS(Arcadian_Base) {
    #include "config_texturesources_unarmed.hpp"
    #include "config_useractions.hpp"

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle;};";
        killed = "if (local (_this select 0)) then { _this select 0 setPlateNumber '';};";
    };
};

class CLASS(Arcadian_Armed_Base): CLASS(Arcadian_Base) {
    model = QPATHTOF(data\Arcadian_Armed.p3d);
    picture = QPATHTOF(ui\icon_arcadian_armed.paa);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\arcadian_body_armed_black_co.paa),
        QPATHTOF(data\arcadian_interior_armed_co.paa)
    };
    MACRO_ARCADIAN_ARMED_DAMAGE
    #include "config_animationsources_armed.hpp"
    #include "config_texturesources_armed.hpp"
    #include "config_turret_gatling.hpp"
    #include "config_acre_armed.hpp"

    animationList[] = {
        "rearseats_source", 1,
    };

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle;};";
        killed = "if (local (_this select 0)) then { _this select 0 setPlateNumber '';};";
    };
};

