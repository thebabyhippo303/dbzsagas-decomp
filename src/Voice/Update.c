/* Voice__Update @ 0x8019CD08 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 SoundChannel__IsPlaying(void *);
M2C_UNK Voice__StopChannel(void *);                 /* extern */

void Voice__Update(void *arg0, u32 arg1) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0xC) != 0) && (arg1 >= (u32) M2C_FIELD(arg0, u32 *, 0x28)) && ((s32) M2C_FIELD(arg0, s32 *, 0x44) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 1) && (SoundChannel__IsPlaying(M2C_FIELD(arg0, void **, 8)) == 0)) {
        Voice__StopChannel(arg0);
    }
}
