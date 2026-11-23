/* HUD__ShowBossStatBarWidgets @ 0x80121E14 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* HUD__ShowBossStatBarWidgets @ 0x80121E14 */

typedef struct BossStatBarShowVTable {
    char pad[0x1C8];
    short thisAdjustment;
    short pad_1CA;
    void (*show)(void *self);
} BossStatBarShowVTable;

typedef struct BossStatBarShowWidget {
    char pad[0x19C];
    BossStatBarShowVTable *vtable;
} BossStatBarShowWidget;

typedef struct BossStatBarShowGroup {
    char pad[4];
    BossStatBarShowWidget *widgets[3];
} BossStatBarShowGroup;

void HUD__ShowBossStatBarWidgets(BossStatBarShowGroup *group) {
    BossStatBarShowWidget *widget;
    BossStatBarShowVTable *vtable;

    widget = group->widgets[0];
    vtable = widget->vtable;
    vtable->show((char *)widget + vtable->thisAdjustment);

    widget = group->widgets[1];
    vtable = widget->vtable;
    vtable->show((char *)widget + vtable->thisAdjustment);

    widget = group->widgets[2];
    vtable = widget->vtable;
    vtable->show((char *)widget + vtable->thisAdjustment);
}
