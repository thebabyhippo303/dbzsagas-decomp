/* HUD__ResetState @ 0x800FF198 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern float lbl_8032511C __attribute__((section(".data")));
extern void HUD__ResetWidgetGroups(void *hud, void *group);

void *HUD__ResetState(void *self) {
    float f;

    HUD__ResetWidgetGroups(self, (char *)self + 7296);
    HUD__ResetWidgetGroups(self, (char *)self + 8588);
    f = lbl_8032511C;
    *(volatile int *)((char *)self + 11200) = 0;
    *(volatile float *)((char *)self + 11208) = f;
    *(volatile float *)((char *)self + 11220) = f;
    *(volatile int *)((char *)self + 11460) = 0;
    *(volatile int *)((char *)self + 12072) = 0;
    *(volatile int *)((char *)self + 0) = 0;
    *(volatile int *)((char *)self + 11196) = 0;
    *(volatile float *)((char *)self + 11204) = f;
    return self;
}
