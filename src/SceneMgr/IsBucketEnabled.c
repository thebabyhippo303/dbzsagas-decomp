/* SceneMgr__IsBucketEnabled @ 0x8022B244 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern s32 lbl_803AD898 __attribute__((section(".data")));

s32 SceneMgr__IsBucketEnabled(s32 bucket) {
    u32 mode = lbl_803AD898;

    switch (mode) {
        case 0:
        default:
            return 1;
        case 1:
            return bucket == 1;
        case 2:
            return bucket == 3;
        case 3:
            return bucket == 0;
        case 4:
            return bucket == 4;
        case 5:
            return bucket == 2;
    }
}
