/* SceneMgr__LayoutBuckets @ 0x80229F04 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef struct {
    char pad[64];
    u32 base;
    volatile u32 sum;
    u32 outs[5];
    u32 counts[5];
} LayoutG;
extern LayoutG lbl_803AD7B0;
void SceneMgr__LayoutBuckets(void) {
    s32 i;
    lbl_803AD7B0.sum = 0;
    for (i = 0; i < 5; i++) {
        lbl_803AD7B0.outs[i] = lbl_803AD7B0.base + (lbl_803AD7B0.sum << 2);
        lbl_803AD7B0.sum = lbl_803AD7B0.sum + lbl_803AD7B0.counts[i];
    }
}
