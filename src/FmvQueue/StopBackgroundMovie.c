/* FmvQueue__StopBackgroundMovie @ 0x801DA76C (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
M2C_UNK fn_80306BE0(s32);
M2C_UNK fn_80306B48(s32);
M2C_UNK fn_801D9DE8(s32);
extern s32 lbl_803A40A8[] __attribute__((section(".data")));

void FmvQueue__StopBackgroundMovie(void *arg0, s32 *arg1) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0) != 0) && ((void *) M2C_FIELD(arg0, void **, 0x14) != NULL)) {
        if (fn_80306BE0((s32) lbl_803A40A8) != 0) {
            fn_80306B48((s32) lbl_803A40A8);
        }
        *arg1 = lbl_803A40A8[0x20D4];
        fn_801D9DE8(M2C_FIELD(arg0, s32 *, 0));
        Mem__Delete(M2C_FIELD(arg0, void **, 0x14));
        M2C_FIELD(arg0, void **, 0x14) = NULL;
    }
}
