/* HUD__InitializeWidgetGroupSlots @ 0x8010F554 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

extern f32 lbl_80326490 __attribute__((section(".data")));

void HUD__InitializeWidgetGroupSlots(void *unused, char *arg1) {
    s32 i;
    char *p = arg1 + 0x2DC;
    f32 v = lbl_80326490;
    for (i = 0; i < 24; i++) {
        *(s32 *)(p - 12) = 0;
        *(s32 *)(p - 8) = 0;
        *(f32 *)(p - 4) = v;
        *(s32 *)p = 0;
        p += 16;
    }
}
