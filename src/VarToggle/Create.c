/* VarToggle__Create @ 0x8018AF18 (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* VarToggle__Create @ 0x8018AF18 */

typedef struct VarToggleVTable {
    char pad[8];
    short thisAdjustment;
    short padA;
    void (*destroy)(void *self, int flags);
} VarToggleVTable;

typedef struct VarToggle {
    char pad[4];
    VarToggleVTable *vtable;
} VarToggle;

extern void *fn_8018C3E0(void *a0, void *a1);
extern void fn_8018E504(void *obj, void *a3, void *a2);
extern void *fn_801842C4(unsigned int size);
extern void *VarToggle__Init(void *self, void *a2, void *a3, void *a4, void *a5);
extern int fn_8018E1DC(void *obj, void *created);
extern int lbl_803DCC18;

int VarToggle__Create(void *a0, void *a1, void *a2, void *a3, void *a4, void *a5) {
    void *obj;
    VarToggle *created;
    VarToggleVTable *vtable;
    int enabled;

    obj = fn_8018C3E0(a0, a1);
    if (obj == 0) {
        return 0;
    }
    fn_8018E504(obj, a3, a2);
    enabled = lbl_803DCC18 != 0;
    if (enabled != 0) {
        return 1;
    }
    created = VarToggle__Init(fn_801842C4(68), a2, a3, a4, a5);
    if (created == 0) {
        return 0;
    }
    if (fn_8018E1DC(obj, created) != 0) {
        return 1;
    }
    vtable = created->vtable;
    vtable->destroy((char *)created + vtable->thisAdjustment, 3);
    return 0;
}
