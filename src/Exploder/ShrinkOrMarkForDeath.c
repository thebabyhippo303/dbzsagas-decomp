/* Exploder__ShrinkOrMarkForDeath @ 0x800EF274 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Actor__MarkForDeath(void *, float);
void Actor__ToNonProtagonistCastImpl(void *);
void Simple__ScaleToOverTime(void *, void *, s32, f32, f32);
void Simple__SetScaleImpl(char *, char *);
extern f32 lbl_80323B54 __attribute__((section(".data")));
extern f32 lbl_80323B58 __attribute__((section(".data")));

void Exploder__ShrinkOrMarkForDeath(void *arg0, f32 farg0) {
    f32 sp8[3];
    f32 *scale;
    f32 temp;
    void *v;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x6D8) != 0) {
        v = M2C_FIELD(arg0, void **, 0x34);
        scale = sp8;
        M2C_FIELD(v, M2C_UNK (**)(void *, M2C_UNK), 0x64)(arg0 + M2C_FIELD(v, s16 *, 0x60), 1);
        Actor__ToNonProtagonistCastImpl(arg0);
        temp = lbl_80323B54;
        scale[0] = temp;
        scale[1] = temp;
        scale[2] = temp;
        Simple__SetScaleImpl(arg0, (char *) scale);
        Simple__ScaleToOverTime(arg0, scale, 0, temp, lbl_80323B58);
        M2C_FIELD(arg0, s32 *, 0x6DC) = 0;
        M2C_FIELD(arg0, f32 *, 0x6E4) = (f32) M2C_FIELD(arg0, f32 *, 0x6E0);
        return;
    }
    Actor__MarkForDeath(arg0, farg0);
}
