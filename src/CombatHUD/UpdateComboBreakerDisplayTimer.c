/* CombatHUD__UpdateComboBreakerDisplayTimer @ 0x8010E230 (size: 0xEC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;
typedef struct VEnt { short off; short pad; void (*fn)(void *); } VEnt;
typedef struct VTab { char pad[0x38]; VEnt e; } VTab;
typedef struct Obj { char pad[0x19C]; VTab *vt; } Obj;
typedef struct Hud {
    char pad0[0x2BB0];
    Obj *o1;
    Obj *o2;
    f32 timer;
} Hud;

void CombatHUD__ClearComboBreakerText(Hud *);
extern f32 lbl_8032637C __attribute__((section(".data")));
extern f32 lbl_803A35BC __attribute__((section(".data")));

void CombatHUD__UpdateComboBreakerDisplayTimer(Hud *h) {
    f32 z = lbl_8032637C;
    f32 t = h->timer;
    f32 d;
    if (!(t <= z)) {
        d = lbl_803A35BC;
        if (!(t <= z)) {
            h->timer = t - d;
            if (!(h->timer >= z)) {
                h->timer = z;
            }
        } else {
            if (!(t >= z)) {
                h->timer = t + d;
                if (!(h->timer <= z)) {
                    h->timer = z;
                }
            }
        }
        if (h->timer == lbl_8032637C) {
            CombatHUD__ClearComboBreakerText(h);
        }
        if (h->o1 != 0) {
            h->o1->vt->e.fn((char *)h->o1 + h->o1->vt->e.off);
        }
        if (h->o2 != 0) {
            h->o2->vt->e.fn((char *)h->o2 + h->o2->vt->e.off);
        }
    }
}
