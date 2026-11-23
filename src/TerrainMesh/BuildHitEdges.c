/* TerrainMesh__BuildHitEdges @ 0x801D323C (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK TerrainMesh__AddUniqueHitEdge(s32, s32, s32);
s32 TerrainMesh__BuildHitEdges(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r28;
    s32 var_r29;
    void *temp_r30;
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r9 == NULL) {
        return 0;
    }
    if ((s32) M2C_FIELD(temp_r9, s32 *, 0x24) <= 0) {
        temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x24);
        if (temp_r0 > 0) {
            var_r29 = temp_r0;
            var_r28 = 0;
            do {
                temp_r30 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x2C) + var_r28;
                temp_r4 = M2C_FIELD(temp_r30, s32 *, 0x34);
                var_r28 += 0x4C;
                M2C_FIELD(temp_r30, s32 *, 0x40) = TerrainMesh__AddUniqueHitEdge((s32) arg0, temp_r4, M2C_FIELD(temp_r30, s32 *, 0x38));
                M2C_FIELD(temp_r30, s32 *, 0x44) = TerrainMesh__AddUniqueHitEdge((s32) arg0, M2C_FIELD(temp_r30, s32 *, 0x38), M2C_FIELD(temp_r30, s32 *, 0x3C));
                M2C_FIELD(temp_r30, s32 *, 0x48) = TerrainMesh__AddUniqueHitEdge((s32) arg0, M2C_FIELD(temp_r30, s32 *, 0x3C), M2C_FIELD(temp_r30, s32 *, 0x34));
                var_r29 -= 1;
            } while (var_r29 != 0);
        }
    }
    return 1;
}
