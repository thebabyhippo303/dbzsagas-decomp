/* MathUtil__ComputeBallisticPath @ 0x8017D798 (size: 0x4C, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
/* Byte-matched: MathUtil__ComputeBallisticPath @ 0x8017D798 (0x4C). ProDG -O2. */
extern int MathUtil__BuildBallisticPath(int a, int b, int c, int d, int alt);
extern int MathUtil__SolveLaunchVelocityForTarget(int a, int b, int c, int d, int mode);

int MathUtil__ComputeBallisticPath(int a, int b, int c, int d, int mode, int alt) {
	switch (mode) {
	case 0:
		return MathUtil__BuildBallisticPath(a, b, c, d, alt);
	case 1:
		return MathUtil__SolveLaunchVelocityForTarget(a, b, c, d, 0);
	default:
		return 0;
	}
}
