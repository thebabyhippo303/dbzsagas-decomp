/* DvdFile__Create @ 0x801810F0 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 DvdFile__Alloc(void);
extern M2C_UNK lbl_803A11F4 __attribute__((section(".data")));

s32 DvdFile__Create(void) {
    s32 temp_r0;
    s32 temp_r3;
    void *temp_global;

    temp_r3 = DvdFile__Alloc();
    if (temp_r3 == 0) {
        return 0;
    }
    temp_global = &lbl_803A11F4;
    temp_r0 = M2C_FIELD(temp_global, s32 *, 0);
    if (temp_r0 == 0) {
        M2C_FIELD(temp_global, s32 *, 0) = temp_r3;
        M2C_FIELD(temp_global, s32 *, 4) = temp_r3;
        M2C_FIELD(temp_r3, s32 *, 0x24) = temp_r0;
        M2C_FIELD(temp_r3, s32 *, 0x20) = temp_r0;
    } else {
        M2C_FIELD(temp_r3, s32 *, 0x24) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x20) = (s32) M2C_FIELD(temp_global, s32 *, 4);
        M2C_FIELD(M2C_FIELD(temp_global, s32 *, 4), s32 *, 0x24) = temp_r3;
        M2C_FIELD(temp_global, s32 *, 4) = temp_r3;
    }
    M2C_FIELD(temp_global, s32 *, 0xC) = (s32) (1 + M2C_FIELD(temp_global, s32 *, 0xC));
    return temp_r3;
}
