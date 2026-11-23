/* Simple__HandleEvent @ 0x802CB62C (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
M2C_UNK AnimScript__CallActorLabel(s32, s32, s32, s32, s32);
extern s32 lbl_803DCCAC;
extern s32 lbl_803DCF34;
void Simple__HandleEvent(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0; s32 temp_r4; void *temp_r9;
    if (((s32) lbl_803DCCAC != 0) && ((s32) (arg1 & lbl_803DCF34) == (s32) lbl_803DCCAC)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x380);
        if ((temp_r0 != 0) && (arg3 == temp_r0)) {
            M2C_FIELD(arg0, s32 *, 0x380) = M2C_FIELD(arg0, s32 *, 0x28) = M2C_FIELD(arg0, s32 *, 0x37C) = 0;
        }
    }
    temp_r9 = M2C_FIELD(arg0, void **, 0x84);
    if ((s32) M2C_FIELD(temp_r9, s32 *, 0xFC) != 0) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x378);
        if (temp_r4 >= 0) {
            AnimScript__CallActorLabel((s32) temp_r9, temp_r4, arg1, arg2, arg3);
        }
    }
}
