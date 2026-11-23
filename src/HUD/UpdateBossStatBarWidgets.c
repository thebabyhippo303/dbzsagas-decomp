/* HUD__UpdateBossStatBarWidgets @ 0x80121F44 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* HUD__UpdateBossStatBarWidgets @ 0x80121F44 */

typedef struct BossStatBarUpdateVTable {
    char pad[0x38];
    short thisAdjustment;
    short pad_3A;
    void (*update)(void *self);
} BossStatBarUpdateVTable;

typedef struct BossStatBarUpdateWidget {
    char pad[0x19C];
    BossStatBarUpdateVTable *vtable;
} BossStatBarUpdateWidget;

typedef struct BossStatBarUpdateGroup {
    char pad[4];
    BossStatBarUpdateWidget *widgets[3];
} BossStatBarUpdateGroup;

void HUD__UpdateBossStatBarWidgets(BossStatBarUpdateGroup *group) {
    BossStatBarUpdateWidget *widget;
    BossStatBarUpdateVTable *vtable;

    widget = group->widgets[0];
    vtable = widget->vtable;
    vtable->update((char *)widget + vtable->thisAdjustment);

    widget = group->widgets[1];
    vtable = widget->vtable;
    vtable->update((char *)widget + vtable->thisAdjustment);

    widget = group->widgets[2];
    vtable = widget->vtable;
    vtable->update((char *)widget + vtable->thisAdjustment);
}
