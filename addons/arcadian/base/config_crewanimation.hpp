class CfgMovesBasic {
    class DefaultDie;

    class ManActions {
        Arcadian_Gunner = "Arcadian_Gunner";
        Arcadian_GunnerIn = "Arcadian_GunnerIn";
        Arcadian_GunnerTurnOut = "Arcadian_GunnerTurnOut";
        Arcadian_GunnerTurnIn = "Arcadian_GunnerTurnIn";
        /*
        Arcadian_Cargo_1 = "Arcadian_Cargo_1";
        Arcadian_Cargo_2 = "Arcadian_Cargo_2";
        Arcadian_Cargo_3 = "Arcadian_Cargo_3";
        Arcadian_Driver = "Arcadian_Driver";
        */
    };
};

class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class Arcadian_Gunner: Crew {
            file = QPATHTOF(data\anim\arcadian_gunner_turnout_pose.rtm);
            interpolateTo[] = {
                "Arcadian_KIA_Gunner", 1
            };
            speed = 1e+010;
            leftHandIKCurve[] = {0, 0, 1, 1};
            rightHandIKCurve[] = {0, 0, 1, 1};
        };
        class Arcadian_GunnerIn: Arcadian_Gunner {
            file = QPATHTOF(data\anim\arcadian_gunner_turnin_pose.rtm);
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class Arcadian_KIA_Gunner: DefaultDie {
            actions = DeadActions;
            file = QPATHTOF(data\anim\arcadian_gunner_death.rtm);
            speed = 1e+010;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {
                "Unconscious", 0.1
            };
        };
        class Arcadian_GunnerTurnIn: Crew {
            file = QPATHTOF(data\anim\arcadian_gunner_turnin.rtm);
            interpolateTo[] = {
                "Arcadian_KIA_Gunner", 1
            };
            connectTo[] = {
                "Arcadian_GunnerIn", 0.8
            };
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
            speed = -0.9;
            looped = 0;
        };
        class Arcadian_GunnerTurnOut: Crew {
            file = QPATHTOF(data\anim\arcadian_gunner_turnout.rtm);
            interpolateTo[] = {
                "Arcadian_KIA_Gunner", 1
            };
            connectTo[] = {
                "Arcadian_Gunner", 0.8
            };
            leftHandIKCurve[] = {0, 0, 1, 1};
            rightHandIKCurve[] = {0, 0, 1, 1};
            speed = -1.8;
            looped = 0;
        };
        /*
        class Arcadian_Cargo_1: Crew {
            file = QPATHTOF(data\anim\arcadian_cargo.rtm);
            interpolateTo[] = {
                "Arcadian_Cargo_1_KIA", 0.01
            };
            speed = 1e+010;
        };
        class Arcadian_Cargo_2: Arcadian_Cargo_1 {
            file = QPATHTOF(data\anim\arcadian_cargo_1.rtm);
            interpolateTo[] = {
                "Arcadian_Cargo_2_KIA", 0.01
            };
        };
        class Arcadian_Cargo_3: Arcadian_Cargo_1 {
            file = QPATHTOF(data\anim\arcadian_cargo_2.rtm);
            interpolateTo[] = {
                "Arcadian_Cargo_3_KIA", 0.01
            };
        };
        class Arcadian_Cargo_1_KIA: DefaultDie {
            actions = "DeadActions";
            file = QPATHTOF(data\anim\arcadian_kia_cargo.rtm);
            speed = 1e+010;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {
                "Unconscious", 0.1
            };
        };
        class Arcadian_Cargo_2_KIA: Arcadian_Cargo_1_KIA {
            file = QPATHTOF(data\anim\arcadian_kia_cargo_1.rtm);
        };
        class Arcadian_Cargo_3_KIA: Arcadian_Cargo_1_KIA {
            file = QPATHTOF(data\anim\arcadian_kia_cargo_2.rtm);
        };
        class Arcadian_Driver: Crew {
            file = QPATHTOF(data\anim\arcadian_driver.rtm);
            interpolateTo[] = {
                "Arcadian_Driver_KIA", 1
            };
        };
        class Arcadian_Driver_KIA: DefaultDie {
            actions = "DeadActions";
            file = QPATHTOF(data\anim\arcadian_kia_driver.rtm);
            speed = 1e+010;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {
                "Unconscious", 0.1
            };
        };
        */
    };
};
