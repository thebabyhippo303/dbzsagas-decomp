/* MainMenu__EnterUpgradeScreen @ 0x8014D4E8 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SimLoop__PauseSimulation(void *, s32, s32, s32);
void UI__SetColorRGBA(void *, f64, f32, f32, f64);
void fn_80266F24(void *, s32, f32);
extern f32 lbl_8032BF5C __attribute__((section(".data")));
extern f32 lbl_8032BF60 __attribute__((section(".data")));
extern void *lbl_803DC3C0;

void MainMenu__EnterUpgradeScreen(void *arg0) {
    f32 arg_load;
    register void *temp_r3;

    if ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) == 1) {
        SimLoop__PauseSimulation(lbl_803DC3C0, 1, 0, 0);
    } else {
        SimLoop__PauseSimulation(lbl_803DC3C0, 1, 0, 1);
    }
    temp_r3 = arg0 + 0x11884;
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0xA40) == 2) {
        UI__SetColorRGBA(temp_r3, lbl_8032BF5C, lbl_8032BF5C, lbl_8032BF5C, lbl_8032BF60);
    }
    arg_load = lbl_8032BF60;
    M2C_FIELD(arg0, s32 *, 0xAE90) = 0;
    fn_80266F24(arg0, 0, arg_load);
}
