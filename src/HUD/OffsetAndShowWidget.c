/* HUD__OffsetAndShowWidget @ 0x8010BB3C (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* HUD__OffsetAndShowWidget @ 0x8010BB3C */
typedef struct {
    char pad0[56];
    short showOff;
    short pad58;
    void (*show)(void *self);
    char pad64[104];
    short setOff;
    short pad170;
    void (*setPos)(void *self, float x, float y);
    short getOff;
    short pad178;
    void (*getPos)(void *self, float *x, float *y);
} WidgetVtable;

void HUD__OffsetAndShowWidget(void *hud, void *widget, float dx, float dy) {
    WidgetVtable *vt;
    float x;
    float y;

    if (widget == 0) {
        return;
    }
    vt = *(WidgetVtable *volatile *)((char *)widget + 412);
    vt->getPos((char *)widget + vt->getOff, &x, &y);
    vt = *(WidgetVtable *volatile *)((char *)widget + 412);
    vt->setPos((char *)widget + vt->setOff, x + dx, y + dy);
    vt = *(WidgetVtable *volatile *)((char *)widget + 412);
    vt->show((char *)widget + vt->showOff);
}
