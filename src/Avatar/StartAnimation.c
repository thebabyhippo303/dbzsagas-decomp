/* Avatar__StartAnimation @ 0x8002D580 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__StartAnimation @ 0x8002D580 (0x94). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern int Avatar__StartAnimationImpl(
	void *avatar, unsigned short animation, int loop, int arg3, int arg4, int arg5);

void Avatar__StartAnimation(void *script, void *context) {
	void *avatar;
	int animation;
	int loop;
	int arg3;

	avatar = Script__PopInt(script, context);
	animation = Script__PopInt(script, context);
	loop = Script__PopInt(script, context) != 0;
	arg3 = Script__PopInt(script, context) != 0;
	Avatar__StartAnimationImpl(avatar, (unsigned short)animation, loop, arg3, 0, 1);
}
