/* flush_pending @ 0x80255FBC (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * memcpy(void *, const void *, unsigned int);
void flush_pending(void *arg0) {
    u32 temp_r0;
    u32 var_r30;
    void *temp_r10;
    void *temp_r11;
    void *temp_r3;
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0x1C);
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x10);
    var_r30 = M2C_FIELD(temp_r9, u32 *, 0x14);
    if (var_r30 > temp_r0) {
        var_r30 = temp_r0;
    }
    if ((s32) var_r30 != 0) {
        memcpy(M2C_FIELD(arg0, void **, 0xC), M2C_FIELD(temp_r9, void **, 0x10), var_r30);
        temp_r11 = M2C_FIELD(arg0, void **, 0x1C);
        M2C_FIELD(arg0, void **, 0xC) = (void *) (M2C_FIELD(arg0, void **, 0xC) + var_r30);
        M2C_FIELD(temp_r11, void **, 0x10) = (void *) (M2C_FIELD(temp_r11, void **, 0x10) + var_r30);
        temp_r10 = M2C_FIELD(arg0, void **, 0x1C);
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + var_r30);
        M2C_FIELD(arg0, u32 *, 0x10) = (u32) (M2C_FIELD(arg0, u32 *, 0x10) - var_r30);
        M2C_FIELD(temp_r10, u32 *, 0x14) = (u32) (M2C_FIELD(temp_r10, u32 *, 0x14) - var_r30);
        temp_r3 = M2C_FIELD(arg0, void **, 0x1C);
        if ((s32) M2C_FIELD(temp_r3, u32 *, 0x14) == 0) {
            M2C_FIELD(temp_r3, void **, 0x10) = (void *) M2C_FIELD(temp_r3, void **, 8);
        }
    }
}
