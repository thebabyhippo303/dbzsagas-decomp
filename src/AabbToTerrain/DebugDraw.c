/* AabbToTerrain__DebugDraw @ 0x801B061C (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AabbToTerrain__DebugDraw @ 0x801B061C (0x44). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void AabbToTerrain__Test(void *);
void TerrainMesh__DebugDrawHitEdges(void *, s32);
void AabbToTerrain__DebugDraw(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x2C) & 1) == 0) {
        AabbToTerrain__Test(arg0);
    }
    TerrainMesh__DebugDrawHitEdges((char *)arg0 + 0x34, 1);
}
