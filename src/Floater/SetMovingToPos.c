/* Floater__SetMovingToPos @ 0x802B384C (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern f32 lbl_80351F88 __attribute__((section(".data")));

void Floater__SetMovingToPos(void *arg0, s32 arg1) {
    s32 var_r0;
    void *temp_r9;

    if (arg1 == 0) {
        temp_r9 = M2C_FIELD(arg0, void **, 0x4F4);
        var_r0 = 7;
        if (temp_r9 != NULL) {
            var_r0 = M2C_FIELD(temp_r9, s32 *, 0x30);
        }
        if (var_r0 & 1) {
            M2C_FIELD(arg0, f32 *, 0x68) = (f32) lbl_80351F88;
        }
        if (var_r0 & 2) {
            M2C_FIELD(arg0, f32 *, 0x6C) = (f32) lbl_80351F88;
        }
        if (var_r0 & 4) {
            M2C_FIELD(arg0, f32 *, 0x70) = (f32) lbl_80351F88;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x4D4) = arg1;
}
