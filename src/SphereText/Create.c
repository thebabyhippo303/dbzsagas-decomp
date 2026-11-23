/* SphereText__Create @ 0x80129490 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Mem__New(s32);
void * fn_80270450(void *);
extern void *lbl_803DD934;

void LoadingScreen__Create(void) {
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_2;

    temp_r3 = fn_80270450(Mem__New(0x1F4));
    temp_r9 = M2C_FIELD(temp_r3, void **, 0x19C);
    lbl_803DD934 = temp_r3;
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x374)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x370));
    temp_r9_2 = M2C_FIELD(lbl_803DD934, void **, 0x19C);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x1E4)(lbl_803DD934 + M2C_FIELD(temp_r9_2, s16 *, 0x1E0));
}
