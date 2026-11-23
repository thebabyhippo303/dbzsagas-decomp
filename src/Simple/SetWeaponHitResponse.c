/* Simple__SetWeaponHitResponse @ 0x8002AB14 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__SetWeaponHitResponse @ 0x8002AB14 (0x80). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern void fn_802C809C(void *weapon, int a, int **out, int b, int c, int d, int e, int f);

void Simple__SetWeaponHitResponse(void *script, void *context) {
    void *weapon = Script__PopInt(script, context);
    int response = (int)Script__PopInt(script, context);
    int *out = 0;
    fn_802C809C(weapon, 0, &out, 0, 0, 0, 0, 0);
    if (out != 0)
        *out = response;
}
