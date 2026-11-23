/* Pickup__ConstructById @ 0x800F0ABC (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    int x;
    int y;
    int z;
} IntVec3;

typedef struct {
    char pad0[0x34];
    void *field34;
    IntVec3 pos;
    char pad1[0x198 - 0x44];
    void *field198;
    char pad2[0x1B4 - 0x19C];
    void *field1B4;
    char pad3[0x410 - 0x1B8];
    int field410;
    char pad4[0x4C8 - 0x414];
    void *field4C8;
    char pad5[0x5EC - 0x4CC];
    int typeId;
    int typeIndex;
} Pickup;

extern char lbl_803946B4[];
extern char lbl_803348C8[];
extern char lbl_803348A8[];
extern char lbl_803347D8[];
extern char lbl_80334970[];
extern char lbl_80323D0C[];

void Simple__ConstructDefault(void *self, void *def);
int Pickup__FindIndexByTypeId(int typeId);
void fn_802C2728(void *self, int value);
void Pickup__ResetImpl(void *self);

Pickup *Pickup__ConstructById(Pickup *self, int typeId, IntVec3 *pos, int param) {
    int index;
    IntVec3 *dst;
    int x;
    int z;
    int y;

    Simple__ConstructDefault(self, lbl_803946B4);
    self->field198 = lbl_803348C8;
    self->field1B4 = lbl_803348A8;
    self->field4C8 = lbl_803347D8;
    self->field34 = lbl_80334970;
    self->typeId = typeId;
    dst = &self->pos;
    x = *(volatile int *)&pos->x;
    z = *(volatile int *)&pos->z;
    y = *(volatile int *)&pos->y;
    *(volatile int *)&dst->x = x;
    *(volatile int *)&dst->z = z;
    *(volatile int *)&dst->y = y;
    index = Pickup__FindIndexByTypeId(typeId);
    self->typeIndex = index;
    if (index >= 0) {
        fn_802C2728(self, *(int *)(lbl_80323D0C + index * 76));
    }
    if (param >= 0) {
        self->field410 = param;
    }
    Pickup__ResetImpl(self);
    return self;
}
