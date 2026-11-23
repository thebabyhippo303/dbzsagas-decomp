/* TextureAnim__SetAllEnabled @ 0x802483F8 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern void *lbl_803B1D44 __attribute__((section(".data")));

void TextureAnim__SetAllEnabled(s32 arg0) {
    void *node = lbl_803B1D44;
    if (node == NULL) {
        return;
    }
    do {
        if (arg0 != 0) {
            M2C_FIELD(node, u16 *, 0xE) = (u16)(M2C_FIELD(node, u16 *, 0xE) | 2);
        } else {
            M2C_FIELD(node, u16 *, 0xE) = (u16)(M2C_FIELD(node, u16 *, 0xE) & 0xFFFD);
        }
        node = M2C_FIELD(node, void **, 0);
    } while (node != NULL);
}
