/* AvatarControls__SetActionTarget @ 0x800A26C4 (size: 0xC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AvatarControls__SetActionTarget @ 0x800A26C4 (0xC). ProDG -O2. */
int AvatarControls__SetActionTarget(void *self, void *target) {
	*(void **)((char *)self + 676) = target;
	return 1;
}
