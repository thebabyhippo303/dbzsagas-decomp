/* SoundGroup__CastToVoice3D @ 0x8019B8AC (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void *SoundGroup__CastToVoice3D(void *arg0, void *arg1) {
    void *vt;
    if (arg1 == NULL) {
        return NULL;
    }
    vt = M2C_FIELD(arg1, void **, 84);
    if (M2C_FIELD(vt, s32 (**)(void *), 20)(arg1 + M2C_FIELD(vt, s16 *, 16)) != 1) {
        return NULL;
    }
    return arg1;
}
