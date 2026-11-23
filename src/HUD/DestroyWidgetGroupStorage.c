/* HUD__DestroyWidgetGroupStorage @ 0x8010B294 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct Vt { char pad[8]; short adj; short pad2; void (*dtor)(void *, s32); } Vt;
typedef struct Widget { char pad[0x19C]; Vt *vt; } Widget;
typedef struct Store { Widget *a[48]; Widget *b[2]; } Store;
void HUD__DestroyWidgetGroupStorage(void *unused, Store *s) {
    s32 i;
    for (i = 0; i < 48; i++) {
        Widget *w = s->a[i];
        if (w != 0) { w->vt->dtor((char *)w + w->vt->adj, 3); s->a[i] = 0; }
    }
    for (i = 0; i < 2; i++) {
        Widget *w = s->b[i];
        if (w != 0) { w->vt->dtor((char *)w + w->vt->adj, 3); s->b[i] = 0; }
    }
}
