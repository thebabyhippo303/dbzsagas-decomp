/* EffectHandle__ForgetTextureSetByName @ 0x8022EE78 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern char lbl_80345C10[] __attribute__((section(".data")));
void *Database__GetTypedObject(s32, char *, void *, s32);
void EffectHandle__ForgetTextureSet(void *);
void EffectHandle__ForgetTextureSetByName(void *arg0) {
    void *p = Database__GetTypedObject(130, lbl_80345C10, arg0, 0);
    if (p == NULL) {
        p = Database__GetTypedObject(134, lbl_80345C10, arg0, 0);
    }
    EffectHandle__ForgetTextureSet(p);
}
