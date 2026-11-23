/* RenderInstance__FreeInstanceData @ 0x8020374C (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 memFree(void *);

s32 RenderInstance__FreeInstanceData(void *arg0) {
    void *ptr = M2C_FIELD(arg0, void **, 12);
    s32 v1;
    s32 v2;

    if (ptr != NULL) {
        v1 = memFree(M2C_FIELD(ptr, void **, 20));
        v2 = memFree(M2C_FIELD(ptr, void **, 16));
        v1 = (v1 != 0) & (v2 != 0);
        v2 = memFree(ptr);
        v1 = (v1 != 0) & (v2 != 0);
        M2C_FIELD(arg0, void **, 12) = NULL;
        return v1;
    }
    return 1;
}
