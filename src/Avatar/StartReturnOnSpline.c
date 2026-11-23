/* Avatar__StartReturnOnSpline @ 0x8004103C (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__StartReturnOnSpline @ 0x8004103C (0x54). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);
extern void fn_800A12FC(void *flight, const char *spline_name, int mode,
	float speed, int flags);

void Avatar__StartReturnOnSpline(void *script, void *context) {
	char *avatar = Script__PopInt(script, context);
	float speed = Script__PopFloat(script, context);
	fn_800A12FC(*(void **)(avatar + 0x7F4), *(const char **)(avatar + 0x680),
		0, speed, 0);
}
