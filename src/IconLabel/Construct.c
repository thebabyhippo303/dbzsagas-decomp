/* IconLabel__Construct @ 0x80261714 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Sphere__AddChild(void *, void *);
void SphereText__Construct(void *);
void Sphere__Construct(void *);
extern f32 lbl_80349BB4 __attribute__((section(".data")));
extern char lbl_8034CFF0[] __attribute__((section(".data")));

void *IconLabel__Construct(void *arg0) {
    void *temp_r28;
    void *temp_r29;
    f32 scale;

    temp_r29 = arg0 + 0x1B0;
    Sphere__Construct(arg0);
    temp_r28 = arg0 + 0x350;
    M2C_FIELD(arg0, void **, 0x19C) = lbl_8034CFF0;
    Sphere__Construct(temp_r29);
    SphereText__Construct(temp_r28);
    Sphere__AddChild(arg0, temp_r29);
    Sphere__AddChild(arg0, temp_r28);
    scale = lbl_80349BB4;
    M2C_FIELD(arg0, s32 *, 0x1A8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1AC) = 0;
    M2C_FIELD(arg0, f32 *, 0x544) = scale;
    M2C_FIELD(arg0, s32 *, 0x54C) = 0;
    M2C_FIELD(arg0, f32 *, 0x548) = scale;
    return arg0;
}
