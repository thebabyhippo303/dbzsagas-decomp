/* ProtectMeter__DestroyDisplayWidgets @ 0x8012004C (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct DisplayWidgetVTable {
    char pad[0x1D8];
    short thisAdjustment;
    short pad_1DA;
    void (*destroy)(void *self);
} DisplayWidgetVTable;

typedef struct DisplayWidget {
    char pad[0x19C];
    DisplayWidgetVTable *vtable;
} DisplayWidget;

typedef struct DisplayWidgetGroup {
    char pad[4];
    DisplayWidget *widgets[3];
} DisplayWidgetGroup;

void ProtectMeter__DestroyDisplayWidgets(DisplayWidgetGroup *group) {
    DisplayWidget *widget;
    DisplayWidgetVTable *vtable;

    widget = group->widgets[0];
    vtable = widget->vtable;
    vtable->destroy((char *)widget + vtable->thisAdjustment);

    widget = group->widgets[1];
    vtable = widget->vtable;
    vtable->destroy((char *)widget + vtable->thisAdjustment);

    widget = group->widgets[2];
    vtable = widget->vtable;
    vtable->destroy((char *)widget + vtable->thisAdjustment);
}
