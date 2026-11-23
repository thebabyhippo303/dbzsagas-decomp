/* HUD__OffsetWidgetPosition @ 0x8010B9F4 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: HUD__OffsetWidgetPosition @ 0x8010B9F4 (0xA4). ProDG -O2. */
typedef struct HUDOffsetWidgetVTable {
	char pad[0x38];
	short updateAdjust;
	char pad3A[2];
	void (*update)(void *self);
	char pad40[0x68];
	short setAdjust;
	char padAA[2];
	void (*setPosition)(void *self, float x, float y);
	short getAdjust;
	char padB2[2];
	void (*getPosition)(void *self, float *x, float *y);
} HUDOffsetWidgetVTable;

typedef struct HUDOffsetWidget {
	char pad[0x19C];
	HUDOffsetWidgetVTable *vtable;
} HUDOffsetWidget;

void HUD__OffsetWidgetPosition(void *hud, HUDOffsetWidget *widget, float dx, float dy) {
	float x;
	float y;
	HUDOffsetWidgetVTable *vtable;

	(void)hud;
	if (widget != 0) {
		vtable = widget->vtable;
		vtable->getPosition((char *)widget + vtable->getAdjust, &x, &y);
		vtable = widget->vtable;
		vtable->setPosition((char *)widget + vtable->setAdjust, x + dx, y + dy);
		vtable = widget->vtable;
		vtable->update((char *)widget + vtable->updateAdjust);
	}
}
