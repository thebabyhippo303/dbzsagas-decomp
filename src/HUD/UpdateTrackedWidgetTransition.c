/* HUD__UpdateTrackedWidgetTransition @ 0x8010E8A4 (size: 0x234, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed short s16;
typedef int s32;
typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
extern f32 lbl_803263D8 __attribute__((section(".data")));
extern f32 lbl_803263DC __attribute__((section(".data")));
extern f32 lbl_803263E0 __attribute__((section(".data")));
extern f32 lbl_803263E4 __attribute__((section(".data")));
extern f32 lbl_803263E8 __attribute__((section(".data")));
extern f32 lbl_803A35BC __attribute__((section(".data")));
extern void HUD__DestroyTrackedWidget(void *);
typedef f32 (*GetValueFn)(void *);
typedef void (*SetValueFn)(void *, f32, f32);
typedef void (*UpdateFn)(void *);
#define GET_VALUE(w) M2C_FIELD(M2C_FIELD((w), void **, 0x19C), GetValueFn *, 0x29C)((char *)(w) + M2C_FIELD(M2C_FIELD((w), void **, 0x19C), s16 *, 0x298))
#define SET_VALUE(w, v) M2C_FIELD(M2C_FIELD((w), void **, 0x19C), SetValueFn *, 0xCC)((char *)(w) + M2C_FIELD(M2C_FIELD((w), void **, 0x19C), s16 *, 0xC8), (v), (v))
#define UPDATE_VALUE(w) M2C_FIELD(M2C_FIELD((w), void **, 0x19C), UpdateFn *, 0x3C)((char *)(w) + M2C_FIELD(M2C_FIELD((w), void **, 0x19C), s16 *, 0x38))
void HUD__UpdateTrackedWidgetTransition(void *self) {
    void *widget;
    register f32 value;
    f32 step;
    f32 cur;
    widget = M2C_FIELD(self, void **, 0x2BA4);
    if (widget == 0) return;
    if (M2C_FIELD(self, f32 *, 0x2BAC) == lbl_803263D8) {
        M2C_FIELD(self, s32 *, 0x2BA8) = 0;
        value = GET_VALUE(widget);
        step = lbl_803A35BC * lbl_803263DC;
        if (value <= lbl_803263E0) {
            if (value < lbl_803263E0) {
                value += step;
                if (value > lbl_803263E0) value = lbl_803263E0;
            }
        } else {
            value -= step;
            if (value < lbl_803263E0) value = lbl_803263E0;
        }
        widget = M2C_FIELD(self, void **, 0x2BA4);
        SET_VALUE(widget, value);
        widget = M2C_FIELD(self, void **, 0x2BA4);
        UPDATE_VALUE(widget);
        if (value <= lbl_803263E0) HUD__DestroyTrackedWidget(self);
    } else {
        value = GET_VALUE(widget);
        step = lbl_803A35BC * lbl_803263E4;
        if (value <= lbl_803263E8) {
            if (value < lbl_803263E8) {
                value += step;
                if (value > lbl_803263E8) value = lbl_803263E8;
            }
        } else {
            value -= step;
            if (value < lbl_803263E8) value = lbl_803263E8;
        }
        widget = M2C_FIELD(self, void **, 0x2BA4);
        SET_VALUE(widget, value);
        widget = M2C_FIELD(self, void **, 0x2BA4);
        UPDATE_VALUE(widget);
        cur = M2C_FIELD(self, f32 *, 0x2BAC);
        if (cur <= lbl_803263D8) {
            if (cur < lbl_803263D8) {
                cur += lbl_803A35BC;
                M2C_FIELD(self, f32 *, 0x2BAC) = cur;
                if (cur > lbl_803263D8) M2C_FIELD(self, f32 *, 0x2BAC) = lbl_803263D8;
            }
        } else {
            cur -= lbl_803A35BC;
            M2C_FIELD(self, f32 *, 0x2BAC) = cur;
            if (cur < lbl_803263D8) M2C_FIELD(self, f32 *, 0x2BAC) = lbl_803263D8;
        }
    }
}
