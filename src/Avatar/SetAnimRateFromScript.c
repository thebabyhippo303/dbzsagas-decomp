/* Avatar__SetAnimRateFromScript @ 0x8009221C (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetAnimRateFromScript @ 0x8009221C (0x48). ProDG -O2. */
typedef struct {
	char pad[0x84];
	void *animation_script;
} AvatarAnimation;

extern float Script__PopFloat(void *script, void *context);
extern void Animation__SetRate(void *animation, float rate);

void Avatar__SetAnimRateFromScript(AvatarAnimation *avatar, int thread) {
	float rate = Script__PopFloat(avatar->animation_script, (void *)thread);
	Animation__SetRate((char *)avatar->animation_script + 0x108 + thread * 0x14,
		rate);
}
