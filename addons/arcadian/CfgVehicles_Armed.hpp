/*
class CLASS(Arcadian_I_Minigun_Black): CLASS(Arcadian_Armed_Base) {
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
            //QPATHTOR(data\suv_glass_damage.rvmat),
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

class CLASS(Arcadian_B_Minigun_Black): CLASS(Arcadian_I_Minigun_Black) {
    scope = 2;
    forceInGarage = 0;
    side = 1;
    faction = QCLASS(BLU);
    crew = QCLASS(Unit_B_Contractor);
    typicalCargo[] = {QCLASS(Unit_B_Contractor)};
};
*/
