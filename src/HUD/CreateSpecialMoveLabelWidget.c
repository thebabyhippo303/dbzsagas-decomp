/* HUD__CreateSpecialMoveLabelWidget @ 0x8010A7EC (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef short s16;
typedef float f32;

typedef struct {
    char pad0[0xE8];
    s16 setPosAdjust;
    char pad1[2];
    void (*setPos)(void *, f32, f32);
    char pad2[0x1B0 - 0xF0];
    s16 setTextAdjust;
    char pad3[2];
    void (*setText)(void *, s32);
} WidgetVtbl;

typedef struct {
    char pad[0x19C];
    WidgetVtbl *vtbl;
} Widget;

typedef struct {
    char pad[0x4D4];
    Widget *label;
} Hud;

extern f32 lbl_803261C8 __attribute__((section(".data")));
extern f32 lbl_803261CC __attribute__((section(".data")));
Widget *fn_800FF32C(f32, f32, f32);

void HUD__CreateSpecialMoveLabelWidget(void *unused, Hud *hud, f32 x, f32 y) {
    if (hud->label == 0) {
        Widget *w = fn_800FF32C(x, y, lbl_803261C8);
        hud->label = w;
        w->vtbl->setPos((char *)w + w->vtbl->setPosAdjust, lbl_803261CC, lbl_803261C8);
        hud->label->vtbl->setText((char *)hud->label + hud->label->vtbl->setTextAdjust, 0x1D80);
    }
}
