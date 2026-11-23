/* SpatialGrid__AddToCellList @ 0x8025FD50 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void SpatialGrid__AddToCellList(void *arg0, void *arg1) {
    s32 i;

    for (i = 0; i < M2C_FIELD(arg0, s32 *, 4); i++) {
        if (M2C_FIELD(arg0, void ***, 0)[i] == NULL) {
            M2C_FIELD(arg0, void ***, 0)[i] = arg1;
            return;
        }
    }
}
