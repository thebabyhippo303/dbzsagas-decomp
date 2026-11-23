/* DebugDraw__BoxTransformed @ 0x80186B38 (size: 0x250, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void DebugDraw__Line(s32, s32, s32);
typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
void DebugDraw__BoxTransformed(void *arg0, void *arg1, void *arg2, s32 arg3) {
    mt_vec3_f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp8;
    f32 *var_r10;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f9;
    s32 var_ctr;
    s32 var_ctr_2;

    var_ctr = 8;
    do {
        var_ctr -= 1;
    } while (var_ctr != 0);
    temp_f10 = M2C_FIELD(arg0, f32 *, 0);
    temp_f9 = M2C_FIELD(arg1, f32 *, 8);
    temp_f0 = M2C_FIELD(arg0, f32 *, 8);
    var_ctr_2 = 8;
    temp_f12 = M2C_FIELD(arg0, f32 *, 4);
    var_r10 = &sp8;
    temp_f13 = M2C_FIELD(arg1, f32 *, 0);
    temp_f11 = M2C_FIELD(arg1, f32 *, 4);
    sp8 = temp_f10;
    M2C_FIELD(&sp8, f32 *, 4) = temp_f12;
    M2C_FIELD(&sp8, f32 *, 8) = temp_f0;
    sp34 = temp_f0;
    sp48 = temp_f12;
    sp50 = temp_f10;
    sp5C = temp_f13;
    sp60 = temp_f11;
    sp64 = temp_f9;
    sp14 = temp_f13;
    sp18 = temp_f12;
    sp1C = temp_f0;
    sp20 = temp_f10;
    sp24 = temp_f11;
    sp28 = temp_f0;
    sp2C = temp_f13;
    sp30 = temp_f11;
    sp38 = temp_f10;
    sp3C = temp_f12;
    sp40 = temp_f9;
    sp44 = temp_f13;
    sp4C = temp_f9;
    sp54 = temp_f11;
    sp58 = temp_f9;
    do {
        temp_f12_2 = M2C_FIELD(var_r10, f32 *, 4);
        temp_f10_2 = M2C_FIELD(var_r10, f32 *, 0);
        temp_f13_2 = M2C_FIELD(var_r10, f32 *, 8);
        sp68.v0 = (temp_f13_2 * M2C_FIELD(arg2, f32 *, 0x20)) + ((temp_f10_2 * M2C_FIELD(arg2, f32 *, 0)) + (temp_f12_2 * M2C_FIELD(arg2, f32 *, 0x10))) + M2C_FIELD(arg2, f32 *, 0x30);
        sp68.v1 = (temp_f13_2 * M2C_FIELD(arg2, f32 *, 0x24)) + ((temp_f10_2 * M2C_FIELD(arg2, f32 *, 4)) + (temp_f12_2 * M2C_FIELD(arg2, f32 *, 0x14))) + M2C_FIELD(arg2, f32 *, 0x34);
        sp68.v2 = (temp_f13_2 * M2C_FIELD(arg2, f32 *, 0x28)) + ((temp_f10_2 * M2C_FIELD(arg2, f32 *, 8)) + (temp_f12_2 * M2C_FIELD(arg2, f32 *, 0x18))) + M2C_FIELD(arg2, f32 *, 0x38);
        *(mt_vec3_f32 *)((char *)var_r10 + 0) = sp68;
        var_r10 += 0xC;
        var_ctr_2 -= 1;
    } while (var_ctr_2 != 0);
    DebugDraw__Line((s32) &sp8, (s32) &sp14, arg3);
    DebugDraw__Line((s32) &sp14, (s32) &sp2C, arg3);
    DebugDraw__Line((s32) &sp2C, (s32) &sp20, arg3);
    DebugDraw__Line((s32) &sp20, (s32) &sp8, arg3);
    DebugDraw__Line((s32) &sp38, (s32) &sp44, arg3);
    DebugDraw__Line((s32) &sp44, (s32) &sp5C, arg3);
    DebugDraw__Line((s32) &sp5C, (s32) &sp50, arg3);
    DebugDraw__Line((s32) &sp50, (s32) &sp38, arg3);
    DebugDraw__Line((s32) &sp8, (s32) &sp38, arg3);
    DebugDraw__Line((s32) &sp14, (s32) &sp44, arg3);
    DebugDraw__Line((s32) &sp20, (s32) &sp50, arg3);
    DebugDraw__Line((s32) &sp2C, (s32) &sp5C, arg3);
}
