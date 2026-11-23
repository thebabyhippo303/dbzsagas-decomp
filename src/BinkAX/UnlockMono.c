/* BinkAX__UnlockMono @ 0x802EBEEC (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void BinkAX__QueueUpload(void *);
void * memcpy(void *, const void *, unsigned int);
s32 BinkAX__UnlockMono(void *arg0, u32 arg1) {
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r30;
    u32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, u32 *, 0xF0);
    temp_r5 = M2C_FIELD(arg0, u32 *, 0xDC);
    temp_r30 = temp_r0 + arg1;
    if (temp_r30 >= temp_r5) {
        memcpy(M2C_FIELD(arg0, void **, 0xE4) + temp_r0, M2C_FIELD(arg0, void **, 0xEC), temp_r5 - temp_r0);
        temp_r0_2 = M2C_FIELD(arg0, u32 *, 0xDC);
        memcpy(M2C_FIELD(arg0, void **, 0xE4), (M2C_FIELD(arg0, void **, 0xEC) + temp_r0_2) - M2C_FIELD(arg0, u32 *, 0xF0), temp_r30 - temp_r0_2);
        M2C_FIELD(arg0, u32 *, 0xF0) = (u32) (temp_r30 - M2C_FIELD(arg0, u32 *, 0xDC));
    } else {
        memcpy(M2C_FIELD(arg0, void **, 0xE4) + temp_r0, M2C_FIELD(arg0, void **, 0xEC), arg1);
        M2C_FIELD(arg0, u32 *, 0xF0) = temp_r30;
    }
    M2C_FIELD(arg0, s32 *, 0x100) = (s32) (M2C_FIELD(arg0, s32 *, 0x100) + arg1);
    BinkAX__QueueUpload(arg0);
    return 1;
}
