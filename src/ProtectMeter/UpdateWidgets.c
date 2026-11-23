/* ProtectMeter__UpdateWidgets @ 0x8011FFD0 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[456];
    short adjust;
    char pad2[2];
    void (*update)(void *self);
} ProtectWidgetVtable;

typedef struct {
    char pad[412];
    ProtectWidgetVtable *vtable;
} ProtectWidget;

typedef struct {
    char pad[4];
    ProtectWidget *a;
    ProtectWidget *b;
    ProtectWidget *c;
} ProtectMeter;

void ProtectMeter__UpdateWidgets(ProtectMeter *self) {
    ProtectWidget *widget;

    widget = self->a;
    widget->vtable->update((char *)widget + widget->vtable->adjust);
    widget = self->b;
    widget->vtable->update((char *)widget + widget->vtable->adjust);
    widget = self->c;
    widget->vtable->update((char *)widget + widget->vtable->adjust);
}
