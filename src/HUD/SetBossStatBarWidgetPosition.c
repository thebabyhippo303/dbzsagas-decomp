/* HUD__SetBossStatBarWidgetPosition @ 0x801223BC (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* HUD__SetBossStatBarWidgetPosition @ 0x801223BC */

typedef struct BossStatBarVTable {
    char pad[0xA8];
    short thisAdjustment;
    short pad_AA;
    void (*setPosition)(void *self, float x, float y);
} BossStatBarVTable;

typedef struct BossStatBarWidget {
    char pad[0x19C];
    BossStatBarVTable *vtable;
} BossStatBarWidget;

typedef struct BossStatBarGroup {
    BossStatBarWidget *widgets[3];
} BossStatBarGroup;

void HUD__SetBossStatBarWidgetPosition(BossStatBarGroup *group, float x, float y) {
    BossStatBarWidget *widget;
    BossStatBarVTable *vtable;

    widget = group->widgets[0];
    vtable = widget->vtable;
    vtable->setPosition((char *)widget + vtable->thisAdjustment, x, y);

    widget = group->widgets[1];
    vtable = widget->vtable;
    vtable->setPosition((char *)widget + vtable->thisAdjustment, x, y);

    widget = group->widgets[2];
    vtable = widget->vtable;
    vtable->setPosition((char *)widget + vtable->thisAdjustment, x, y);
}
