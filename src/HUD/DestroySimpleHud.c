/* HUD__DestroySimpleHud @ 0x8010D214 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void HUD__DestroyWidgetGroupStorage(void *hud, void *storage);

typedef struct {
    char pad[8];
    short adjust;
    char pad2[2];
    void (*destroy)(void *self, int mode);
} HudWidgetVtable;

typedef struct {
    char pad[0x19C];
    HudWidgetVtable *vtable;
} HudWidget;

void HUD__DestroySimpleHud(void *hud) {
    HudWidget *widget;
    char *base;
    int index;
    int remaining;
    void *cleared;

    HUD__DestroyWidgetGroupStorage(hud, (char *)hud + 9884);
    widget = *(HudWidget **)((char *)hud + 10584);
    if (widget != 0) {
        widget->vtable->destroy((char *)widget + widget->vtable->adjust, 3);
    }
    base = (char *)hud + 10568;
    *(HudWidget **)((char *)hud + 10584) = 0;
    cleared = 0;
    index = 0;
    remaining = 4;
    do {
        widget = *(HudWidget **)((char *)(index + (int)base));
        if (widget != 0) {
            widget->vtable->destroy((char *)widget + widget->vtable->adjust, 3);
        }
        *(void **)((char *)(index + (int)base)) = cleared;
        remaining -= 1;
        index += 4;
    } while (remaining != 0);
}
