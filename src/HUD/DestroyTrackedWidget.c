/* HUD__DestroyTrackedWidget @ 0x8010EAD8 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: HUD__DestroyTrackedWidget @ 0x8010EAD8 (0x5C). ProDG -O2. */
typedef struct {
	char pad[8];
	short this_adjust;
	char pad2[2];
	void (*destroy)(void *self, int flags);
} WidgetVtable;

typedef struct {
	char pad[0x19C];
	WidgetVtable *vtable;
} TrackedWidget;

typedef struct {
	char pad[0x2BA4];
	TrackedWidget * volatile widget;
	void * volatile widget_data;
} HUD;

void HUD__DestroyTrackedWidget(HUD *self) {
	TrackedWidget *widget = self->widget;
	if (widget != 0) {
		widget->vtable->destroy((void *)((char *)widget + widget->vtable->this_adjust), 3);
		self->widget_data = 0;
		self->widget = 0;
	}
}
