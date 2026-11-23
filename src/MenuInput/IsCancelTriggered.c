/* MenuInput__IsCancelTriggered @ 0x8004D584 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

int MenuInput__IsEnabled(int);
void *fn_801D6674(void *, int);
extern s32 lbl_803DC3C0 __attribute__((section(".sbss")));
extern void *lbl_803DCC74 __attribute__((section(".sbss")));

s32 MenuInput__IsCancelTriggered(s32 arg0) {
    void *input;
    s32 matched;
    s32 result;

    if (MenuInput__IsEnabled(arg0) == 0) {
        return 0;
    }
    if (arg0 < 0) {
        arg0 = 0;
    }
    if (lbl_803DC3C0 == 0) {
        return 0;
    }
    result = 0;
    input = fn_801D6674(lbl_803DCC74, arg0);
    if (input == 0) {
        goto done;
    }
    matched = 0;
    if (M2C_FIELD(input, s32 *, 0x28) == 0) {
        matched = !(M2C_FIELD(input, s32 *, 0x2C) ^ 1);
    }
    if (matched == 0) {
        goto done;
    }
    matched = 0;
    if (M2C_FIELD(input, s32 *, 0x30) == 0) {
        matched = !(M2C_FIELD(input, s32 *, 0x34) ^ 1);
    }
    result = 1;
    if (matched != 0) {
        goto done;
    }
    return result;
done:
    return 0;
}
