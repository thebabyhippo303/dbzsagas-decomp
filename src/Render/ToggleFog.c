/* Render__ToggleFog @ 0x80229860 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct {
    char pad[8];
    int flag;
} RFogFlags;
extern RFogFlags lbl_803AD9E4;
void RenderState__Change(s32, s32);

void Render__ToggleFog(void) {
    int v = 1;
    if (lbl_803AD9E4.flag == 1) {
        v = 0;
    }
    lbl_803AD9E4.flag = v;
    if (v == 0) {
        RenderState__Change(9, 0);
    }
}
