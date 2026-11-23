/* SoundGroup__ResumeVoices @ 0x8019D8B4 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK fn_8019D054(void *);                        /* extern */

void SoundGroup__ResumeVoices(void *arg0) {
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x48);
    if (var_r31 != NULL) {
        do {
            fn_8019D054(var_r31);
            var_r31 = M2C_FIELD(var_r31, void **, 0x50);
        } while (var_r31 != NULL);
    }
}
