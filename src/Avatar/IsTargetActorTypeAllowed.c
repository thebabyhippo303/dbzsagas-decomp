/* Avatar__IsTargetActorTypeAllowed @ 0x800E3CC4 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
int Avatar__IsTargetActorTypeAllowed(void *self, int *actor, int *kind) {
    int type;

    (void)self;
    type = kind[0x544 / 4];
    if (type != 4) {
        goto not4;
    }
    if (actor[0x7E4 / 4] != 0) {
        goto ret0;
    }
    if (actor[0x2D4 / 4] != 0) {
        goto ret0;
    }
ret1:
    return 1;
not4:
    if (type != 7) {
        goto ret0;
    }
    if (actor[0x2D4 / 4] != 0) {
        goto ret1;
    }
    if (actor[0x7E4 / 4] != 0) {
        goto ret1;
    }
ret0:
    return 0;
}
