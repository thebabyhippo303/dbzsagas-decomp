/* WaterPool__InitRippleTree @ 0x8029D868 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void WaterPool__BuildRippleSubtree(void *, u8, s32);
void WaterPool__InsertInitialRippleRegion(void *);

void WaterPool__InitRippleTree(void *arg0) {
    void *p;
    u8 flag;

    p = M2C_FIELD(arg0, void **, 0x144);
    M2C_FIELD(arg0, s32 *, 0x13C) = 1;
    M2C_FIELD(arg0, s32 *, 0x140) = (s32)((char *)p + 31);
    M2C_FIELD(p, u8 *, 3) = 255;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x144), u8 *, 4) = 255;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x144), u8 *, 5) = 255;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x144), u8 *, 6) = 255;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x144), u8 *, 0) = 255;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x144), u8 *, 1) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x144), u8 *, 9) = 255;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x144), u8 *, 10) = 255;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x144), u8 *, 7) = 255;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x144), u8 *, 8) = 255;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x144), u8 *, 2) = 0;
    flag = M2C_FIELD(arg0, u8 *, 0x134);
    if (flag != 0) {
        WaterPool__BuildRippleSubtree(arg0, flag, 0);
    }
    WaterPool__InsertInitialRippleRegion(arg0);
}
