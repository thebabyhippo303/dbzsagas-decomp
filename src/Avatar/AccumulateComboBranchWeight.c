/* Avatar__AccumulateComboBranchWeight @ 0x80033858 (size: 0x168, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef short s16; typedef unsigned short u16; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef int s32; typedef unsigned int u32; typedef float f32;
extern s32 ComboData__GetHighestEquippedWeaponSlot(s32);
extern u8 *ComboData__ResolveMoveRecord(s32, s32, s32);
extern f32 lbl_80311868 __attribute__((section(".data")));
extern f32 lbl_8031186C __attribute__((section(".data")));
void Avatar__AccumulateComboBranchWeight(s32 arg0, u8 *arg1, s32 arg2, f32 w, f32 *arg3);

void Avatar__AccumulateComboBranchWeight(s32 arg0, u8 *arg1, s32 arg2, f32 w, f32 *arg3) {
    u8 t0;
    s8 t1;
    u8 *rec;
    t0 = arg1[1];
    t1 = arg1[0];
    if ((s8)t0 > 0) {
        rec = ComboData__ResolveMoveRecord(0, arg2, (s32)(s8)t0);
        if ((rec[2] & 7) <= ComboData__GetHighestEquippedWeaponSlot(arg0)) {
            if (arg1[2] & 0x10) {
                Avatar__AccumulateComboBranchWeight(arg0, rec, arg2, w + lbl_80311868, arg3);
            } else {
                Avatar__AccumulateComboBranchWeight(arg0, rec, arg2, w + lbl_8031186C, arg3);
            }
        }
    }
    if (t1 > 0) {
        rec = ComboData__ResolveMoveRecord(0, arg2, (s32)t1);
        if ((rec[2] & 7) <= ComboData__GetHighestEquippedWeaponSlot(arg0)) {
            if (arg1[2] & 0x10) {
                Avatar__AccumulateComboBranchWeight(arg0, rec, arg2, w + lbl_80311868, arg3);
            } else {
                Avatar__AccumulateComboBranchWeight(arg0, rec, arg2, w + lbl_8031186C, arg3);
            }
        }
    }
    if (!(w <= *arg3)) {
        *arg3 = w;
    }
}
