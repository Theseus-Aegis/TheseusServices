class Sounds {

    class Idle_ext {
        sound[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_EXT_RPM0","db-12",1, 150};
        range = "2.5 *210";
        frequency = "1 * (1 + 0.8 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 30]) + 1  * (rpm factor [800,    3600])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 30]) + 1  * (rpm factor [800,    3600])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,    3600])) - 0))";
        volume = "engineOn * 1 * 0.5 * (rpm factor [0 *850, (0 *850 + 1 *(850-0 *850))]) * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,    5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,    5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,    5500])) factor [(2000 - 850)/(5500 - 850) - (((2000 - 850)/(5500 - 850) - 0) - (1 * ((2000 - 850)/(5500 - 850) - 0)))/2, 0])";
    };

    class Engine {
        sound[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_EXT_RPM1","db-11",1, 200};
        range = "2.5 *215";
        frequency = "1 * (1 + 0.8 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 30]) + 1  * (rpm factor [800,    3600])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 30]) + 1  * (rpm factor [800,    3600])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,    3600])) - (900 - 800)/(3000 - 800)))";
        volume = "engineOn * 1 * 0.5 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,    5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,    5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,    5500])) factor[0, (2000 - 850)/(5500 - 850) - (((2000 - 850)/(5500 - 850) - 0) - (1 * ((2000 - 850)/(5500 - 850) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,    5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,    5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,    5500])) factor [(3000 - 850)/(5500 - 850) - (((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850)) - (1 * ((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850))))/2, (2000 - 850)/(5500 - 850) + (((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850)) - (1 * ((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850))))/2])";
    };

    class Engine1_ext {
        sound[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_EXT_RPM2","db-10",1, 240};
        range = "2.5 *215";
        frequency = "1 * (1 + 0.8 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 30]) + 1  * (rpm factor [800,    3600])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 30]) + 1  * (rpm factor [800,    3600])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,    3600])) - (1100 - 800)/(3000 - 800)))";
        volume = "engineOn * 1 * 0.5 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,    5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,    5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,    5500])) factor[(2000 - 850)/(5500 - 850) + (((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850)) - (1 * ((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850))))/2, (3000 - 850)/(5500 - 850) - (((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850)) - (1 * ((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850))))/2]) * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,    5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,    5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,    5500])) factor [(4000 - 850)/(5500 - 850) - (((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850)) - (1 * ((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850))))/2, (3000 - 850)/(5500 - 850) + (((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850)) - (1 * ((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850))))/2])";
    };

    class Engine2_ext {
        sound[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_EXT_RPM3","db-9",1, 280};
        range = "2.5 *225";
        frequency = "0.8 + ((rpm/7000) factor[(2200/7000),(4100/7000)])*0.2";
        volume = "engineOn * 1 * 0.5 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,    5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,    5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,    5500])) factor[(3000 - 850)/(5500 - 850) + (((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850)) - (1 * ((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850))))/2, (4000 - 850)/(5500 - 850) - (((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850)) - (1 * ((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850))))/2]) * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,    5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,    5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,    5500])) factor [(5500 - 850)/(5500 - 850) - (((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850)) - (1 * ((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850))))/2, (4000 - 850)/(5500 - 850) + (((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850)) - (1 * ((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850))))/2])";
    };

    class Engine3_ext {
        sound[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_EXT_RPM3","db-8",1, 320};
        range = "2.5 *225";
        frequency = "1 * (1 + 0.8 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 30]) + 1  * (rpm factor [800,    3600])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 30]) + 1  * (rpm factor [800,    3600])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,    3600])) - (2000 - 800)/(3000 - 800)))";
        volume = "engineOn * 1 * 0.5 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,    5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,    5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,    5500])) factor[(3000 - 850)/(5500 - 850) + (((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850)) - (1 * ((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850))))/2, (4000 - 850)/(5500 - 850) - (((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850)) - (1 * ((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850))))/2]) * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,    5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,    5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,    5500])) factor [(5500 - 850)/(5500 - 850) - (((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850)) - (1 * ((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850))))/2, (4000 - 850)/(5500 - 850) + (((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850)) - (1 * ((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850))))/2])";
    };

    class Engine4_ext {
        sound[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_EXT_RPM4","db-8",1, 360};
        range = "2.5 *230";
        frequency = "1 * (1 + 0.8 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 30]) + 1  * (rpm factor [800,    3600])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 30]) + 1  * (rpm factor [800,    3600])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,    3600])) - (3000 - 800)/(3000 - 800)))";
        volume = "engineOn * 1 * 0.5 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,    5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,    5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,    5500])) factor[(4000 - 850)/(5500 - 850) + (((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850)) - (1 * ((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850))))/2, (5500 - 850)/(5500 - 850) - (((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850)) - (1 * ((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850))))/2])";
    };

    class Engine5_ext {
        sound[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_EXT_RPM4","db-8",1, 420};
        range = "2.5 *230";
        frequency = "1 * (1 + 0.8 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 30]) + 1  * (rpm factor [800,    3600])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 30]) + 1  * (rpm factor [800,    3600])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800,    3600])) - (3000 - 800)/(3000 - 800)))";
        volume = "engineOn * 1 * 0.5 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,    5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,    5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,    5500])) factor[(4000 - 850)/(5500 - 850) + (((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850)) - (1 * ((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850))))/2, (5500 - 850)/(5500 - 850) - (((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850)) - (1 * ((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850))))/2])";
    };

    class IdleThrust {
        sound[]={"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_idle_exhaust","db-6",1,200};
        frequency = "0.9 + ((rpm/7000) factor[(400/7000),(1150/7000)])*0.2";
        volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*1";
    };

    class EngineThrust {
        sound[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_EXT_RPM1","db-7",1,250};
        frequency = "0.8 + ((rpm/7000) factor[(900/7000),(2100/7000)])*0.2";
        volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(870/7000),(1100/7000)])* ((rpm/7000) factor[(2100/7000),(1300/7000)]))";
    };

    class Engine1_Thrust_ext {
        sound[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_EXT_RPM2","db-6",1,280};
        frequency = "0.8 + ((rpm/7000) factor[(1300/7000),(3100/7000)])*0.2";
        volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(1250/7000),(2050/7000)])* ((rpm/7000) factor[(3100/7000),(2300/7000)]))";
    };

    class Engine2_Thrust_ext {
        sound[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_EXT_RPM3","db-5",1,320};
        frequency = "0.8 + ((rpm/7000) factor[(2200/7000),(4100/7000)])*0.2";
        volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(2250/7000),(3050/7000)])* ((rpm/7000) factor[(4100/7000),(3300/7000)]))";
    };

    class Engine3_Thrust_ext {
        sound[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_EXT_RPM4","db-4",1,360};
        frequency = "0.8 + ((rpm/7000) factor[(3300/7000),(4900/7000)])*0.2";
        volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(3250/7000),(4050/7000)])* ((rpm/7000) factor[(4870/7000),(4200/7000)]))";
    };

    class Idle_int {
        sound[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_INT_RPM0","db-10",1};
        range = "2.5 *210";
        frequency = "0.9 + ((rpm/7000) factor[(400/7000),(1150/7000)])*0.2";
        volume = "engineOn*camPos*1";
    };

    class Engine_int {
        sound[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_INT_RPM1","db-9",1};
        range = "2.5 *215";
        frequency = "0.8 + ((rpm/7000) factor[(900/7000),(2100/7000)])*0.2";
        volume = "engineOn*(1-camPos)*(((rpm/7000) factor[(870/7000),(1100/7000)])* ((rpm/7000) factor[(2100/7000),(1300/7000)]))";
    };

    class Engine1_int {
        sound[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_INT_RPM2","db-8",1};
        range = "2.5 *215";
        frequency = "0.8 + ((rpm/7000) factor[(1300/7000),(3100/7000)])*0.2";
        volume = "engineOn*(1-camPos)*(((rpm/7000) factor[(1250/7000),(2050/7000)])* ((rpm/7000) factor[(3100/7000),(2300/7000)]))";
    };

    class Engine2_int {
        sound[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_INT_RPM3","db-7",1};
        range = "2.5 *220";
        frequency = "0.8 + ((rpm/7000) factor[(2200/7000),(4100/7000)])*0.2";
        volume = "engineOn*(1-camPos)*(((rpm/7000) factor[(2250/7000),(3050/7000)])* ((rpm/7000) factor[(4100/7000),(3300/7000)]))";
    };

    class Engine3_int {
        sound[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_INT_RPM3","db-6",1};
        range = "2.5 *225";
        frequency = "0.8 + ((rpm/7000) factor[(3300/7000),(4900/7000)])*0.2";
        volume = "engineOn*(1-camPos)*(((rpm/7000) factor[(3250/7000),(4050/7000)])* ((rpm/7000) factor[(4870/7000),(4200/7000)]))";
    };

    class Engine4_int {
        sound[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_INT_RPM4","db-6",1};
        range = "2.5 *230";
        frequency = "0.8 + ((rpm/7000) factor[(4200/7000),(6200/7000)])*0.2";
        volume = "engineOn*(1-camPos)*(((rpm/7000) factor[(4150/7000),(4800/7000)])* ((rpm/7000) factor[(6150/7000),(5150/7000)]))";
    };

    class Engine5_int {
        sound[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_INT_RPM4","db-6",1};
        range = "2.5 *230";
        frequency = "0.95 + ((rpm/7000) factor[(5100/7000),(7000/7000)])*0.15";
        volume = "engineOn*(1-camPos)*((rpm/7000) factor[(5100/7000),(6100/7000)])";
    };

    class IdleThrust_int {
        sound[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_INT_RPM0","db-10",1};
        range = "2.5 *210";
        frequency = "0.9 + ((rpm/7000) factor[(400/7000),(1150/7000)])*0.2";
        volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*1";
    };

    class EngineThrust_int {
        sound[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_INT_RPM1","db-9",1};
        frequency = "0.8 + ((rpm/7000) factor[(900/7000),(2100/7000)])*0.2";
        volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(870/7000),(1100/7000)])* ((rpm/7000) factor[(2100/7000),(1300/7000)]))";
    };

    class Engine1_Thrust_int {
        sound[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_INT_RPM2","db-8",1};
        frequency = "0.8 + ((rpm/7000) factor[(1300/7000),(3100/7000)])*0.2";
        volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(1250/7000),(2050/7000)])* ((rpm/7000) factor[(3100/7000),(2300/7000)]))";
    };

    class Engine2_Thrust_int {
        sound[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_INT_RPM3","db-7",1};
        frequency = "0.8 + ((rpm/7000) factor[(2200/7000),(4100/7000)])*0.2";
        volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(2250/7000),(3050/7000)])* ((rpm/7000) factor[(4100/7000),(3300/7000)]))";
    };

    class Engine3_Thrust_int {
        sound[] = {"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_INT_RPM4","db-6",1};
        frequency = "0.8 + ((rpm/7000) factor[(3300/7000),(4900/7000)])*0.2";
        volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(3250/7000),(4050/7000)])* ((rpm/7000) factor[(4870/7000),(4200/7000)]))";
    };

    class Movement {
        sound= "soundEnviron";
        frequency = "1";
        volume = "0";
    };

    class TiresRockOut {
        sound[] = {"A3\Sounds_F\vehicles2\soft\shared\tires02\Tires_Rock_Fast_EXT",1,60};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
    };

    class TiresSandOut {
        sound[] = {"A3\Sounds_F\vehicles2\soft\shared\tires02\Tires_Sand_Fast_EXT","db-6",1,60};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
    };

    class TiresGrassOut {
        sound[] = {"A3\Sounds_F\vehicles2\soft\shared\tires02\Tires_Grass_Fast_EXT","db-6",1,60};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
    };

    class TiresMudOut {
        sound[] = {"A3\Sounds_F\vehicles2\soft\shared\tires02\Tires_Mud_Fast_EXT","db-6",1,60};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
    };

    class TiresGravelOut {
        sound[] = {"A3\Sounds_F\vehicles2\soft\shared\tires02\Tires_Gravel_Fast_EXT","db-6",1,60};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
    };

    class TiresAsphaltOut {
        sound[] = {"A3\Sounds_F\vehicles2\soft\shared\tires02\Tires_Asphalt_Fast_EXT","db-6",1,60};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
    };

    class TiresRockIn {
        sound[] = {"A3\Sounds_F\vehicles2\soft\shared\tires02\Tires_Rock_Fast_INT","db-6",1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
    };

    class TiresSandIn {
        sound[] = {"A3\Sounds_F\vehicles2\soft\shared\tires02\Tires_Sand_Fast_INT","db-6",1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
    };

    class TiresGrassIn {
        sound[] = {"A3\Sounds_F\vehicles2\soft\shared\tires02\Tires_Grass_Fast_INT","db-6",1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
    };

    class TiresMudIn {
        sound[] = {"A3\Sounds_F\vehicles2\soft\shared\tires02\Tires_Mud_Fast_INT","db-6",1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
    };

    class TiresGravelIn {
        sound[] = {"A3\Sounds_F\vehicles2\soft\shared\tires02\Tires_Gravel_Fast_INT","db-6",1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
    };

    class TiresAsphaltIn {
        sound[] = {"A3\Sounds_F\vehicles2\soft\shared\tires02\Tires_Asphalt_Fast_INT","db-6",1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
    };

    class breaking_ext_road {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04","db-3",1,80};
        frequency = "1";
        volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
    };

    class acceleration_ext_road {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-3",1,80};
        frequency = "1";
        volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
    };

    class turn_left_ext_road {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-3",1,80};
        frequency = "1";
        volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
    };

    class turn_right_ext_road {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-3",1,80};
        frequency = "1";
        volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
    };

    class breaking_ext_dirt {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking","db-3",1,60};
        frequency = "1";
        volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
    };

    class acceleration_ext_dirt {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration","db-3",1,60};
        frequency = "1";
        volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
    };

    class turn_left_ext_dirt {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db-3",1,60};
        frequency = "1";
        volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
    };

    class turn_right_ext_dirt {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db-3",1,60};
        frequency = "1";
        volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
    };

    class breaking_int_road {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int","db-10",1};
        frequency = "1";
        volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
    };

    class acceleration_int_road {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1};
        frequency = "1";
        volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
    };

    class turn_left_int_road {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1};
        frequency = "1";
        volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
    };

    class turn_right_int_road {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1};
        frequency = "1";
        volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
    };

    class breaking_int_dirt {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int","db-10",1};
        frequency = "1";
        volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
    };

    class acceleration_int_dirt {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int","db-10",1};
        frequency = "1";
        volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
    };

    class turn_left_int_dirt {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db-10",1};
        frequency = "1";
        volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
    };

    class turn_right_int_dirt {
        sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db-10",1};
        frequency = "1";
        volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
    };
};
