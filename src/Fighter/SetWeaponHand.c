/* Fighter__SetWeaponHand @ 0x8002BC10 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Fighter__SetWeaponHand @ 0x8002BC10 (0x44). ProDG -O2. */
typedef struct {
    char pad[0xC8];
    void *fighter;
} FighterScript;

extern int Script__PopInt(void *script, void *context);
extern void Fighter__SetWeaponHandImpl(void *fighter, int hand);

void Fighter__SetWeaponHand(FighterScript *script, void *context) {
    int hand = Script__PopInt(script, context) != 0;
    Fighter__SetWeaponHandImpl(script->fighter, hand);
}
