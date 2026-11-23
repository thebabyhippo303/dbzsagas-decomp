/* TerrainMesh__DebugDrawHitEdges @ 0x801D3588 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void DebugDraw__Line(s32, s32, s32);
M2C_UNK TerrainMesh__BuildHitVertices(s32);
M2C_UNK TerrainMesh__BuildHitEdges(s32);
void TerrainMesh__DebugDrawHitEdges(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r11;
    s32 temp_r3;
    s32 temp_r4;
    s32 var_r30;
    s32 var_r31;

    if ((TerrainMesh__BuildHitVertices(arg0) != 0) && (TerrainMesh__BuildHitEdges(arg0) != 0)) {
        temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x24);
        if (temp_r0 > 0) {
            var_r30 = temp_r0;
            var_r31 = 0;
            do {
                temp_r11 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x2C);
                temp_r0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0x2C);
                temp_r3 = *(s32 *)(temp_r11 + var_r31);
                temp_r4 = M2C_FIELD((temp_r11 + var_r31), s32 *, 4);
                var_r31 += 8;
                DebugDraw__Line(temp_r0_2 + (temp_r3 * 0x18), temp_r0_2 + (temp_r4 * 0x18), arg1);
                var_r30 -= 1;
            } while (var_r30 != 0);
        }
    }
}
