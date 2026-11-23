/* Distort__CreateVortexBillboardImpl @ 0x8009A710 (size: 0x33C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef struct { f32 x, y, z; } Vec3;
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
s32 Mem__New(s32);
char * Mem__NewArray(s32);
void * memcpy(void *, const void *, unsigned int);
void * memmove(void *, void *, unsigned int);
void * memset(void *, int, u32);
float sqrtf(float);
M2C_UNK fn_801588CC(M2C_UNK, f32, f32);             /* extern */
s32 fn_802A0E40(void *, f32 *, s32, s32, M2C_UNK, void *, f32 *, f32 *, f32, f32, f32, f32, f32, f32, f32, f32); /* extern */
extern f32 lbl_8031FBFC __attribute__((section(".data")));
extern f32 lbl_8031FC00 __attribute__((section(".data")));
extern f32 lbl_8031FC04 __attribute__((section(".data")));
extern M2C_UNK lbl_803352D0 __attribute__((section(".data")));
extern s32 lbl_803DC560;
extern s32 lbl_803DC564;
extern f32 lbl_803DC568;
extern f32 lbl_803DC56C;
extern f32 lbl_803DC570;
extern f32 lbl_803DC574;
extern f32 lbl_803DC578;
extern f32 lbl_803DC57C;
extern f32 lbl_803DC580;
extern void *lbl_803DC5B4;
extern f32 lbl_803DD124;
extern s32 lbl_803DD128;
extern f32 lbl_803DD12C;
extern s32 lbl_803DD130;

s32 Distort__CreateVortexBillboardImpl(void *arg0, void *arg1, f32 farg0) {
    f32 arg_load;
    Vec3 vec_sp40;
    void *sp80;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp44;
    f32 sp40;
    f32 sp38;
    f32 sp34;
    s32 sp14;
    f32 *sp8;
    f32 temp_f13;
    f32 temp_f31;
    s32 temp_r26;
    s32 temp_r27;
    s32 temp_r29;
    s8 *temp_r3_3;
    s8 *temp_r4;
    u32 temp_r28;
    void *temp_r3;

    if ((s32) lbl_803DD128 == 0) {
        lbl_803DD128 = 1;
        lbl_803DD124 = farg0 * lbl_8031FBFC;
    }
    if ((s32) lbl_803DD130 == 0) {
        lbl_803DD12C = farg0;
        lbl_803DD130 = 1;
    }
    vec_sp40 = *(Vec3 *)((char *)lbl_803DC5B4 + 0xa0);
    sp34 = sp44 - M2C_FIELD(arg1, f32 *, 4);
    sp44 = sp40 - M2C_FIELD(arg1, f32 *, 0);
    sp38 = sp38 - M2C_FIELD(arg1, f32 *, 8);
    sp50 = sp44;
    sp54 = sp34;
    sp58 = sp38;
    sp34 = M2C_FIELD(&sp50, f32 *, 4);
    temp_f13 = M2C_FIELD(&sp50, f32 *, 8);
    sp38 = sp50 * sp50;
    sp60 = sp38;
    sp64 = sp34 * sp34;
    sp68 = temp_f13 * temp_f13;
    sp38 = lbl_8031FC00 / sqrtf(sp38 + M2C_FIELD(&sp60, f32 *, 4) + M2C_FIELD(&sp60, f32 *, 8));
    temp_f31 = lbl_8031FC04;
    sp70 = sp50 * sp38;
    sp78 = M2C_FIELD(&sp50, f32 *, 8) * sp38;
    sp74 = M2C_FIELD(&sp50, f32 *, 4) * sp38;
    sp50 = sp70;
    M2C_FIELD(&sp50, f32 *, 8) = sp78;
    M2C_FIELD(&sp50, f32 *, 4) = sp74;
    sp64 = sp74;
    sp68 = sp78;
    sp34 = sp50;
    sp38 = sp54;
    temp_f13 = sp58;
    sp60 = sp50;
    sp44 = lbl_8031FC00;
    M2C_FIELD(&sp44, f32 *, 4) = (f32) lbl_8031FC00;
    M2C_FIELD(&sp44, f32 *, 8) = (f32) lbl_8031FC00;
    M2C_FIELD(&sp44, f32 *, 0xC) = (f32) lbl_8031FC00;
    sp40 = lbl_8031FC00;
    M2C_FIELD(&sp40, f32 *, 4) = (f32) lbl_8031FC00;
    M2C_FIELD(&sp40, f32 *, 8) = (f32) lbl_8031FC00;
    M2C_FIELD(&sp40, f32 *, 0xC) = (f32) lbl_8031FC00;
    sp50 = lbl_8031FC00;
    M2C_FIELD(&sp50, f32 *, 4) = (f32) lbl_8031FC00;
    M2C_FIELD(&sp50, f32 *, 8) = (f32) lbl_8031FC00;
    M2C_FIELD(&sp50, f32 *, 0xC) = temp_f31;
    temp_r3 = Mem__New(0x14);
    arg_load = lbl_803DC57C;
    M2C_FIELD(temp_r3, s32 *, 0xC) = 0;
    fn_801588CC(1, lbl_803DC578, arg_load);
    sp8 = &sp50;
    sp14 = 0;
    sp38 = temp_f31;
    sp38 = temp_f31;
    sp38 = temp_f31;
    sp38 = temp_f31;
    temp_r26 = fn_802A0E40(arg1, &sp34, lbl_803DC560, lbl_803DC564, 0, temp_r3, &sp44, &sp40, lbl_803DC568, lbl_803DD124, lbl_803DD12C, lbl_803DC56C, lbl_803DC570, lbl_803DC574, lbl_803DC580, temp_f31);
    temp_r3 = Mem__New(0xC);
    temp_r29 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(temp_r3, M2C_UNK **, 8) = &lbl_803352D0;
    M2C_FIELD(temp_r3, s32 *, 4) = 1;
    sp80 = temp_r3;
    M2C_FIELD(temp_r3, s32 *, 0) = temp_r26;
    if (temp_r29 == (s32) M2C_FIELD(arg0, s32 *, 8)) {
        temp_r28 = temp_r29 * 4;
        temp_r27 = (temp_r29 + M2C_FIELD(arg0, s32 *, 0xC)) * 4;
        temp_r3_3 = Mem__NewArray(temp_r27);
        if (temp_r3_3 != NULL) {
            temp_r4 = M2C_FIELD(arg0, s8 **, 0);
            if (temp_r4 != NULL) {
                memcpy(temp_r3_3, temp_r4, temp_r28);
                temp_r4 = M2C_FIELD(arg0, s8 **, 0);
                if (temp_r4 != NULL) {
                    Mem__Delete(temp_r4);
                }
            }
            M2C_FIELD(arg0, s8 **, 0) = temp_r3_3;
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + M2C_FIELD(arg0, s32 *, 0xC));
            if ((s32) M2C_FIELD(arg0, s32 *, 0x10) != 0) {
                memset(temp_r3_3 + temp_r28, 0, temp_r27 - temp_r28);
            }
            goto block_11;
        }
    } else {
block_11:
        temp_r3_3 = M2C_FIELD(arg0, s8 **, 0);
        temp_r27 = temp_r29 * 4;
        temp_r3 = temp_r3_3 + temp_r27;
        sp14 = M2C_FIELD(arg0, s32 *, 4) - temp_r29;
        if (sp14 != 0) {
            memmove(temp_r3 + 4, temp_r3, sp14 * 4);
        }
        *(temp_r3_3 + temp_r27) = sp80;
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
    }
    return temp_r26;
}
