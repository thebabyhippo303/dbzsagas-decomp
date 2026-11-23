/* HUD__DestroyBossPlayerStatWidgetGroup @ 0x80122000 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: HUD__DestroyBossPlayerStatWidgetGroup @ 0x80122000 (0xC8). ProDG -O2. */
typedef struct WidgetVt {
    char pad[8];
    short delta;
    char pad2[2];
    void (*destroy)(void *self, int mode);
} WidgetVt;

typedef struct Widget {
    char pad[0x19C];
    WidgetVt *vt;
} Widget;

typedef struct BossStatGroup {
    Widget *volatile first;
    Widget *volatile second;
    Widget *volatile third;
    volatile int extra;
} BossStatGroup;

extern void fn_801843CC(void *ptr);

void HUD__DestroyBossPlayerStatWidgetGroup(BossStatGroup *group, int flags) {
    Widget *widget;
    WidgetVt *vt;

    widget = group->third;
    if (widget != 0) {
        vt = widget->vt;
        vt->destroy((char *)widget + vt->delta, 3);
    }
    widget = group->second;
    if (widget != 0) {
        vt = widget->vt;
        vt->destroy((char *)widget + vt->delta, 3);
    }
    widget = group->first;
    if (widget != 0) {
        vt = widget->vt;
        vt->destroy((char *)widget + vt->delta, 3);
    }
    group->extra = 0;
    group->first = 0;
    group->second = 0;
    group->third = 0;
    if (flags & 1) {
        fn_801843CC(group);
    }
}
