/* MinimapSpriteMarker__Hide @ 0x8004BDD8 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MinimapSpriteMarker__Hide @ 0x8004BDD8 (0x48). ProDG -O2. */
typedef void (*MinimapHideFn)(void *self);

extern void Minimap__HideActorMarkerWidget(void *self);

void MinimapSpriteMarker__Hide(void *self) {
    char *subobject;
    char *vtable;
    short adjustment;
    MinimapHideFn hide;

    Minimap__HideActorMarkerWidget(self);
    subobject = *(char **)((char *)self + 12);
    vtable = *(char **)(subobject + 412);
    adjustment = *(short *)(vtable + 472);
    hide = *(MinimapHideFn *)(vtable + 476);
    hide(subobject + adjustment);
}
