/* CCameraStatic__OnDeactivate @ 0x800CD23C (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
extern int lbl_803DC3C0;

void SimLoop__ActivateControls(int loop, int enable);

void CameraStatic__ActivateControls(void) {
    SimLoop__ActivateControls(lbl_803DC3C0, 1);
}
