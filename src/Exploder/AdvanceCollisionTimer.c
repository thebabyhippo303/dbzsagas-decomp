/* Exploder__AdvanceCollisionTimer @ 0x800EF330 (size: 0x1AC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Actor__ToProtagonistCastImpl(void *);
void Sound__Play3D(s32, s32, s32, s32);
void * fn_8021CDC8(void *, void *, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32, s32, s32);
void fn_802CB514(void *);
s32 Exploder__TrySpawnPickup(void *);               /* extern */
M2C_UNK fn_802C6D00(void *, f32 *);                 /* extern */
M2C_UNK fn_802C6FBC(void *, f32 *, M2C_UNK, f32, f32); /* extern */
extern f32 lbl_80323B5C __attribute__((section(".data")));
extern f32 lbl_80323B60;
extern f32 lbl_80323B64 __attribute__((section(".data")));
extern f32 lbl_80323B68 __attribute__((section(".data")));
extern f32 lbl_803A35BC __attribute__((section(".data")));

void Exploder__AdvanceCollisionTimer(void *arg0) {
    f32 sp10;
    s32 spC;
    f32 temp_f0;
    f32 temp_f31;
    void *temp_r3;
    void *temp_r28;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x6D8) != 0) {
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x6E4);
        M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */);
        if (0 == 0) {
            M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */);
            if (0 != 0) {
                M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0gt */);
                if (0 == 0) {
                    M2C_FIELD(arg0, volatile f32 *, 0x6E4) = (f32) (temp_f0 + lbl_803A35BC);
                    M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */);
                    if (0 == 0) {
block_7:
                        M2C_FIELD(arg0, volatile f32 *, 0x6E4) = lbl_80323B5C;
                    }
                }
            } else {
                M2C_FIELD(arg0, volatile f32 *, 0x6E4) = (f32) (temp_f0 - lbl_803A35BC);
                M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0gt */);
                if (0 == 0) {
                    goto block_7;
                }
            }
            if (M2C_FIELD(arg0, f32 *, 0x6E4) == lbl_80323B5C) {
                M2C_FIELD(arg0, volatile s32 *, 0x6DC) = 1;
            }
        }
        if (((s32) M2C_FIELD(arg0, volatile s32 *, 0x6DC) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x700) == 0)) {
            temp_r3 = Exploder__TrySpawnPickup(arg0);
            if (temp_r3 == 0) {
                M2C_FIELD(arg0, volatile s32 *, 0x6DC) = temp_r3;
                M2C_FIELD(arg0, s32 *, 0x6C4) = temp_r3;
                M2C_FIELD(arg0, s32 *, 0x710) = 1;
                Actor__ToProtagonistCastImpl(arg0);
                temp_r28 = arg0 + 0x38;
                fn_802CB514(arg0);
                sp10 = lbl_80323B60;
                M2C_FIELD(&sp10, f32 *, 4) = (f32) lbl_80323B60;
                M2C_FIELD(&sp10, f32 *, 8) = (f32) lbl_80323B60;
                fn_802C6D00(arg0, &sp10);
                temp_f31 = lbl_80323B64;
                sp10 = temp_f31;
                M2C_FIELD(&sp10, f32 *, 4) = temp_f31;
                M2C_FIELD(&sp10, f32 *, 8) = temp_f31;
                fn_802C6FBC(arg0, &sp10, 0, lbl_80323B68, lbl_80323B5C);
                spC = temp_r3;
                spC = temp_r3;
                fn_8021CDC8(arg0 + 0x602, temp_r28, 0, 0, 0, 0, 0, -1, lbl_80323B5C, temp_f31, temp_f31, temp_f31, M2C_ERROR(/* Unable to find stack arg 0x0 in block */), M2C_ERROR(/* Unable to find stack arg 0x4 in block */));
                Sound__Play3D((s32) (arg0 + 0x5D0), (s32) temp_r28, 0, 0);
            }
        }
    }
}
