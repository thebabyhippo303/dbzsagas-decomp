/* TerrainQuadtree__QueryLine @ 0x801CB298 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void TerrainQuadtreeNode__QueryLine(s32, s32, s32, s32);
void TerrainQuadtree__QueryLine(char *self, s32 arg1, s32 arg2, s32 arg3) {
    s32 i;
    s32 *pp;

    i = 0;
    if (i < *(s32 *)(self + 260)) {
        pp = (s32 *)(self + 8);
        do {
            if ((**(s32 **)self & pp[-1]) != 0) {
                TerrainQuadtreeNode__QueryLine(pp[0], arg1, arg2, arg3);
            }
            i++;
            pp += 2;
        } while (i < *(s32 *)(self + 260));
    }
}
