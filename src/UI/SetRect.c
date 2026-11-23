/* UI__SetRect @ 0x80272134 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void UI__SetRect(void *arg0, f32 f1, f32 f2, f32 f3, f32 f4) {
    void *vt;
    vt = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(vt, void (**)(void *), 0x3EC)((char*)arg0 + M2C_FIELD(vt, s16 *, 0x3E8));
    vt = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(vt, void (**)(void *, f32), 0x3FC)((char*)arg0 + M2C_FIELD(vt, s16 *, 0x3F8), f2);
    vt = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(vt, void (**)(void *, f32), 0x41C)((char*)arg0 + M2C_FIELD(vt, s16 *, 0x418), f3);
    vt = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(vt, void (**)(void *, f32), 0x42C)((char*)arg0 + M2C_FIELD(vt, s16 *, 0x428), f4);
}
