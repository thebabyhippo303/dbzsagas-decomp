/* Minimap__DestroyActorMarkerWidget @ 0x80118C50 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Minimap__DestroyActorMarkerWidget @ 0x80118C50 (0x70). ProDG -O2. */
typedef struct {
    char pad[8];
    short this_adjust;
    char pad2[2];
    void (*destroy)(void *self, int flags);
} MarkerWidgetVtable;

typedef struct {
    char pad[0x19C];
    MarkerWidgetVtable *vtable;
} MarkerWidget;

typedef struct {
    MarkerWidget *widget;
    char pad[4];
    void *vtable;
} ActorMarkerWidget;

extern char lbl_8032DE80[];
extern void fn_801843CC(void *self);

void Minimap__DestroyActorMarkerWidget(ActorMarkerWidget *self, unsigned int flags) {
    MarkerWidget *widget = self->widget;

    self->vtable = lbl_8032DE80;
    if (widget != 0) {
        widget->vtable->destroy((void *)((char *)widget + widget->vtable->this_adjust), 3);
    }
    if (flags & 1) {
        fn_801843CC(self);
    }
}
