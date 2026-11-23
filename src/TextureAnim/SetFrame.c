/* TextureAnim__SetFrame @ 0x80246B1C (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void TextureAnim__SetFrame(void *arg0, u16 arg1) {
    void *tmp = M2C_FIELD(arg0, void **, 0x10);
    if (tmp != NULL) {
        if (arg1 >= *(volatile u32 *)((char *)tmp + 0xC)) {
            do {
                arg1 -= *(volatile u16 *)((char *)tmp + 0xE);
            } while (arg1 >= *(volatile u32 *)((char *)tmp + 0xC));
        }
    }
    M2C_FIELD(arg0, u16 *, 0xC) = arg1;
}
