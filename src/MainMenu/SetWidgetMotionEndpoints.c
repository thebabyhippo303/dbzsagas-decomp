/* MainMenu__SetWidgetMotionEndpoints @ 0x8012EB84 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-match MainMenu__SetWidgetMotionEndpoints @ 0x8012EB84 (0x34). */
extern void MainMenu__UpdateAnimatedWidgetTransform(void *self);

void MainMenu__SetWidgetMotionEndpoints(void *self, float x0, float y0, float x1, float y1) {
    void *widget = self;

    *(float *)((char *)widget + 416) = x0;
    *(float *)((char *)widget + 420) = y0;
    *(float *)((char *)widget + 424) = x1;
    *(float *)((char *)widget + 428) = y1;
    MainMenu__UpdateAnimatedWidgetTransform(self);
}
