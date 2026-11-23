/* Fighter__WeaponSelected @ 0x8002BBB8 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Fighter__WeaponSelected @ 0x8002BBB8 (0x58). ProDG -O2. */
typedef struct FighterInner {
    char pad[0x5E8];
    char inventory;
} FighterInner;

typedef struct FighterScript {
    char pad[0xC8];
    FighterInner *inner;
} FighterScript;

extern int WeaponInventory__GetSelected(void *inventory, int which);
extern void Script__PushInt(void *script, void *context, int value);

void Fighter__WeaponSelected(FighterScript *script, void *context) {
    Script__PushInt(script, context,
        WeaponInventory__GetSelected(&script->inner->inventory, 1) != 0);
}
