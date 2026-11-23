/* Avatar__StartSecondaryAnimation @ 0x8002D614 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__StartSecondaryAnimation @ 0x8002D614 (0xA4). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern int Avatar__StartAnimationImpl(
	void *avatar, unsigned short animation, int loop, int arg3, int arg4, int arg5);

void Avatar__StartSecondaryAnimation(void *script, void *context) {
	void *avatar;
	int animation;
	int arg4;
	int loop;
	int arg3;

	avatar = Script__PopInt(script, context);
	animation = (int)Script__PopInt(script, context);
	arg4 = (int)Script__PopInt(script, context);
	loop = (int)Script__PopInt(script, context) != 0;
	arg3 = (int)Script__PopInt(script, context) != 0;
	Avatar__StartAnimationImpl(avatar, (unsigned short)animation, loop, arg3, arg4, 1);
}
