/* MinimapSpriteMarker__UpdateWidget @ 0x80118DF0 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MinimapSpriteMarker__UpdateWidget @ 0x80118DF0 (0x38). ProDG -O2. */
typedef void (*MinimapUpdateFn)(void *self);

void MinimapSpriteMarker__UpdateWidget(void **arg) {
    char *self = (char *)*arg;
    char *vtable = *(char **)(self + 412);
    int adjustment = *(short *)(vtable + 56);
    MinimapUpdateFn update = *(MinimapUpdateFn *)(vtable + 60);
    update(self + adjustment);
}
