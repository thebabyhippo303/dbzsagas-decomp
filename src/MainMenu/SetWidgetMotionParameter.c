/* MainMenu__SetWidgetMotionParameter @ 0x8013022C (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-match MainMenu__SetWidgetMotionParameter @ 0x8013022C (0x50). */
extern void MainMenu__UpdateAnimatedWidgetTransform(void *widget);

void MainMenu__SetWidgetMotionParameter(void *self, float value) {
    char *widget;
    int count;

    widget = (char *)self + 832;
    count = 4;
    do {
        *(float *)(widget + 432) = value;
        MainMenu__UpdateAnimatedWidgetTransform(widget);
        widget += 448;
        count -= 1;
    } while (count != 0);
}
