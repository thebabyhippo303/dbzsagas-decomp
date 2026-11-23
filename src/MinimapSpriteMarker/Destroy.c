/* MinimapSpriteMarker__Destroy @ 0x8004BCB8 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MinimapSpriteMarker__Destroy @ 0x8004BCB8 (0x6C). ProDG -O2. */
typedef unsigned int u32;
typedef void (*MinimapDestroyFn)(void *self, int mode);

extern void Minimap__DestroyActorMarkerWidget(void *self, u32 arg);
extern char lbl_80318078[] __attribute__((section(".data")));

void MinimapSpriteMarker__Destroy(void *arg0, u32 arg1) {
    char *subobject;
    char *vtable;
    short adjustment;
    MinimapDestroyFn destroy;

    subobject = *(char **)((char *)arg0 + 12);
    *(char **)((char *)arg0 + 8) = lbl_80318078;
    if (subobject != 0) {
        vtable = *(char **)(subobject + 412);
        adjustment = *(short *)(vtable + 8);
        destroy = *(MinimapDestroyFn *)(vtable + 12);
        destroy(subobject + adjustment, 3);
    }
    Minimap__DestroyActorMarkerWidget(arg0, arg1);
}
