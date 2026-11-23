/* HUD__UpdateStarBeepWidget @ 0x8010A0C4 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct StarBeepVTable {
    char pad[8];
    short thisAdjust;
    char padA[2];
    void (*destroy)(void *self, int flags);
    char pad10[0xA0];
    short getAdjust;
    char padB2[2];
    void (*getPosition)(void *self, float *x, float *y);
} StarBeepVTable;

typedef struct StarBeepWidget {
    char pad[0x19C];
    StarBeepVTable *vtable;
} StarBeepWidget;

typedef struct HUDStarBeep {
    char pad[1104];
    StarBeepWidget *actors[11];
    StarBeepWidget *mid[11];
    StarBeepWidget *slots[11];
} HUDStarBeep;

extern StarBeepWidget *HUD__CreateStarBeepWidget(void *owner, float x, float y);

void HUD__UpdateStarBeepWidget(void *owner, HUDStarBeep *hud, int index) {
    StarBeepWidget *actor = hud->actors[index];
    StarBeepWidget *widget;
    StarBeepVTable *vtable;
    float x;
    float y;

    if (actor == 0) {
        return;
    }
    vtable = actor->vtable;
    vtable->getPosition((char *)actor + vtable->getAdjust, &x, &y);
    widget = hud->slots[index];
    if (widget != 0) {
        vtable = widget->vtable;
        vtable->destroy((char *)widget + vtable->thisAdjust, 3);
        hud->slots[index] = 0;
    }
    hud->slots[index] = HUD__CreateStarBeepWidget(owner, x, y);
}
