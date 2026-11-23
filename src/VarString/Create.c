/* VarString__Create @ 0x8018AFF0 (size: 0xE8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarString__Create @ 0x8018AFF0 (0xE8). ProDG -O2. */
typedef struct VarStringVTable {
    char pad[8];
    short thisAdjustment;
    short padA;
    void (*destroy)(void *self, int flags);
} VarStringVTable;

typedef struct VarString {
    char pad[4];
    VarStringVTable *vtable;
} VarString;

extern void *fn_8018C3E0(void *a0, void *a1);
extern void fn_8018E504(void *obj, void *a3, void *a2);
extern void *fn_801842C4(unsigned int size);
extern VarString *VarString__Init(void *self, void *a5, void *a2, void *a3, void *a4, void *a6, void *a7);
extern int fn_8018E1DC(void *obj, void *created);
extern int lbl_803DCC18;

int VarString__Create(void *a0, void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7) {
    void *obj;
    VarString *created;
    VarStringVTable *vtable;
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
    created = VarString__Init(fn_801842C4(72), a5, a2, a3, a4, a6, a7);
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
