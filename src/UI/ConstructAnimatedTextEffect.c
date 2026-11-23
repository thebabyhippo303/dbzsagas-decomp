/* UI__ConstructAnimatedTextEffect @ 0x80113630 (size: 0x45C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
s32 Rand__RangeInt(void *, s32, s32);
void Sphere__AddChild(void *, void *);
s32 Mem__New(s32);
char * Mem__NewArray(s32);
void * fn_8026B590(void *);
void fn_8026C5A0(void *, float, float);
void fn_8026C634(void *, float, float);
void fn_8026C6F8(void *, int);
void fn_8026C7F8(void *, f32, f32, f32, f32);
f32 fn_8026D750(void *);
void * memcpy(void *, const void *, unsigned int);
void * memmove(void *, void *, unsigned int);
void * memset(void *, int, u32);
int strlen(const char *);
M2C_UNK fn_8026C2E4(s32, s32, s32, void *, s32, s32);
M2C_UNK fn_8026D4A4(s32);
extern f32 lbl_803266A4 __attribute__((section(".data")));
extern f32 lbl_803266A8 __attribute__((section(".data")));
extern f32 lbl_803266AC __attribute__((section(".data")));
extern f32 lbl_803266B0 __attribute__((section(".data")));
extern f32 lbl_803266B4 __attribute__((section(".data")));
extern f32 lbl_803266B8 __attribute__((section(".data")));
extern f32 lbl_803266BC __attribute__((section(".data")));
extern f32 lbl_803266C0 __attribute__((section(".data")));
extern M2C_UNK lbl_803339D8 __attribute__((section(".data")));
extern M2C_UNK lbl_8036BCAC __attribute__((section(".data")));
extern void *lbl_803DC3B4;
extern M2C_UNK lbl_803DD634 __attribute__((section(".data")));

void *UI__ConstructAnimatedTextEffect(s32 arg0, void *arg1) {
    s16 ld_2A8;
    void *sp8;
    M2C_UNK (*temp_r9_7)(void *, s32, s32, M2C_UNK, M2C_UNK);
    f32 temp_f30;
    f32 temp_f31;
    s32 temp_r0;
    s32 temp_r26;
    s32 temp_r28;
    s32 temp_r29;
    s32 temp_r29_2;
    s32 var_r24;
    s8 *temp_r31_3;
    s8 *temp_r3;
    s8 *temp_r3_3;
    s8 *temp_r3_4;
    s8 *temp_r4;
    u32 temp_r31_2;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r24;
    void *temp_r25;
    void *temp_r31;
    void *temp_r3_2;
    void *temp_r3_5;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_8;

    temp_r25 = arg0 + 0x6C;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_803339D8;
    temp_r24 = arg0 + 0x20C;
    fn_8026B590(temp_r25);
    temp_r31 = arg0 + 0x3AC;
    fn_8026B590(temp_r24);
    M2C_FIELD(arg0, s8 **, 0x3AC) = Mem__NewArray(0x20);
    M2C_FIELD(temp_r31, s32 *, 0xC) = 8;
    M2C_FIELD(temp_r31, s32 *, 8) = 8;
    M2C_FIELD(temp_r31, s32 *, 4) = 0;
    M2C_FIELD(temp_r31, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r31, f32 *, 0x14) = 0;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_803266A4;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_803266A4;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_803266A4;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_803266A4;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_803266A4;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_803266A4;
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) lbl_803266A4;
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) lbl_803266A4;
    M2C_FIELD(arg0, s32 *, 4) = 1;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, void **, 0x68) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    temp_r9 = M2C_FIELD(arg1, void **, 0x19C);
    ld_2A8 = M2C_FIELD(temp_r9, s16 *, 0x2A8);
    M2C_FIELD(arg0, f32 *, 0x54) = M2C_FIELD(temp_r9, f32 (**)(void *), 0x2AC)(arg1 + ld_2A8);
    temp_r11 = M2C_FIELD(arg0, void **, 0x68);
    temp_r9_2 = M2C_FIELD(temp_r11, void **, 0x19C);
    M2C_FIELD(arg0, f32 *, 0x58) = M2C_FIELD(temp_r9_2, f32 (**)(void *), 0x2B4)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x2B0));
    temp_r11_2 = M2C_FIELD(arg0, void **, 0x68);
    temp_r9_3 = M2C_FIELD(temp_r11_2, void **, 0x19C);
    M2C_FIELD(arg0, f32 *, 0x5C) = M2C_FIELD(temp_r9_3, f32 (**)(void *), 0x2BC)(temp_r11_2 + M2C_FIELD(temp_r9_3, s16 *, 0x2B8));
    temp_r11_3 = M2C_FIELD(arg0, void **, 0x68);
    temp_r9_4 = M2C_FIELD(temp_r11_3, void **, 0x19C);
    temp_r29 = strlen(M2C_FIELD(temp_r9_4, s8 *(**)(void *), 0x3AC)(temp_r11_3 + M2C_FIELD(temp_r9_4, s16 *, 0x3A8)));
    temp_r3 = M2C_FIELD(arg0, s8 **, 0x3AC);
    sp8 = NULL;
    if (temp_r3 != NULL) {
        Mem__Delete(temp_r3);
    }
    M2C_FIELD(temp_r31, s32 *, 4) = 0;
    M2C_FIELD(temp_r31, s32 *, 8) = 0;
    M2C_FIELD(arg0, s8 **, 0x3AC) = NULL;
    M2C_FIELD(temp_r31, s32 *, 4) = 0;
    if (temp_r29 > 0) {
        var_r24 = temp_r29;
        do {
            temp_r3_2 = fn_8026B590(Mem__New(0x1A0));
            sp8 = temp_r3_2;
            temp_r9_5 = M2C_FIELD(temp_r3_2, void **, 0x19C);
            M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *), 0x10C)(temp_r3_2 + M2C_FIELD(temp_r9_5, s16 *, 0x108));
            temp_r9_6 = M2C_FIELD(sp8, void **, 0x19C);
            temp_r9_7 = M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, void *), 0x6C);
            temp_r9_7(sp8 + M2C_FIELD(temp_r9_6, s16 *, 0x68), M2C_FIELD(lbl_803DC3B4, s32 *, 0x2C), *(&lbl_8036BCAC + (Rand__RangeInt(&lbl_803DD634, 0, 7) * 4)), 0, 1);
            temp_r28 = M2C_FIELD(temp_r31, s32 *, 4);
            if (temp_r28 == (s32) M2C_FIELD(temp_r31, s32 *, 8)) {
                temp_r31_2 = temp_r28 * 4;
                temp_r26 = (temp_r28 + M2C_FIELD(temp_r31, s32 *, 0xC)) * 4;
                temp_r3_3 = Mem__NewArray(temp_r26);
                if (temp_r3_3 != NULL) {
                    temp_r4 = M2C_FIELD(arg0, s8 **, 0x3AC);
                    if (temp_r4 != NULL) {
                        memcpy(temp_r3_3, temp_r4, temp_r31_2);
                        temp_r3_4 = M2C_FIELD(arg0, s8 **, 0x3AC);
                        if (temp_r3_4 != NULL) {
                            Mem__Delete(temp_r3_4);
                        }
                    }
                    M2C_FIELD(arg0, s8 **, 0x3AC) = temp_r3_3;
                    M2C_FIELD(temp_r31, s32 *, 8) = (s32) (M2C_FIELD(temp_r31, s32 *, 8) + M2C_FIELD(temp_r31, s32 *, 0xC));
                    if ((s32) M2C_FIELD(temp_r31, s32 *, 0x10) != 0) {
                        memset(temp_r3_3 + temp_r31_2, 0, temp_r26 - temp_r31_2);
                    }
                    goto block_11;
                }
            } else {
block_11:
                temp_r31_3 = M2C_FIELD(arg0, s8 **, 0x3AC);
                temp_r29_2 = temp_r28 << 2;
                temp_r3_5 = temp_r31_3 + temp_r29_2;
                temp_r0 = M2C_FIELD(temp_r31, s32 *, 4) - temp_r28;
                if (temp_r0 != 0) {
                    memmove(temp_r3_5 + 4, temp_r3_5, temp_r0 * 4);
                }
                *(temp_r31_3 + temp_r29_2) = sp8;
                M2C_FIELD(temp_r31, s32 *, 4) = (s32) (M2C_FIELD(temp_r31, s32 *, 4) + 1);
            }
            var_r24 -= 1;
        } while (var_r24 != 0);
    }
    fn_8026C2E4((s32) temp_r25, M2C_FIELD(lbl_803DC3B4, s32 *, 0x2C), 0, 0, 1, 1);
    temp_r31 = M2C_FIELD(arg0, void **, 0x68);
    temp_r9_8 = M2C_FIELD(temp_r31, void **, 0x19C);
    fn_8026C634(temp_r25, lbl_803266A8, M2C_FIELD(temp_r9_8, f32 (**)(void *), 0x3BC)(temp_r31 + M2C_FIELD(temp_r9_8, s16 *, 0x3B8)));
    fn_8026C7F8(temp_r25, lbl_803266AC, lbl_803266AC, lbl_803266AC, lbl_803266B0);
    fn_8026C5A0(temp_r25, lbl_803266B4, lbl_803266B4);
    fn_8026C6F8(temp_r25, 0x1F4);
    fn_8026D4A4((s32) temp_r25);
    fn_8026C2E4((s32) temp_r24, M2C_FIELD(lbl_803DC3B4, s32 *, 0x2C), 1, 0, 1, 1);
    fn_8026C7F8(temp_r24, lbl_803266AC, lbl_803266AC, lbl_803266AC, lbl_803266AC);
    fn_8026C5A0(temp_r24, lbl_803266B4, lbl_803266B4);
    temp_f30 = lbl_803266B4;
    temp_f31 = fn_8026D750(temp_r25) * temp_f30;
    fn_8026C634(temp_r24, temp_f31, fn_8026D750(temp_r25) * temp_f30);
    fn_8026D4A4((s32) temp_r24);
    Sphere__AddChild(temp_r25, temp_r24);
    M2C_FIELD(arg0, f32 *, 0x2C) = temp_f30;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_803266B8;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_803266A4;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_803266BC;
    M2C_FIELD(arg0, s32 *, 0x40) = 1;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) lbl_803266C0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) lbl_803266C0;
    return arg0;
}
