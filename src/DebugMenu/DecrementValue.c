/* DebugMenu__DecrementValue @ 0x80264F78 (size: 0x114, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void BaseMenu__Activate(void *);
void BaseMenu__FocusParent(void *);
f64 String__ParseFloat(char *);
char *String__FormatTemp(char *, ...);
extern f32 lbl_80349CA0 __attribute__((section(".data")));
extern f32 lbl_80349CA4 __attribute__((section(".data")));
extern char lbl_80349C98[] __attribute__((section(".data")));

void DebugMenu__DecrementValue(void *arg0) {
    f32 f0;
    f32 f31;
    void *obj;
    void *vt0;
    void *vtB;
    void *vtC;
    void *dst;

    vt0 = M2C_FIELD(arg0, void **, 0x10);
    obj = M2C_FIELD(vt0, M2C_UNK (**)(void *), 0x1BC)(arg0 + M2C_FIELD(vt0, s16 *, 0x1B8));
    if (obj == NULL) goto do6;
    if (M2C_FIELD(arg0, s32 *, 0xC0) != 0) goto dofloat;
do6:
    BaseMenu__FocusParent(arg0);
    return;
dofloat:
    f31 = M2C_FIELD(obj, f32 *, 0x464);
    if (f31 == lbl_80349CA0) {
        f31 = (M2C_FIELD(obj, f32 *, 0x460) - M2C_FIELD(obj, f32 *, 0x45C)) * lbl_80349CA4;
    }
    vtB = M2C_FIELD(obj, void **, 0x10);
    f0 = (f32)String__ParseFloat(M2C_FIELD(vtB, char *(**)(void *, s32), 0x13C)(obj + M2C_FIELD(vtB, s16 *, 0x138), 1)) - f31;
    if (!(f0 >= M2C_FIELD(obj, f32 *, 0x45C))) {
        f0 = M2C_FIELD(obj, f32 *, 0x45C);
    }
    vtC = M2C_FIELD(obj, void **, 0x10);
    dst = obj + M2C_FIELD(vtC, s16 *, 0x298);
    vtC = (char *)vtC + 0x298;
    M2C_FIELD(vtC, M2C_UNK (**)(void *, s32, char *), 4)(dst, 1, String__FormatTemp(lbl_80349C98, f0));
    BaseMenu__Activate(arg0);
}
