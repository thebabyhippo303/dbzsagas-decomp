/* VortexWind__InitializeFromProperties @ 0x800EC180 (size: 0x1AC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern char lbl_803BEFC0[] __attribute__((section(".data")));
extern char lbl_803B1E84[] __attribute__((section(".data")));
extern char lbl_80323898[] __attribute__((section(".data")));
extern char lbl_803239B0[] __attribute__((section(".data")));
extern char lbl_803239BC[] __attribute__((section(".data")));
extern char lbl_803239C4[] __attribute__((section(".data")));
extern char lbl_803239D4[] __attribute__((section(".data")));
extern char lbl_803239E8[] __attribute__((section(".data")));
extern char lbl_8032393C[] __attribute__((section(".data")));
extern char lbl_80323944[] __attribute__((section(".data")));
extern float lbl_803239F4 __attribute__((section(".data")));
extern char *fn_802B30E0(void *props);
extern void *Instance__FindByName(void *table, char *name, int a, int b);
extern float fn_802B2FE8(void *props, char *key, char *def);
extern void fn_802186B4(void *pos, int a, int b, int c, float f1, float f2, float f3, float f4, float f5, float f6, float f7);

void VortexWind__InitializeFromProperties(void) {
    float v[3];
    float out[3];
    float tx, ty, tz;
    char *name = fn_802B30E0(lbl_803BEFC0);
    if (name != 0) {
        char *inst = Instance__FindByName(lbl_803B1E84, name, 0, 0);
        if (inst) {
            float a = fn_802B2FE8(lbl_803BEFC0, lbl_803239B0, lbl_80323898);
            float b = fn_802B2FE8(lbl_803BEFC0, lbl_803239BC, lbl_80323898);
            float c = fn_802B2FE8(lbl_803BEFC0, lbl_803239C4, lbl_80323898);
            float d = fn_802B2FE8(lbl_803BEFC0, lbl_803239D4, lbl_80323898);
            float e = fn_802B2FE8(lbl_803BEFC0, lbl_803239E8, lbl_80323898);
            float f = fn_802B2FE8(lbl_803BEFC0, lbl_8032393C, lbl_80323898);
            float g = fn_802B2FE8(lbl_803BEFC0, lbl_80323944, lbl_80323898);
            float *p = v;
            float *m = (float *)(inst + 0x10);
            v[0] = lbl_803239F4;
            p[1] = lbl_803239F4;
            p[2] = lbl_803239F4;
            tx = v[0] * *(float *)(inst + 0x10) + m[12];
            ty = v[0] * m[1] + m[13];
            tz = v[0] * m[2] + m[14];
            out[0] = tx;
            out[1] = ty;
            out[2] = tz;
            fn_802186B4(out, 0, 0, 0, a, b, c, d, e, f, g);
        }
    }
}
