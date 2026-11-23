/* HUD__DestroyBossStatBarWidgetGroup @ 0x80121BE4 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: HUD__DestroyBossStatBarWidgetGroup @ 0x80121BE4 (0xB4). ProDG -O2. */
#define NULL 0
typedef short s16;
typedef int s32;

typedef void (*BossStatBarWidgetFn)(void *self, s32 mode);

void fn_801843CC(void *self);

void HUD__DestroyBossStatBarWidgetGroup(char *self, s32 flags) {
    char *widget;
    char *vt;

    widget = *(char **)(self + 4);
    if (widget != NULL) {
        vt = *(char **)(widget + 0x19C);
        ((BossStatBarWidgetFn)*(void **)(vt + 0xC))(widget + *(s16 *)(vt + 0x8), 3);
    }
    widget = *(char **)(self + 8);
    if (widget != NULL) {
        vt = *(char **)(widget + 0x19C);
        ((BossStatBarWidgetFn)*(void **)(vt + 0xC))(widget + *(s16 *)(vt + 0x8), 3);
    }
    widget = *(char **)(self + 0xC);
    if (widget != NULL) {
        vt = *(char **)(widget + 0x19C);
        ((BossStatBarWidgetFn)*(void **)(vt + 0xC))(widget + *(s16 *)(vt + 0x8), 3);
    }
    if (flags & 1) {
        fn_801843CC(self);
    }
}
