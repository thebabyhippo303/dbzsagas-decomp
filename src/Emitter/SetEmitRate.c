/* Emitter__SetEmitRate @ 0x80222E94 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Emitter__FreeParticles(void *, f32);
extern s32 lbl_803AD48C __attribute__((section(".data")));

s32 Emitter__SetEmitRate(u32 arg0, s32 arg1, f32 farg0) {
    s32 temp_r9;
    void *temp_r11;

    temp_r9 = (arg0 >> 0x10U) * 0x110;
    temp_r11 = lbl_803AD48C + temp_r9;
    if ((s32) *(s32 *)(lbl_803AD48C + temp_r9) != (s32) arg0) {
        return 0;
    }
    if ((s32) (M2C_FIELD(temp_r11, s32 *, 4) & 7) == 5) {
        Emitter__FreeParticles(temp_r11, farg0);
    } else {
        if (arg1 == 0) {
            M2C_FIELD(temp_r11, f32 *, 0xA8) = farg0;
        }
        M2C_FIELD(temp_r11, f32 *, 0x6C) = farg0;
        if (!(M2C_FIELD(temp_r11, f32 *, 0x68) <= farg0)) {
            M2C_FIELD(temp_r11, f32 *, 0x68) = farg0;
        }
    }
    return 1;
}
