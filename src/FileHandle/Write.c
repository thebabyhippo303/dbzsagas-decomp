/* FileHandle__Write @ 0x801806E4 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 DvdFile__Write(s32, s32, void *);
extern s32 lbl_803DCB90;

s32 FileHandle__Write(void *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    if (M2C_FIELD(arg0, s32 *, 0) == 1) {
        return 0;
    }
    if (DvdFile__Write(arg1, arg2, M2C_FIELD(arg0, void **, 4)) == 0) {
        if (arg3 != NULL) {
            *arg3 = lbl_803DCB90;
        }
        return 0;
    }
    return 1;
}
