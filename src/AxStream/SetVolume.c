/* AxStream__SetVolume @ 0x80197C30 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 Sound__VolumeToAxVolume();                      /* extern */
M2C_UNK fn_802D6DC4(s32, s32);                      /* extern */
extern s32 lbl_803DE4D4;

s32 AxStream__SetVolume(void *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x1C0);
    if (temp_r31 != 0) {
        fn_802D6DC4(temp_r31, (lbl_803DE4D4 * Sound__VolumeToAxVolume()) / -10000);
    }
    return 1;
}
