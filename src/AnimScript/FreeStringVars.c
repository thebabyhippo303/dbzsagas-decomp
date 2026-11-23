/* AnimScript__FreeStringVars @ 0x80234FA8 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void memFree(void *);
void AnimScript__FreeStringVars(void *arg0) {
    s32 i;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 28), u32 *, 20) == 0) {
        return;
    }
    for (i = 0; i < M2C_FIELD(M2C_FIELD(arg0, void **, 28), u32 *, 20); i++) {
        if (M2C_FIELD(arg0, u8 **, 44)[i] == 5) {
            memFree(M2C_FIELD(arg0, void ***, 40)[i]);
        }
    }
}
