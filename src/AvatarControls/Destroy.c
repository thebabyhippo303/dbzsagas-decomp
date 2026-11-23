/* AvatarControls__Destroy @ 0x800A2BB8 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AvatarControls__Destroy @ 0x800A2BB8 (0x34). ProDG -O2. */
extern char lbl_803344A0[];
extern void fn_801843CC(void *self);

void AvatarControls__Destroy(void *self, int flags) {
	*(void **)((char *)self + 4) = lbl_803344A0;
	if (flags & 1)
		fn_801843CC(self);
}
