/* Minimap__HideActorMarkerWidget @ 0x80118D80 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Minimap__HideActorMarkerWidget @ 0x80118D80 (0x38). ProDG -O2. */
typedef void (*MinimapHideFn)(void *self);

void Minimap__HideActorMarkerWidget(void **arg) {
	char *self = (char *)*arg;
	char *vtable = *(char **)(self + 412);
	int adjustment = *(short *)(vtable + 472);
	MinimapHideFn hide = *(MinimapHideFn *)(vtable + 476);
	hide(self + adjustment);
}
