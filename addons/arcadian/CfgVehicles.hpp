class CfgVehicles {
    #include "CfgVehicles\baseclass.hpp"

    class CLASS(Arcadian_I_Minigun_Black): CLASS(Arcadian_Base) {
        scope = 2;
        scopeCurator = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        displayName = "Arcadian GT Armed (Black)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\armoredsuv_bodygun_co.paa),
            QPATHTOF(data\armoredsuv_interiergun_co.paa)
        };
        hiddenSelectionMaterials[] = {
            QPATHTOF(data\suv_armouredbody.rvmat),
            QPATHTOF(data\suv_interier.rvmat)
        };
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Contractor)};
        class Damage {
            tex[] = {};
            mat[] = {
                QPATHTOR(data\suv_armouredbody.rvmat),
                QPATHTOR(data\suv_armouredbody_damage.rvmat),
                QPATHTOR(data\suv_armouredbody_destruct.rvmat),
                QPATHTOR(data\suv_chrom.rvmat),
                QPATHTOR(data\suv_chrom_damage.rvmat),
                QPATHTOR(data\suv_chrom_destruct.rvmat),
                QPATHTOR(data\suv_glass.rvmat),
                QPATHTOR(data\suv_glass_damage.rvmat),
                QPATHTOR(data\suv_glass_destruct.rvmat),
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_F\default_destruct.rvmat"
            };
        };
        animationList[] = {
            "rearseats_source", 1,
            "gun_hide_source", 0
        };
    };

    class CLASS(Arcadian_I_Black): CLASS(Arcadian_Base) {
        scope = 2;
        scopeCurator = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        displayName = "Arcadian GT Unarmed (Black)";
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Contractor)};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\armoredsuv_body_co.paa),
            QPATHTOF(data\armoredsuv_interier_co.paa)
        };
        hiddenSelectionMaterials[] = {
            QPATHTOF(data\suv_body.rvmat),
            QPATHTOF(data\suv_interier.rvmat)
        };
        class Damage {
            tex[] = {};
            mat[] = {
                QPATHTOR(data\suv_body.rvmat),
                QPATHTOR(data\suv_body_damage.rvmat),
                QPATHTOR(data\suv_body_destruct.rvmat),
                QPATHTOR(data\suv_chrom.rvmat),
                QPATHTOR(data\suv_chrom_damage.rvmat),
                QPATHTOR(data\suv_chrom_destruct.rvmat),
                QPATHTOR(data\suv_glass.rvmat),
                QPATHTOR(data\suv_glass_damage.rvmat),
                QPATHTOR(data\suv_glass_destruct.rvmat),
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_F\default_destruct.rvmat"
            };
        };
        class AnimationSources: AnimationSources {
            class gun_hide_source: gun_hide_source {
                initPhase = 1;
            };
            class rearseats_source: rearseats_source {
                initPhase = 0;
            };
        };
        animationList[] = {
            "rearseats_source", 0,
            "gun_hide_source", 1
        };
    };
};
