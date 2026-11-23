/* Minimap__SetActorMarkerWidgetPosition @ 0x80118CF8 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef void (*MinimapSetPosFn)(void *self, float x, float y);

typedef struct MinimapMarkerPos {
    float x;
    float y;
} MinimapMarkerPos;

void Minimap__SetActorMarkerWidgetPosition(void **arg, MinimapMarkerPos *pos) {
    volatile MinimapMarkerPos local = *pos;
    char *self = (char *)*arg;
    char *vtable = *(char **)(self + 412);
    int adjustment = *(short *)(vtable + 168);
    MinimapSetPosFn setPos = *(MinimapSetPosFn *)(vtable + 172);

    setPos(self + adjustment, local.x, local.y);
}
