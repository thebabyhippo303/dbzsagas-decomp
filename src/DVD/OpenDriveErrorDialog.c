/* DVD__OpenDriveErrorDialog @ 0x8000953C (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void SimLoop__PauseSimulation(void *, s32, s32, s32);
void MenuPanel__Show(void *, s32, f32);
void DisplayInfo__ActivateOverlay(void *);
extern f32 lbl_80309D98 __attribute__((section(".data")));
extern s32 lbl_803A35DC __attribute__((section(".data")));
extern void *lbl_803DC3A0;
extern void *lbl_803DC3C0;

void DVD__OpenDriveErrorDialog(void *arg0) {
    void *vt;
    void *vt2;
    void *vt3;
    void *obj;
    s32 flag;

    vt = M2C_FIELD(arg0, void **, 0x19C);
    if (M2C_FIELD(vt, s32 (**)(void *), 0x3A4)((char *) arg0 + M2C_FIELD(vt, s16 *, 0x3A0)) != 0) {
        return;
    }
    MenuPanel__Show(arg0, 0, lbl_80309D98);
    flag = (lbl_803A35DC == 0);
    M2C_FIELD(arg0, s32 *, 0xB568) = flag;
    if (flag == 0) {
        SimLoop__PauseSimulation(lbl_803DC3C0, 1, 0, 0);
        obj = lbl_803DC3A0;
        vt2 = M2C_FIELD(obj, void **, 0x19C);
        if (M2C_FIELD(vt2, s32 (**)(void *), 0x3A4)((char *) obj + M2C_FIELD(vt2, s16 *, 0x3A0)) != 0) {
            DisplayInfo__ActivateOverlay(lbl_803DC3A0);
        }
    }
    vt3 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(vt3, void (**)(void *), 0x1D4)((char *) arg0 + M2C_FIELD(vt3, s16 *, 0x1D0));
}
