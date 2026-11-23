/* MessagePanel__Destroy @ 0x802763F4 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SphereText__Destroy(void *, s32);
void Sphere__DestroyCore(void *, s32);
void MenuFrame__Destroy(void *, s32);

void MessagePanel__Destroy(void *arg0, s32 arg1) {
    void *m1;
    SphereText__Destroy((char *)arg0 + 0x62B0, 2);
    m1 = (char *)arg0 + 0x5F60;
    Sphere__DestroyCore((char *)arg0 + 0x6110, 2);
    Sphere__DestroyCore(m1, 2);
    SphereText__Destroy((char *)arg0 + 0x5D6C, 2);
    MenuFrame__Destroy(arg0, arg1);
}
