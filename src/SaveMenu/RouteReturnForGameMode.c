/* SaveMenu__RouteReturnForGameMode @ 0x80050474 (size: 0x100, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SimLoop__PauseSimulation(void *, s32, s32, s32);
void MainMenu__StartScreenTransition(void *, f32);
void MainMenu__ConfigureScreen(void *, int);
void fn_80267318(void *, int, float);
extern f32 lbl_80319CD4 __attribute__((section(".data")));
extern void *lbl_803DC3C0;
extern void *lbl_803DC704;

void SaveMenu__RouteReturnForGameMode(void *arg0) {
    s32 temp_r0;
    void *temp_r9;
    void *temp_r9_2;

    temp_r0 = M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 0x1C);
    switch (temp_r0) {                              /* irregular */
    case 5:
        fn_80267318(arg0 + 0xD4C4, 0, lbl_80319CD4);
        SimLoop__PauseSimulation(lbl_803DC3C0, 0, 0, 1);
        temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x414)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x410));
        return;
    case 3:
    case 1:
        fn_80267318(arg0 + 0x18834, 0, lbl_80319CD4);
        if ((void *) lbl_803DC3C0 != NULL) {
            SimLoop__PauseSimulation(lbl_803DC3C0, 0, 0, 1);
            MainMenu__StartScreenTransition(lbl_803DC704, lbl_80319CD4);
            MainMenu__ConfigureScreen(lbl_803DC704, 1);
        }
        temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x414)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x410));
        return;
    }
}
