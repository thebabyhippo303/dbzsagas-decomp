/* GroundDecalMgr__CreateSet @ 0x80285114 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void *Mem__New(u32);
void *GroundDecalSet__Construct(void *, void *);

void *GroundDecalMgr__CreateSet(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    void *temp_r3;
    void *temp_r8;

    temp_r3 = GroundDecalSet__Construct(Mem__New(0x5CU), arg0);
    if (temp_r3 == 0) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x18);
    temp_r8 = (char *)arg0 + 0x18;
    if (temp_r0 == 0) {
        M2C_FIELD(temp_r8, void **, 4) = temp_r3;
        M2C_FIELD(arg0, void **, 0x18) = temp_r3;
        M2C_FIELD(temp_r3, s32 *, 0x58) = temp_r0;
        M2C_FIELD(temp_r3, s32 *, 0x54) = temp_r0;
    } else {
        M2C_FIELD(temp_r3, s32 *, 0x58) = 0;
        M2C_FIELD(temp_r3, void **, 0x54) = M2C_FIELD(temp_r8, void **, 4);
        M2C_FIELD(M2C_FIELD(temp_r8, void **, 4), void **, 0x58) = temp_r3;
        M2C_FIELD(temp_r8, void **, 4) = temp_r3;
    }
    M2C_FIELD(temp_r8, s32 *, 0xC) = M2C_FIELD(temp_r8, s32 *, 0xC) + 1;
    M2C_FIELD(temp_r3, s32 *, 0x10) = arg1;
    M2C_FIELD(temp_r3, s32 *, 0x2C) = arg2;
    return temp_r3;
}
