/* HUD__UpdateBossStatBarHealthFill @ 0x80122A08 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
/* HUD__UpdateBossStatBarHealthFill @ 0x80122A08 */

extern float lbl_80327430 __attribute__((section(".data")));
extern float lbl_80327434 __attribute__((section(".data")));
extern float lbl_80327438 __attribute__((section(".data")));

typedef struct BossStatBarFillVTable {
    char pad[0x2D0];
    short thisAdjustment;
    short pad_2D2;
    void (*setFill)(void *self, float a, float b, float c, float d);
} BossStatBarFillVTable;

typedef struct BossStatBarFillWidget {
    char pad[0x19C];
    BossStatBarFillVTable *vtable;
} BossStatBarFillWidget;

typedef struct BossStatBarUpdateVTable {
    char pad[0x38];
    short thisAdjustment;
    short pad_3A;
    void (*update)(void *self);
} BossStatBarUpdateVTable;

typedef struct BossStatBarUpdateWidget {
    char pad[0x19C];
    BossStatBarUpdateVTable *vtable;
} BossStatBarUpdateWidget;

typedef struct BossStatBarHealthGroup {
    char pad[4];
    void *widget;
} BossStatBarHealthGroup;

void HUD__UpdateBossStatBarHealthFill(BossStatBarHealthGroup *group, float health) {
    BossStatBarFillWidget *fillWidget;
    BossStatBarFillVTable *fillVtable;
    BossStatBarUpdateWidget *updateWidget;
    BossStatBarUpdateVTable *updateVtable;
    float full;

    fillWidget = group->widget;
    fillVtable = fillWidget->vtable;
    full = lbl_80327430;
    fillVtable->setFill((char *)fillWidget + fillVtable->thisAdjustment, lbl_80327438,
                        (full - health) * lbl_80327434, full, full);

    updateWidget = group->widget;
    updateVtable = updateWidget->vtable;
    updateVtable->update((char *)updateWidget + updateVtable->thisAdjustment);
}
