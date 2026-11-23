/* Camera__ResetFollowHeightIfNeeded @ 0x800CA33C (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern f32 lbl_80321A58 __attribute__((section(".data")));
extern f32 lbl_80321A5C __attribute__((section(".data")));

void Camera__ResetFollowHeightIfNeeded(void *arg0, s32 arg1) {
    if (((M2C_FIELD(arg0, f32 *, 0xFC) > lbl_80321A58) || (arg1 == 1)) && !(M2C_FIELD(arg0, s32 *, 0x44) & 0x01000000)) {
        M2C_FIELD(arg0, f32 *, 0x120) = (f32) lbl_80321A5C;
    }
}
