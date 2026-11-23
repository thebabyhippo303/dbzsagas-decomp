/* MinimapSpriteMarker__UpdatePosition @ 0x8004BD24 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MinimapSpriteMarker__UpdatePosition @ 0x8004BD24 (0x6C). ProDG -O2. */
typedef void (*MinimapSetPosFn)(void *self, float x, float y);

typedef struct MinimapMarkerPos {
    float x;
    float y;
} MinimapMarkerPos;

void Minimap__SetActorMarkerWidgetPosition(void **arg, MinimapMarkerPos *pos);

void MinimapSpriteMarker__UpdatePosition(void **arg0, MinimapMarkerPos *arg1) {
    MinimapMarkerPos tmp;
    volatile MinimapMarkerPos a;
    volatile MinimapMarkerPos b;
    char *obj;
    char *vtable;
    int adjustment;
    MinimapSetPosFn setPos;

    tmp = *arg1;
    a = tmp;
    b = tmp;
    Minimap__SetActorMarkerWidgetPosition(arg0, (MinimapMarkerPos *)&a);
    obj = *(char **)((char *)arg0 + 0xC);
    vtable = *(char **)(obj + 412);
    adjustment = *(short *)(vtable + 168);
    setPos = *(MinimapSetPosFn *)(vtable + 172);
    setPos(obj + adjustment, b.x, b.y);
}
