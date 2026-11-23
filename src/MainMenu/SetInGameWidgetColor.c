/* MainMenu__SetInGameWidgetColor @ 0x80018500 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void fn_8026C7F8(void *, f32, f32, f32, f32);
void MainMenu__SetInGameWidgetColor(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    M2C_FIELD(arg0, f32 *, 0x11E4) = farg0;
    M2C_FIELD(arg0, f32 *, 0x11E8) = farg1;
    M2C_FIELD(arg0, f32 *, 0x11EC) = farg2;
    M2C_FIELD(arg0, f32 *, 0x11F0) = farg3;
    fn_8026C7F8(arg0 + 0x91C, farg0, farg1, farg2, farg3);
}
