/* HUD__ResetStarBeepWidgetSlots @ 0x80109ACC (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
void HUD__ResetStarBeepWidgetSlots(void *unused, char *base) {
    s32 i;
    char *p = base + 0x4A8;
    for (i = 0; i < 11; i++) {
        *(s32 *)(p - 0x58) = 0;
        *(s32 *)(p - 0x2C) = 0;
        *(s32 *)p = 0;
        p += 4;
    }
}
