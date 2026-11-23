/* IconLabel__Update @ 0x80261804 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sphere__Update(void *);
void Sphere__SetTextureFrame(void *, s32, s32, s32, s32);

void IconLabel__Update(void *arg0) {
    s32 frame;

    Sphere__Update(arg0);
    frame = *(s32 *)((char *)arg0 + 0x1A8);
    if (*(s32 *)((char *)arg0 + 0x1A0) == 0) {
        frame = *(s32 *)((char *)arg0 + 0x1AC);
    }
    Sphere__SetTextureFrame((char *)arg0 + 432, frame, 0, 1, 1);
}
