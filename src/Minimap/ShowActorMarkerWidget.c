/* Minimap__ShowActorMarkerWidget @ 0x80118D48 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Minimap__ShowActorMarkerWidget @ 0x80118D48 (0x38). ProDG -O2. */
typedef void (*MinimapShowFn)(void *self);

void Minimap__ShowActorMarkerWidget(void **arg) {
    char *self = (char *)*arg;
    char *vtable = *(char **)(self + 412);
    int adjustment = *(short *)(vtable + 456);
    MinimapShowFn show = *(MinimapShowFn *)(vtable + 460);
    show(self + adjustment);
}
