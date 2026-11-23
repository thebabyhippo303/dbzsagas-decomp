/* SecondaryModel__UpdateBoxBounds @ 0x8020C4B4 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0

typedef struct {
    char pad[32];
    short adjust;
    short unused;
    void *fn;
} SMVT;

s32 SecondaryModel__UpdateBoxBounds(void *obj) {
    SMVT *vt = *(SMVT **)obj;
    return ((s32 (*)(void *))vt->fn)((char *)obj + vt->adjust);
}
