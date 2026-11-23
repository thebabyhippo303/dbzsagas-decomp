/* HUD__ClearWidgetCollections @ 0x8010E100 (size: 0x130, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: HUD__ClearWidgetCollections @ 0x8010E100 (0x130). ProDG -O2. */
typedef struct WidgetVtbl {
    short adj;
    short pad;
    void (*dtor)(void *, int);
} WidgetVtbl;

typedef struct HudWidget {
    char pad[0x19C];
    char *vt;
} HudWidget;

#define DESTROY_WIDGET(w) \
    do { \
        char *vt_ = *(char **)((char *)(w) + 0x19C); \
        (*(void (**)(void *, int))(vt_ + 0xC))((char *)(w) + *(short *)(vt_ + 8), 3); \
    } while (0)

void HUD__ClearWidgetCollections(char *hud) {
    void *w;
    int i;
    char *a, *b, *c;

    w = *(void **)(hud + 0x1234);
    if (w != 0) {
        DESTROY_WIDGET(w);
    }
    *(void **)(hud + 0x1234) = 0;
    a = hud + 0x1238;
    b = hud + 0xFB4;
    c = hud + 0x1034;
    for (i = 0; i < 8; i++) {
        w = ((void **)a)[i];
        if (w != 0) {
            DESTROY_WIDGET(w);
        }
        ((void **)a)[i] = 0;
    }
    for (i = 0; i < 32; i++) {
        w = ((void **)b)[i];
        if (w != 0) {
            DESTROY_WIDGET(w);
        }
        ((void **)b)[i] = 0;
    }
    for (i = 0; i < 128; i++) {
        w = ((void **)c)[i];
        if (w != 0) {
            DESTROY_WIDGET(w);
        }
        ((void **)c)[i] = 0;
    }
}
