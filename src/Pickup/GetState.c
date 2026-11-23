/* Pickup__GetState @ 0x800F22D8 (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[2];
    unsigned short flags;
} PickupBits;

typedef struct {
    char pad[8];
    unsigned int flags;
} PickupObj;

typedef struct {
    char pad[0x1B8];
    short adjust;
    char pad2[2];
    int (*query)(void *self);
} PickupVtbl;

typedef struct Pickup {
    char pad0[0x34];
    PickupVtbl *vt;
    char pad1[0x84 - 0x38];
    PickupBits *bits;
    char pad2[0x200 - 0x88];
    int state;
    char pad3[0x258 - 0x204];
    int field258;
    char pad4[0x3C0 - 0x25C];
    int field3C0;
    char pad5[0x554 - 0x3C4];
    int field554;
    char pad6[0x5F4 - 0x558];
    PickupObj *obj;
    int field5F8;
} Pickup;

int Pickup__GetState(Pickup *pickup) {
    int state;
    int flag;

    state = pickup->state;
    if (state != -1) {
        return state;
    }
    if (pickup->field258 == 0) {
        return 0;
    }
    if (pickup->bits->flags & 1) {
        return 0;
    }
    if (pickup->field5F8 != 0) {
        return 0;
    }
    if (pickup->obj != 0 && (pickup->obj->flags & 0x40) == 0) {
        return 5;
    }
    if (pickup->field554 != 0) {
        return 2;
    }
    flag = 1;
    if (pickup->field3C0 == 0) {
        flag = 0;
    }
    if (flag != 0) {
        return 0;
    }
    if (pickup->vt->query((char *)pickup + pickup->vt->adjust) != 0) {
        return 5;
    }
    return 7;
}
