/* AI__ChooseQuickRecoveryStateByChance @ 0x800626F4 (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 Rand__RangeFloat(f32, f32, s32);
void AI__SetAttackSuppressed(void *, s32);
void AI__SetState(void *, s32);
void * Actor__GetStateHandler(u32);
extern f32 lbl_8031E47C __attribute__((section(".data")));
extern f32 lbl_8031E480 __attribute__((section(".data")));
extern f32 lbl_8031E484 __attribute__((section(".data")));
extern f32 lbl_8031E488 __attribute__((section(".data")));
extern f32 lbl_8031E48C __attribute__((section(".data")));
extern M2C_UNK lbl_803DD634;

void AI__ChooseQuickRecoveryStateByChance(void *arg0) {
    f32 temp_f1;
    s32 var_r0;

    temp_f1 = Rand__RangeFloat(lbl_8031E47C, lbl_8031E480, (s32) &lbl_803DD634);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x74) != 0x12) && ((s32) M2C_FIELD(arg0, s32 *, 0x53C) == 0)) {
        if (!(temp_f1 >= lbl_8031E484)) {
            M2C_FIELD(arg0, s32 *, 0x74) = 0x76;
            AI__SetAttackSuppressed(arg0, 1);
        } else {
            if (!(temp_f1 >= lbl_8031E488)) {
                var_r0 = 0x2D;
                goto block_9;
            }
            if (!(temp_f1 >= lbl_8031E48C)) {
                M2C_FIELD(arg0, s32 *, 0x4BC) = 1;
                M2C_FIELD(arg0, s32 *, 0x74) = 0x12;
            } else {
                var_r0 = 0x86;
block_9:
                M2C_FIELD(arg0, s32 *, 0x74) = var_r0;
            }
        }
        AI__SetState(arg0, 0);
        M2C_FIELD(arg0, void **, 0x388) = Actor__GetStateHandler((u32) M2C_FIELD(arg0, s32 *, 0x74));
        M2C_FIELD(arg0, s32 *, 0x78) = (s32) M2C_FIELD(arg0, s32 *, 0x74);
    }
}
