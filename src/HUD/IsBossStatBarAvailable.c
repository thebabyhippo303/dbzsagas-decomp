/* HUD__IsBossStatBarAvailable @ 0x80121F0C (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[0x280];
    short adjust;
    short pad2;
    void (*available)(void *self);
} BossStatBarVTable;
typedef struct {
    char pad[0x19C];
    BossStatBarVTable *vtable;
} BossStatBarWidget;
typedef struct {
    char pad[0xC];
    BossStatBarWidget *widget;
} HUDOwner;

void HUD__IsBossStatBarAvailable(HUDOwner *owner) {
    BossStatBarWidget *widget = owner->widget;
    BossStatBarVTable *vtable = widget->vtable;
    vtable->available((char *)widget + vtable->adjust);
}
