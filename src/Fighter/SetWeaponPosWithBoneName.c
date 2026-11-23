/* Fighter__SetWeaponPosWithBoneName @ 0x8002BC9C (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Fighter__SetWeaponPosWithBoneName @ 0x8002BC9C (0x60). ProDG -O2. */
typedef struct {
    char pad[0xC8];
    char *fighter;
} FighterScript;

extern char *Script__PopString(void *script, void *context, int *ok);
extern void Fighter__SetWeaponPosWithBoneNameImpl(char *fighter, const char *bone_name);
extern void fn_80184430(char *text);

void Fighter__SetWeaponPosWithBoneName(FighterScript *script, void *context) {
    int ok;
    char *fighter = script->fighter;
    char *text = Script__PopString(script, context, &ok);
    Fighter__SetWeaponPosWithBoneNameImpl(fighter, text);
    if (ok != 0 && text != 0)
        fn_80184430(text);
}
