/* HUD__HideBossStatBarWidgets @ 0x80121E90 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct BossStatBarHideVTable {
    char pad[0x1D8];
    short thisAdjustment;
    short pad_1DA;
    void (*hide)(void *self);
} BossStatBarHideVTable;

typedef struct BossStatBarHideWidget {
    char pad[0x19C];
    BossStatBarHideVTable *vtable;
} BossStatBarHideWidget;

typedef struct BossStatBarHideGroup {
    char pad[4];
    BossStatBarHideWidget *widgets[3];
} BossStatBarHideGroup;

void HUD__HideBossStatBarWidgets(BossStatBarHideGroup *group) {
    BossStatBarHideWidget *widget;
    BossStatBarHideVTable *vtable;

    widget = group->widgets[0];
    vtable = widget->vtable;
    vtable->hide((char *)widget + vtable->thisAdjustment);

    widget = group->widgets[1];
    vtable = widget->vtable;
    vtable->hide((char *)widget + vtable->thisAdjustment);

    widget = group->widgets[2];
    vtable = widget->vtable;
    vtable->hide((char *)widget + vtable->thisAdjustment);
}
