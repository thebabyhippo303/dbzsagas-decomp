/* HUD__ClearHourglassTimerWidgets @ 0x8010F0DC (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: HUD__ClearHourglassTimerWidgets @ 0x8010F0DC (0x84). ProDG -O2. */
typedef struct HUDWidget HUDWidget;
typedef struct HUDWidgetVTable HUDWidgetVTable;
typedef void (*HUDWidgetDestroy)(void *subobject, int mode);

struct HUDWidgetVTable {
    char pad[8];
    short thisAdjustment;
    HUDWidgetDestroy destroy;
};

struct HUDWidget {
    char pad[0x19C];
    HUDWidgetVTable *vtable;
};

typedef struct {
    char pad[0x2BBC];
    HUDWidget * volatile hourglassWidgetA;
    HUDWidget * volatile hourglassWidgetB;
} HUD;

void HUD__ClearHourglassTimerWidgets(HUD *self) {
    HUDWidget *widget;

    widget = self->hourglassWidgetB;
    if (widget)
        widget->vtable->destroy((char *)widget + widget->vtable->thisAdjustment, 3);
    widget = self->hourglassWidgetA;
    if (widget)
        widget->vtable->destroy((char *)widget + widget->vtable->thisAdjustment, 3);
    self->hourglassWidgetA = 0;
    self->hourglassWidgetB = 0;
}
