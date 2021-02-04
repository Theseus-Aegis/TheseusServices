#define MACRO_ITEM_COMMON(item) \
    dlc = QUOTE(PREFIX); \
    scope = 2; \
    scopeCurator = 2; \
    vehicleClass = "ItemsUniforms"; \
    model = "\A3\Weapons_F\DummySuitpack.p3d"; \
    displayName = CSTRING(item); \
    class TransportItems { \
        MACRO_ADDITEM(CLASS(item),1); \
    };

class Item_Base_F;
