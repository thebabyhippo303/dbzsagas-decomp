/* Fighter__EnableWeapon @ 0x8002B2C0 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Fighter__EnableWeapon @ 0x8002B2C0 (0x44). ProDG -O2. */
typedef struct {
    char pad[0xC8];
    void *fighter;
} FighterScript;

extern int Script__PopInt(void *script, void *context);
extern void Fighter__EnableWeaponImpl(void *fighter, int enable);

void Fighter__EnableWeapon(FighterScript *script, void *context) {
    int enable = Script__PopInt(script, context) != 0;
    Fighter__EnableWeaponImpl(script->fighter, enable);
}
