/* Mover__GetPlayerThrottle @ 0x802BA424 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 ControllerMap__GetPlayerController(void *, u32);
extern f32 lbl_8035211C __attribute__((section(".data")));
extern void *lbl_803DCC74;

f32 Mover__GetPlayerThrottle(void *arg0) {
    void *temp_r3;

    temp_r3 = ControllerMap__GetPlayerController(lbl_803DCC74, M2C_FIELD(arg0, u32 *, 0x59C));
    if (M2C_FIELD(temp_r3, s32 *, 0xDC) == 0) {
        return lbl_8035211C;
    }
    return M2C_FIELD(temp_r3, f32 *, 0xA0);
}
