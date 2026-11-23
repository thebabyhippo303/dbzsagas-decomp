/* CCameraFighter__Construct @ 0x800BE594 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Camera__AddEffect(void *, void *);
void * CFilterSmooth__Construct(void *, f32, f32);
s32 Mem__New(s32);
M2C_UNK Camera__Construct(s32);
extern f32 lbl_803217B0 __attribute__((section(".data")));
extern f32 lbl_803217B4 __attribute__((section(".data")));
extern f32 lbl_803217B8 __attribute__((section(".data")));
extern M2C_UNK lbl_8032E8F8 __attribute__((section(".data")));
extern M2C_UNK lbl_80332E80 __attribute__((section(".data")));

s32 CCameraFighter__Construct(s32 arg0) {
    void *temp_r3;

    Camera__Construct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &lbl_80332E80;
    temp_r3 = Mem__New(8);
    {f32 f = lbl_803217B0; M2C_UNK *vt = &lbl_8032E8F8;
    M2C_FIELD(temp_r3, M2C_UNK **, 0) = vt;
    M2C_FIELD(temp_r3, f32 *, 4) = f;}
    Camera__AddEffect((void *) arg0, temp_r3);
    Camera__AddEffect((void *) arg0, CFilterSmooth__Construct(Mem__New(0xC), lbl_803217B4, lbl_803217B8));
    return arg0;
}
