/* MinimapSpriteMarker__Show @ 0x8004BD90 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-match MinimapSpriteMarker__Show @ 0x8004BD90 (0x48). */
typedef void (*MinimapShowFn)(void *self);

extern void Minimap__ShowActorMarkerWidget(void *self);

void MinimapSpriteMarker__Show(void *self) {
    char *subobject;
    char *vtable;
    short adjustment;
    MinimapShowFn show;

    Minimap__ShowActorMarkerWidget(self);
    subobject = *(char **)((char *)self + 12);
    vtable = *(char **)(subobject + 412);
    adjustment = *(short *)(vtable + 456);
    show = *(MinimapShowFn *)(vtable + 460);
    show(subobject + adjustment);
}
