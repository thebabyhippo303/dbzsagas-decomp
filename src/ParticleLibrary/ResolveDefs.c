/* ParticleLibrary__ResolveDefs @ 0x80213F34 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void *Database__GetArrayElement(void *, s32);
void ParticleLibrary__ResolveDefs(void *arg0, void *arg1) {
    s32 i = 0;
    char *p = (char *)arg0 + 4;
    while (i < *(s32 *)arg0) {
        if ((*(u8 *)(p + 13) & 2) == 0) {
            *(void **)p = Database__GetArrayElement(arg1, *(s32 *)p);
        }
        i++;
        p += 16;
    }
}
