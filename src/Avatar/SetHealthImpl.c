/* Avatar__SetHealthImpl @ 0x800925B4 (size: 0x1F4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Game__IsPendulumModeImpl(s32);
void DisplayInfo__ShowEntry(void *, int, int, int, float);
extern f32 lbl_8031F8A0 __attribute__((section(".data")));
extern f32 lbl_8031F8A4 __attribute__((section(".data")));
extern f32 lbl_8031F8A8 __attribute__((section(".data")));
extern s32 lbl_803DC368;
extern void *lbl_803DC3A0;
extern void *lbl_803DC3C0;

void Avatar__SetHealthImpl(void *arg0, f32 farg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f13;
    void *temp_r9;

    if ((M2C_FIELD(arg0, f32 *, 0x2B4) == lbl_8031F8A0) || !(farg0 < M2C_FIELD(arg0, f32 *, 0x288))) {
        M2C_FIELD(arg0, f32 *, 0x288) = farg0;
        if (!(farg0 >= M2C_FIELD(arg0, f32 *, 0x28C)) && ((s32) M2C_FIELD(arg0, s32 *, 0x7E4) != 0) && ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) == 1) && (Game__IsPendulumModeImpl(lbl_803DC368 + 0x17C) == 0)) {
            DisplayInfo__ShowEntry(lbl_803DC3A0, 2, 3, 0, lbl_8031F8A4);
        }
        if (((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x19D8), s32 *, 0xC) == 0x20) && ((s32) M2C_FIELD(lbl_803DC3C0, s32 *, 0x2148) == 0) && ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) == 0x15) && (Game__IsPendulumModeImpl(lbl_803DC368 + 0x17C) == 0)) {
            temp_f12 = M2C_FIELD(arg0, f32 *, 0x28C) * M2C_FIELD(lbl_803DC3C0, f32 *, 0x20C0);
            if (!(M2C_FIELD(arg0, f32 *, 0x288) >= temp_f12) && ((s32) M2C_FIELD(arg0, s32 *, 0x2D4) != 0)) {
                M2C_FIELD(arg0, f32 *, 0x288) = temp_f12;
            }
        }
        if (((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x19D8), s32 *, 0xC) == 5) && ((s32) M2C_FIELD(lbl_803DC3C0, s32 *, 0x2148) == 0) && ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) == 4) && (Game__IsPendulumModeImpl(lbl_803DC368 + 0x17C) == 0)) {
            temp_f12_2 = M2C_FIELD(arg0, f32 *, 0x28C) * M2C_FIELD(lbl_803DC3C0, f32 *, 0x20C4);
            if (!(M2C_FIELD(arg0, f32 *, 0x288) >= temp_f12_2) && ((s32) M2C_FIELD(arg0, s32 *, 0x2D4) != 0)) {
                M2C_FIELD(arg0, f32 *, 0x288) = temp_f12_2;
            }
        }
        temp_f13 = M2C_FIELD(arg0, f32 *, 0x288);
        if (!(temp_f13 >= lbl_8031F8A8)) {
            farg0 = lbl_8031F8A0;
            M2C_FIELD(arg0, f32 *, 0x288) = farg0;
            if ((s32) M2C_FIELD(arg0, s32 *, 0x7E4) != 0) {
                temp_r9 = M2C_FIELD(arg0, void **, 0x34);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x174)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x170));
            }
        } else {
            temp_f0 = M2C_FIELD(arg0, f32 *, 0x28C);
            if (!(temp_f13 <= temp_f0)) {
                M2C_FIELD(arg0, f32 *, 0x288) = temp_f0;
            }
        }
    }
}
