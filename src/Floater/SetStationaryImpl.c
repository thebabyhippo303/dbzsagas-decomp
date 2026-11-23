/* Floater__SetStationaryImpl @ 0x802B4D54 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[0x4D0];
    int stationary;
} FloaterState;

void fn_802CB514(void *self);

void Floater__SetStationaryImpl(FloaterState *self, int stationary) {
    self->stationary = stationary;
    fn_802CB514(self);
}
