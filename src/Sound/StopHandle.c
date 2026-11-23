/* Sound__StopHandle @ 0x80188FB0 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Sound__GetHandleVoice(s32);
M2C_UNK fn_80199160(s32, s32 *);                    /* extern */
M2C_UNK fn_8019EC34(s32, s32);                       /* extern */

void Sound__StopHandle(s32 *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r3 = *arg0;
    if (temp_r3 != 0) {
        temp_r3_2 = Sound__GetHandleVoice(temp_r3);
        if (temp_r3_2 != 0) {
            fn_80199160(temp_r3_2, arg0);
        } else if ((s32) *arg0 != 0) {
            fn_8019EC34(*arg0, 3);
        }
        *arg0 = 0;
    }
}
