/* TextureAnim__Init @ 0x80246880 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void TextureAnim__SetFrame(void *, u16);
void TextureAnim__Apply(void *);
extern f32 lbl_80347830 __attribute__((section(".data")));
extern s32 lbl_803DCDD8;
void *TextureAnim__Init(void *self, s32 a0, s32 a1, u16 a2, u16 a3) {
    f32 c = lbl_80347830;
    s32 g = lbl_803DCDD8;
    s32 neg1 = -1;
    s32 zero = 0;
    M2C_FIELD(self, u16 *, 0x8) = a3;
    M2C_FIELD(self, u16 *, 0xA) = a3;
    M2C_FIELD(self, s16 *, 0xC) = (s16)neg1;
    M2C_FIELD(self, s32 *, 0x10) = a1;
    M2C_FIELD(self, s32 *, 0x14) = a0;
    M2C_FIELD(self, f32 *, 0x18) = c;
    M2C_FIELD(self, f32 *, 0x1C) = c;
    M2C_FIELD(self, f32 *, 0x20) = c;
    M2C_FIELD(self, f32 *, 0x24) = c;
    M2C_FIELD(self, f32 *, 0x28) = c;
    M2C_FIELD(self, f32 *, 0x2C) = c;
    M2C_FIELD(self, s16 *, 0xE) = (s16)zero;
    if (g != 0) {
        M2C_FIELD(self, s16 *, 0xE) = 2;
    }
    TextureAnim__SetFrame(self, a2);
    TextureAnim__Apply(self);
    return self;
}
