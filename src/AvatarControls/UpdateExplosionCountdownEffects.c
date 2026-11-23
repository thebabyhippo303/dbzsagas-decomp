/* AvatarControls__UpdateExplosionCountdownEffects @ 0x8009E8D8 (size: 0x264, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Instance__SetHolographic(void *, s32);
s32 Avatar__CreateAttacherImpl(void *, char *, s32, s32);
void Attacher__Destroy(u32);
void * Game__FindNearestEligibleAvatar(void *);
void * fn_801DCE10(void *, void *);
void fn_80251650(void *, int, int, void *, void *);
M2C_UNK fn_800A28E0(s32);
extern M2C_UNK lbl_8031E188 __attribute__((section(".data")));
extern s8 lbl_8031FEFC __attribute__((section(".data")));
extern M2C_UNK lbl_8031FF0C __attribute__((section(".data")));
extern f32 lbl_8031FF20 __attribute__((section(".data")));
extern f32 lbl_8031FF24 __attribute__((section(".data")));
extern f32 lbl_8031FF28 __attribute__((section(".data")));
extern M2C_UNK lbl_80366708 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));
extern M2C_UNK lbl_803B1DDC __attribute__((section(".data")));
extern s32 lbl_803DC5A8;
extern s32 lbl_803DC5AC;

void AvatarControls__UpdateExplosionCountdownEffects(void *arg0) {
    f32 ld_80;
    void *temp_r3_2;
    s16 ld_10;
    f32 sp18;
    s32 sp8;
    f32 temp_f31;
    void *temp_r10;
    void *temp_r11;
    void *temp_r3;
    s32 ld_40;
    char *temp_r9_2;
    void *temp_r9_3;

    temp_r3 = Game__FindNearestEligibleAvatar(M2C_FIELD(arg0, void **, 0));
    ld_80 = M2C_FIELD(arg0, f32 *, 0x80);
    temp_f31 = lbl_803A35C0 - ld_80;
    M2C_FIELD(arg0, f32 *, 0x84) = (f32) lbl_803A35C0;
    if ((temp_r3 == NULL) == 0) {
        if ((M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x84), void **, 0xF0), s16 *, 0xA) & 0xFF00) != 0x600) {
            M2C_FIELD(arg0, s32 *, 0x9C) = 0;
            fn_80251650(&lbl_803B1DDC, 0x1002D, 0, M2C_FIELD(arg0, void **, 0), NULL);
        }
        if (!(temp_f31 <= lbl_8031FF20)) {
            M2C_FIELD(arg0, s32 *, 0x9C) = 1;
            fn_80251650(&lbl_803B1DDC, 0x1002D, 0, M2C_FIELD(arg0, void **, 0), NULL);
        }
        if (!(!(!(temp_f31 <= ((f32 *)&lbl_80366708)[lbl_803DC5A8]) && ((s32) M2C_FIELD(arg0, s32 *, 0xA0) == 0)))) {
            Instance__SetHolographic(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x84), 1);
            temp_r3_2 = M2C_FIELD(arg0, void **, 0);
            sp8 = M2C_FIELD(temp_r3_2, s32 *, 0x38);
            ld_40 = M2C_FIELD(temp_r3_2, s32 *, 0x40);
            M2C_FIELD(&sp8, s32 *, 8) = ld_40;
            M2C_FIELD(&sp8, s32 *, 4) = (s32) M2C_FIELD(temp_r3_2, s32 *, 0x3c);
            sp18 = lbl_8031FF24;
            M2C_FIELD(&sp18, f32 *, 4) = (f32) lbl_8031FF24;
            M2C_FIELD(&sp18, f32 *, 8) = (f32) lbl_8031FF24;
            temp_r9_2 = M2C_FIELD(arg0, void **, 0);
            lbl_803DC5AC = Avatar__CreateAttacherImpl(temp_r9_2 + 0x684, &lbl_8031FEFC, (s32) temp_r9_2, fn_801DCE10(temp_r3_2, &lbl_8031E188));
            M2C_FIELD(arg0, s32 *, 0xA0) = 1;
            temp_r10 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0xAC);
            temp_r9_3 = M2C_FIELD(temp_r10, void **, 0xC);
            ld_10 = M2C_FIELD(temp_r9_3, u16 *, 0x10);
            M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK *), 0x14)(temp_r10 + ld_10, &lbl_8031FF0C);
        } else if (!(temp_f31 <= (((f32 *)&lbl_80366708)[lbl_803DC5A8] + lbl_8031FF28))) {
            if ((s32) lbl_803DC5AC != 0) {
                Attacher__Destroy((u32) lbl_803DC5AC);
                lbl_803DC5AC = 0;
            }
            M2C_FIELD(arg0, s32 *, 0xA0) = 0;
            Instance__SetHolographic(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x84), 0);
            temp_r11 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0xAC);
            temp_r10 = M2C_FIELD(temp_r11, void **, 0xC);
            M2C_FIELD(temp_r10, M2C_UNK (**)(void *), 0x2C)(temp_r11 + M2C_FIELD(temp_r10, s16 *, 0x28));
            lbl_803DC5A8 += 1;
        }
        fn_800A28E0((s32) arg0);
        return;
    }
    fn_80251650(&lbl_803B1DDC, 0x1002D, 0, M2C_FIELD(arg0, void **, 0), NULL);
}
