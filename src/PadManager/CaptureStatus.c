/* PadManager__CaptureStatus @ 0x801D8B60 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern char *lbl_803DCC60;

void PadManager__CaptureStatus(void *arg0) {
    s32 ld_0;
    s32 n;
    char *dst;
    char *src;
    char *var_r31;
    void *temp_r11;
    void *temp_r9;

    src = lbl_803DCC60;
    src += 0x32C;
    dst = (char *)arg0 + 0x38;
    n = 0x30;
    do {
        n -= 0x18;
        ld_0 = M2C_FIELD(src, s32 *, 0);
        M2C_FIELD(dst, s32 *, 0) = ld_0;
        M2C_FIELD(dst, s32 *, 4) = M2C_FIELD(src, s32 *, 4);
        ld_0 = M2C_FIELD(src, s32 *, 8);
        M2C_FIELD(dst, s32 *, 8) = ld_0;
        M2C_FIELD(dst, s32 *, 0xC) = M2C_FIELD(src, s32 *, 0xC);
        ld_0 = M2C_FIELD(src, s32 *, 0x10);
        M2C_FIELD(dst, s32 *, 0x10) = ld_0;
        M2C_FIELD(dst, s32 *, 0x14) = M2C_FIELD(src, s32 *, 0x14);
        src += 0x18;
        dst += 0x18;
    } while (0 != n);
    M2C_FIELD(arg0, s32 *, 0x7C) = n;
    var_r31 = (char *)arg0 + 0x18;
    do {
        temp_r11 = *(void **)var_r31;
        var_r31 += 4;
        if (temp_r11) {
            temp_r9 = M2C_FIELD(temp_r11, void **, 0x1F8);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x4C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x48));
        }
    } while (var_r31 <= ((char *)arg0 + 0x24));
}
