// Naming pattern: SleeveType_Camo
class CLASS(Uniform_Combat_LS_AUSCAM): CLASS(Uniform_Base) {
    scope = 2;
    author = "GilleeDoo, Mike";
    displayName = CSTRING(Uniform_Combat_LS_AUSCAM);
    picture = QPATHTOF(UI\uniform_combat_ls_auscam_ca.paa);

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_Combat_LS_AUSCAM);
    };
};
