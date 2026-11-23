/* TerrainMesh__Destroy @ 0x801D1DE4 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
M2C_UNK fn_801D1C3C(s32);
void TerrainMesh__Destroy(void *arg0, s32 arg1) {
    s32 var_r30;
    void *var_r31;

    var_r30 = 0;
    if (var_r30 < (s32) M2C_FIELD(arg0, s32 *, 0x604)) {
        var_r31 = arg0 + 4;
        do {
            var_r30 += 1;
            fn_801D1C3C((s32) var_r31);
            var_r31 += 0x30;
        } while (var_r30 < (s32) M2C_FIELD(arg0, s32 *, 0x604));
    }
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
