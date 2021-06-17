class Reflectors {
    class Light_L {
        color[] = {185, 190, 199};
        ambient[] =  {5, 5, 5};
        position = "Light_L";
        direction = "Light_L Dir";
        hitpoint = "Light_L";
        selection = "Light_L";
        size = 1;
        innerAngle = 30;
        outerAngle = 179;
        coneFadeCoef = 5;
        intensity = 10;
        useFlare = 1;
        dayLight = 0;
        flareSize = 2;
        flareMaxDistance = 90;
        class Attenuation {
            start = 1;
            constant = 0;
            linear = 0;
            quadratic = 0.25;
            hardLimitStart = 10;
            hardLimitEnd = 120;
        };
    };
    class Light_R: Light_L {
        position = "Light_R";
        direction = "Light_R Dir";
        hitpoint = "Light_R";
        selection = "Light_R";
    };
    class Light_L2: Light_L {
        intensity = 0;
        size = 0;
        position = "Light_L2";
        direction = "Light_L2 Dir";
    };
    class Light_R2: Light_R {
        intensity = 0;
        size = 0;
        position = "Light_R2";
        direction = "Light_R2 Dir";
    };
};

aggregateReflectors[] = {
    {"Light_L", "Light_L2"},
    {"Light_R", "Light_R2"}
};
selectionBackLights = "lights_running";
selectionBrakeLights = "lights_brake";
