/* TerrainQuadtree__QueryRect @ 0x801CB31C (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

void TerrainQuadtreeNode__QueryRect(void *, void *, void *);

void TerrainQuadtree__QueryRect(void *qt, void *a, void *b) {
    s32 i = 0;

    if (i < M2C_FIELD(qt, s32 *, 260)) {
        s32 *pp = (s32 *)((char *)qt + 8);
        do {
            void *base = M2C_FIELD(qt, void **, 0);
            if ((((s32 *)base)[0] & pp[-1]) != 0) {
                TerrainQuadtreeNode__QueryRect((void *)pp[0], a, b);
            }
            i++;
            pp += 2;
        } while (i < M2C_FIELD(qt, s32 *, 260));
    }
}
