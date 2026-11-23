/* AxStream__ReadChunk @ 0x80197FB8 (size: 0xF4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void DCFlushRange(void *, u32);
s32 DVDReadAsync(void *, void *, s32, s32, void *, s32);
f32 memset(void *, int, u32);
M2C_UNK DCInvalidateRange(void *, M2C_UNK);         /* extern */
M2C_UNK fn_801980AC(void *);                        /* extern */
extern M2C_UNK fn_80198164 __attribute__((section(".data")));

void AxStream__ReadChunk(void *arg0, u32 arg1) {
    u32 temp_r29;
    u32 var_r9;
    void *temp_r30;

    temp_r30 = M2C_FIELD(arg0, void **, 0x8C);
    temp_r29 = M2C_FIELD(temp_r30, s32 *, 0x1BC) - M2C_FIELD(temp_r30, s32 *, 0x1B8);
    if (temp_r29 == 0U) {
        memset(M2C_FIELD(arg0, void **, 0x3C), 0, 0x4000U);
        DCFlushRange(M2C_FIELD(arg0, void **, 0x3C), 0x4000U);
        DCInvalidateRange(M2C_FIELD(arg0, void **, 0x3C), 0x4000);
        M2C_FIELD(arg0, s32 *, 0x6C) = 1;
        M2C_FIELD(arg0, s32 *, 0x7C) = 1;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x78) == 0) {
            fn_801980AC(arg0);
        }
    } else {
        M2C_FIELD(arg0, u32 *, 0x60) = arg1;
        var_r9 = temp_r29;
        if (temp_r29 > arg1) {
            var_r9 = arg1;
        }
        M2C_FIELD(arg0, s32 *, 0x6C) = 0;
        M2C_FIELD(arg0, u32 *, 0x64) = var_r9;
        M2C_FIELD(arg0, s32 *, 0x74) = 1;
        DVDReadAsync(arg0, M2C_FIELD(arg0, void **, 0x3C), (var_r9 + 0x1F) & 0xFFFFFFE0, M2C_FIELD(temp_r30, s32 *, 0x1B8), &fn_80198164, 2);
        M2C_FIELD(temp_r30, s32 *, 0x1B8) = (s32) (M2C_FIELD(temp_r30, s32 *, 0x1B8) + M2C_FIELD(arg0, u32 *, 0x64));
        if ((s32) M2C_FIELD(arg0, u32 *, 0x64) == (s32) temp_r29) {
            M2C_FIELD(arg0, s32 *, 0x80) = 1;
        }
    }
}
