/* Sound__IsVoiceOverPlaying @ 0x8002C270 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Script__PushInt(void *, void *, int);
extern void *lbl_803DCC20;

void Sound__IsVoiceOverPlaying(void *arg0, void *arg1) {
    s32 var_r10;
    s32 var_r5;
    s32 count;

    var_r5 = 0;
    count = M2C_FIELD(lbl_803DCC20, s32 *, 0x178);
    var_r10 = 1;
    if ((s32) M2C_FIELD(lbl_803DCC20, s32 *, 0x14C) == 0) {
        var_r10 = 0;
    }
    if ((var_r10 + count) > 0) {
        var_r5 = 1;
    }
    Script__PushInt(arg0, arg1, var_r5);
}
