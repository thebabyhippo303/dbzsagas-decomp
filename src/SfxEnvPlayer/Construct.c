/* SfxEnvPlayer__Construct @ 0x8019A7FC (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef float f32; typedef unsigned int u32;
void *Sfx3DPlayer__Construct(void *, s32, u32, s32);
void fn_80199364(void *);
void fn_8019B620(void *, void *);
extern const f32 lbl_8033FB44 __attribute__((section(".data")));
extern char lbl_8033FFD0[] __attribute__((section(".data")));
void *SfxEnvPlayer__Construct(void *arg0, s32 arg1, u32 arg2, s32 arg3) {
    register s32 var_r29;
    char *var_r30;
    char *s;
    char *self = arg0;

    var_r29 = 4;
    var_r30 = self + 0x184;
    Sfx3DPlayer__Construct(arg0, arg1, arg2, arg3);
    *(char **)(self + 0x3C) = lbl_8033FFD0;
    fn_80199364(self + 0xD0);
    s = self + 0x1F4;
    *(s32 *)(s + 4) = 0;
    *(s32 *)(self + 0x1F4) = 0;
    *(s32 *)(s + 8) = 1;
    *(s32 *)(s + 12) = 0;
    *(s32 *)(self + 176) = 0;
    *(s32 *)(self + 184) = 0;
    *(s32 *)(self + 188) = 0;
    *(s32 *)(self + 180) = 0;
    *(s32 *)(self + 192) = 0;
    *(s32 *)(self + 200) = 0;
    *(f32 *)(self + 196) = lbl_8033FB44;
    *(s32 *)(self + 380) = 0;
    *(f32 *)(self + 204) = lbl_8033FB44;
    *(s32 *)(self + 384) = 0;
    do {
        fn_8019B620(arg0, var_r30);
        var_r30 += 0x1C;
        var_r29 -= 1;
    } while (var_r29 != 0);
    *(s32 *)(self + 0x204) = var_r29;
    *(s32 *)(self + 0xAC) = 1;
    *(s32 *)(self + 0x208) = var_r29;
    return arg0;
}
