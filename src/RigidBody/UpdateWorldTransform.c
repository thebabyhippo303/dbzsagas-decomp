/* RigidBody__UpdateWorldTransform @ 0x801A3B20 (size: 0x19C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
M2C_UNK Matrix3__Orthonormalize(s32);
M2C_UNK CActor__EndFrame(s32);
void RigidBody__UpdateWorldTransform(void *arg0) {
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f9;
    s32 temp_r29;
    void *temp_r9;
    temp_r29 = arg0 + 0x230;
    Matrix3__Orthonormalize(temp_r29);
    temp_f9 = M2C_FIELD(arg0, f32 *, 0x20C);
    temp_r9 = arg0 + 0x44;
    temp_f10 = M2C_FIELD(arg0, f32 *, 0x200);
    temp_f11 = M2C_FIELD(arg0, f32 *, 0x218);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) ((temp_f11 * M2C_FIELD(temp_r29, f32 *, 0x18)) + ((temp_f10 * M2C_FIELD(arg0, f32 *, 0x230)) + (temp_f9 * M2C_FIELD(temp_r29, f32 *, 0xC))));
    M2C_FIELD(temp_r9, f32 *, 4) = (f32) ((temp_f11 * M2C_FIELD(temp_r29, f32 *, 0x1C)) + ((temp_f10 * M2C_FIELD(temp_r29, f32 *, 4)) + (temp_f9 * M2C_FIELD(temp_r29, f32 *, 0x10))));
    M2C_FIELD(temp_r9, f32 *, 8) = (f32) ((M2C_FIELD(arg0, f32 *, 0x218) * M2C_FIELD(temp_r29, f32 *, 0x20)) + ((M2C_FIELD(arg0, f32 *, 0x200) * M2C_FIELD(temp_r29, f32 *, 8)) + (M2C_FIELD(arg0, f32 *, 0x20C) * M2C_FIELD(temp_r29, f32 *, 0x14))));
    M2C_FIELD(temp_r9, f32 *, 0xC) = (f32) ((M2C_FIELD(arg0, f32 *, 0x21C) * M2C_FIELD(temp_r29, f32 *, 0x18)) + ((M2C_FIELD(arg0, f32 *, 0x204) * M2C_FIELD(arg0, f32 *, 0x230)) + (M2C_FIELD(arg0, f32 *, 0x210) * M2C_FIELD(temp_r29, f32 *, 0xC))));
    M2C_FIELD(temp_r9, f32 *, 0x10) = (f32) ((M2C_FIELD(arg0, f32 *, 0x21C) * M2C_FIELD(temp_r29, f32 *, 0x1C)) + ((M2C_FIELD(arg0, f32 *, 0x204) * M2C_FIELD(temp_r29, f32 *, 4)) + (M2C_FIELD(arg0, f32 *, 0x210) * M2C_FIELD(temp_r29, f32 *, 0x10))));
    M2C_FIELD(temp_r9, f32 *, 0x14) = (f32) ((M2C_FIELD(arg0, f32 *, 0x21C) * M2C_FIELD(temp_r29, f32 *, 0x20)) + ((M2C_FIELD(arg0, f32 *, 0x204) * M2C_FIELD(temp_r29, f32 *, 8)) + (M2C_FIELD(arg0, f32 *, 0x210) * M2C_FIELD(temp_r29, f32 *, 0x14))));
    M2C_FIELD(temp_r9, f32 *, 0x18) = (f32) ((M2C_FIELD(arg0, f32 *, 0x220) * M2C_FIELD(temp_r29, f32 *, 0x18)) + ((M2C_FIELD(arg0, f32 *, 0x208) * M2C_FIELD(arg0, f32 *, 0x230)) + (M2C_FIELD(arg0, f32 *, 0x214) * M2C_FIELD(temp_r29, f32 *, 0xC))));
    M2C_FIELD(temp_r9, f32 *, 0x1C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x220) * M2C_FIELD(temp_r29, f32 *, 0x1C)) + ((M2C_FIELD(arg0, f32 *, 0x208) * M2C_FIELD(temp_r29, f32 *, 4)) + (M2C_FIELD(arg0, f32 *, 0x214) * M2C_FIELD(temp_r29, f32 *, 0x10))));
    M2C_FIELD(temp_r9, f32 *, 0x20) = (f32) (((M2C_FIELD(arg0, f32 *, 0x208) * M2C_FIELD(temp_r29, f32 *, 8)) + (M2C_FIELD(arg0, f32 *, 0x214) * M2C_FIELD(temp_r29, f32 *, 0x14))) + (M2C_FIELD(arg0, f32 *, 0x220) * M2C_FIELD(temp_r29, f32 *, 0x20)));
    CActor__EndFrame((s32) arg0);
}
