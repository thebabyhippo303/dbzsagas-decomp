/* Pickup__Construct @ 0x800F0B90 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct { int x, y, z; } V3;

extern void Simple__ConstructDefault(void *self, void *type);
extern void Pickup__SetTypeByName(void *self, char *name);
extern void fn_802C2728(void *self, char *name);
extern void Pickup__ResetImpl(void *self);

extern char lbl_803946B4[] __attribute__((section(".data")));
extern char lbl_80334970[] __attribute__((section(".data")));
extern char lbl_803348C8[] __attribute__((section(".data")));
extern char lbl_803348A8[] __attribute__((section(".data")));
extern char lbl_803347D8[] __attribute__((section(".data")));

void *Pickup__Construct(char *self, char *name, V3 *pos) {
    Simple__ConstructDefault(self, lbl_803946B4);
    *(void **)(self + 0x198) = lbl_803348C8;
    *(void **)(self + 0x1B4) = lbl_803348A8;
    *(void **)(self + 0x4C8) = lbl_803347D8;
    *(int *)(self + 0x5F0) = -1;
    *(void **)(self + 0x34) = lbl_80334970;
    Pickup__SetTypeByName(self, name);
    *(V3 *)(self + 0x38) = *pos;
    fn_802C2728(self, name);
    Pickup__ResetImpl(self);
    return self;
}
