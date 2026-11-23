/* PickupManager__Construct @ 0x800E4E04 (size: 0x18, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct PickupManager {
    volatile int first;
    volatile int second;
    volatile int third;
} PickupManager;

PickupManager *PickupManager__Construct(PickupManager *self) {
    int zero = 0;

    self->third = zero;
    self->first = zero;
    self->second = zero;
    return self;
}
