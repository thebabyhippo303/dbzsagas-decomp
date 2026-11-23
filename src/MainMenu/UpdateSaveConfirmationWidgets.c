/* MainMenu__UpdateSaveConfirmationWidgets @ 0x8014BD6C (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void fn_8026BF14(void *);
extern f32 lbl_8032BE9C __attribute__((section(".data")));
extern f32 lbl_8032BEA8 __attribute__((section(".data")));
extern u32 lbl_803A35AC __attribute__((section(".data")));

/* Keep the int-to-float constant pool at the same low 16 bits as the DOL. */
static const char pool_pad[0xBEA0] = {1};

void MainMenu__UpdateSaveConfirmationTimer(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xCBAC) == 1) {
        if (!(M2C_FIELD(arg0, f32 *, 0xCBA8) < lbl_8032BE9C)) {
            fn_8026BF14(arg0);
            M2C_FIELD(arg0, s32 *, 0xCBAC) = 2;
        }
        M2C_FIELD(arg0, f32 *, 0xCBA8) = (f32) (((f32) (f64) lbl_803A35AC * lbl_8032BEA8) + M2C_FIELD(arg0, f32 *, 0xCBA8));
    }
    fn_8026BF14(arg0);
    fn_8026BF14(arg0 + 0xAE94);
}
