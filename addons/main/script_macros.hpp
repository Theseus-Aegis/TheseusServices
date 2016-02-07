// Internal
#define DOUBLES(var1,var2) ##var1##_##var2
#define TRIPLES(var1,var2,var3) ##var1##_##var2##_##var3
#define ADDON DOUBLES(PREFIX,COMPONENT)

// Main
#define VERSION_CONFIG version = VERSION; versionStr = QUOTE(VERSION); versionAr[] = {VERSION_AR}
#define QUOTE(var1) #var1

// Path
#define PATHTOF_SYS(var1,var2,var3) \MAINPREFIX\##var1\SUBPREFIX\##var2\##var3
#define PATHTOF(var1) PATHTOF_SYS(PREFIX,COMPONENT,var1)
#define PATHTOEF(var1,var2) PATHTOF_SYS(PREFIX,var1,var2)
#define QPATHTOF(var1) QUOTE(PATHTOF(var1))
#define QPATHTOEF(var1,var2) QUOTE(PATHTOEF(var1,var2))

// Class
#define CLASS(var1) DOUBLES(PREFIX,var1)
#define QCLASS(var1) QUOTE(DOUBLES(PREFIX,var1))

// Stringtable
#define CSTRING(var1) QUOTE(TRIPLES($STR,ADDON,var1))
#define ECSTRING(var1,var2) QUOTE(TRIPLES($STR,DOUBLES(PREFIX,var1),var2))

// Items
#define ITEMS_2(var) #var, #var
#define ITEMS_3(var) #var, #var, #var
#define ITEMS_4(var) #var, #var, #var, #var
#define ITEMS_5(var) #var, #var, #var, #var, #var
#define ITEMS_6(var) #var, #var, #var, #var, #var, #var
#define ITEMS_7(var) #var, #var, #var, #var, #var, #var, #var
#define ITEMS_8(var) #var, #var, #var, #var, #var, #var, #var, #var
#define ITEMS_9(var) #var, #var, #var, #var, #var, #var, #var, #var, #var
#define ITEMS_10(var) #var, #var, #var, #var, #var, #var, #var, #var, #var, #var
#define ITEMS_11(var) #var, #var, #var, #var, #var, #var, #var, #var, #var, #var, #var
#define ITEMS_12(var) #var, #var, #var, #var, #var, #var, #var, #var, #var, #var, #var, #var
