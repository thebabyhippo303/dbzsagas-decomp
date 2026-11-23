/* HUD__UpdatePlayerWidgetGroupsAndLayout @ 0x8010CF30 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef float f32; typedef short s16;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void HUD__UpdatePlayerWidgetGroups(void *, void *);

extern f32 lbl_803262F4 __attribute__((section(".data")));
extern f32 lbl_803262F8 __attribute__((section(".data")));
extern f32 lbl_803262FC __attribute__((section(".data")));
extern f32 lbl_80326300 __attribute__((section(".data")));

void HUD__UpdatePlayerWidgetGroupsAndLayout(void *hud) {
    void *group;
    void *obj;
    void *vt;

    HUD__UpdatePlayerWidgetGroups(hud, (char *)hud + 0x1C80);
    if (M2C_FIELD(hud, s32 *, 0x2CC8) == 0) {
        return;
    }
    HUD__UpdatePlayerWidgetGroups(hud, (char *)hud + 0x218C);
    group = M2C_FIELD(hud, void **, 0x1C80);
    if (group == NULL) {
        return;
    }
    obj = M2C_FIELD(group, void **, 0xB8C);
    vt = M2C_FIELD(obj, void **, 0x57C);
    if (M2C_FIELD(vt, s32 (**)(void *), 0x64)(obj + M2C_FIELD(vt, s16 *, 0x60)) != 0) {
        f32 star = lbl_803262F4;
        f32 a = lbl_803262F8;
        f32 b = lbl_803262FC;
        M2C_FIELD(hud, f32 *, 0x2170) = a;
        M2C_FIELD(hud, f32 *, 0x216C) = star;
        M2C_FIELD(hud, f32 *, 0x2678) = star;
        M2C_FIELD(hud, f32 *, 0x267C) = b;
        return;
    }
    {
        f32 b = lbl_803262FC;
        f32 star = lbl_803262F4;
        f32 c = lbl_80326300;
        M2C_FIELD(hud, f32 *, 0x216C) = star;
        M2C_FIELD(hud, f32 *, 0x2678) = c;
        M2C_FIELD(hud, f32 *, 0x2170) = b;
        M2C_FIELD(hud, f32 *, 0x267C) = b;
    }
}
