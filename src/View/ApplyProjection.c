/* View__ApplyProjection @ 0x8024678C (size: 0xF4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void MatrixStack__SetMode(s32);
s32 MatrixStack__GetTop(s32);
M2C_UNK MatrixStack__Push(void);
M2C_UNK MatrixStack__LoadIdentity(void);
M2C_UNK MatrixStack__Perspective(f32, f32, f32, f32);
M2C_UNK MatrixStack__Pop(void);
void *View__ApplyProjection(void *arg0) {
    void *temp_r3;
    void *temp_r9;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x68) != 0) {
        MatrixStack__SetMode(0);
        MatrixStack__Push();
        MatrixStack__LoadIdentity();
        MatrixStack__Perspective(M2C_FIELD(arg0, f32 *, 8), M2C_FIELD(arg0, f32 *, 0xC), M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg0, f32 *, 4));
        temp_r3 = MatrixStack__GetTop(0);
        temp_r9 = arg0 + 0x28;
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(temp_r3, f32 *, 0);
        M2C_FIELD(temp_r9, f32 *, 4) = (f32) M2C_FIELD(temp_r3, f32 *, 4);
        M2C_FIELD(temp_r9, f32 *, 8) = (f32) M2C_FIELD(temp_r3, f32 *, 8);
        M2C_FIELD(temp_r9, f32 *, 0xC) = (f32) M2C_FIELD(temp_r3, f32 *, 0xC);
        M2C_FIELD(temp_r9, f32 *, 0x10) = (f32) M2C_FIELD(temp_r3, f32 *, 0x10);
        M2C_FIELD(temp_r9, f32 *, 0x14) = (f32) M2C_FIELD(temp_r3, f32 *, 0x14);
        M2C_FIELD(temp_r9, f32 *, 0x18) = (f32) M2C_FIELD(temp_r3, f32 *, 0x18);
        M2C_FIELD(temp_r9, f32 *, 0x1C) = (f32) M2C_FIELD(temp_r3, f32 *, 0x1C);
        M2C_FIELD(temp_r9, f32 *, 0x20) = (f32) M2C_FIELD(temp_r3, f32 *, 0x20);
        M2C_FIELD(temp_r9, f32 *, 0x24) = (f32) M2C_FIELD(temp_r3, f32 *, 0x24);
        M2C_FIELD(temp_r9, f32 *, 0x28) = (f32) M2C_FIELD(temp_r3, f32 *, 0x28);
        M2C_FIELD(temp_r9, f32 *, 0x2C) = (f32) M2C_FIELD(temp_r3, f32 *, 0x2C);
        M2C_FIELD(temp_r9, f32 *, 0x30) = (f32) M2C_FIELD(temp_r3, f32 *, 0x30);
        M2C_FIELD(temp_r9, f32 *, 0x34) = (f32) M2C_FIELD(temp_r3, f32 *, 0x34);
        M2C_FIELD(temp_r9, f32 *, 0x38) = (f32) M2C_FIELD(temp_r3, f32 *, 0x38);
        M2C_FIELD(temp_r9, f32 *, 0x3C) = (f32) M2C_FIELD(temp_r3, f32 *, 0x3C);
        MatrixStack__Pop();
        M2C_FIELD(arg0, s32 *, 0x68) = 0;
    }
    return arg0 + 0x28;
}
