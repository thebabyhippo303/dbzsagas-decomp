/* Mover__GetCollisionMaskForActor @ 0x802B995C (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern s32 lbl_803DD198;
extern s32 lbl_803DE610;
extern s32 lbl_803DE614;

s32 Mover__GetCollisionMaskForActor(void *arg0, void *arg1) {
    s32 temp_r11;
    s32 var_r10;

    temp_r11 = M2C_FIELD(arg0, s32 *, 0x12C);
    if (temp_r11 & lbl_803DE610) {
        return temp_r11;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x518) == 0) {
        return temp_r11 | lbl_803DE614;
    }
    var_r10 = 1;
    if (!(M2C_FIELD(arg1, s32 *, 0x10) & lbl_803DD198)) {
        var_r10 = 0;
    }
    if (var_r10 != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x52C) != 0) {
            return (temp_r11 & ~lbl_803DE614) | lbl_803DE610;
        }
        return temp_r11 | lbl_803DE614;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x4CC) != 0) {
        return temp_r11 | lbl_803DE614;
    }
    return temp_r11;
}
