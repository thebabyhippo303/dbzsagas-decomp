/* Minimap__IsActorMarkerWidgetVisible @ 0x80118DB8 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int (*MinimapVisibleFn)(void *self);

int Minimap__IsActorMarkerWidgetVisible(void **arg) {
    char *self = (char *)*arg;
    char *vtable = *(char **)(self + 412);
    int adjustment = *(short *)(vtable + 640);
    MinimapVisibleFn visible = *(MinimapVisibleFn *)(vtable + 644);
    return visible(self + adjustment);
}
