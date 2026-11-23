/* Game__DisplayOptionalExitMenuImpl @ 0x8004B470 (size: 0xDC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void HUD__ClearAllWidgets(int *);
void SimLoop__ActivateControls(int, int);
void SimLoop__PauseSimulation(int, int, int, int);
void Sphere__AddChild(void *, void *);
M2C_UNK ConfirmationDialog__Show(void *);           /* extern */
M2C_UNK fn_80266F24(void *, M2C_UNK, f32);          /* extern */
extern f32 lbl_80316F54 __attribute__((section(".data")));
extern s32 lbl_803DC3C0;
extern s32 *lbl_803DC654;

void Game__DisplayOptionalExitMenuImpl(void *arg0) {
    void *temp_r29;
    void *temp_r9;
    void *temp_r9_2;

    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x3A4)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x3A0)) == 0) {
        temp_r29 = arg0 + 0x344;
        HUD__ClearAllWidgets(lbl_803DC654);
        ConfirmationDialog__Show(M2C_FIELD(arg0, void **, 0xAE9C));
        Sphere__AddChild(temp_r29, M2C_FIELD(arg0, void **, 0xAE9C));
        Sphere__AddChild(temp_r29, M2C_FIELD(arg0, void **, 0xAE90));
        Sphere__AddChild(temp_r29, M2C_FIELD(arg0, void **, 0xAE94));
        Sphere__AddChild(temp_r29, M2C_FIELD(arg0, void **, 0xAE98));
        SimLoop__PauseSimulation(lbl_803DC3C0, 1, 0, 1);
        SimLoop__ActivateControls(lbl_803DC3C0, 0);
        fn_80266F24(arg0, 0, lbl_80316F54);
        temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x1D4)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x1D0));
    }
}
