/* AvatarMovement__StopMotion @ 0x800A20F0 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AvatarMovement__StopMotion @ 0x800A20F0 (0x28). ProDG -O2. */
extern char lbl_80320000[];

void AvatarMovement__StopMotion(char *self) {
	char *state = *(char **)self;
	volatile float *motion = (volatile float *)(state + 104);
	float zero = *(float *)(lbl_80320000 + 0x144);
	motion[0] = zero;
	motion[2] = zero;
	motion[1] = zero;
	*(int *)(self + 200) = 1;
}
