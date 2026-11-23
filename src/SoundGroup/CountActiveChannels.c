/* SoundGroup__CountActiveChannels @ 0x8019D530 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Voice__HasChannel(void *);
s32 SoundGroup__CountActiveChannels(void *arg0) {
    s32 var_r30;
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x48);
    var_r30 = 0;
    if (var_r31 != NULL) {
        do {
            if (Voice__HasChannel(var_r31) != 0) {
                var_r30 += 1;
            }
            var_r31 = M2C_FIELD(var_r31, void **, 0x50);
        } while (var_r31 != NULL);
    }
    return var_r30;
}
