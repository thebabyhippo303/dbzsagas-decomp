/* Avatar__IncreaseHealth @ 0x80024DE0 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__IncreaseHealth @ 0x80024DE0 (0x48). ProDG -O2. */
typedef struct AvatarHealth AvatarHealth;

extern AvatarHealth *Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);
extern void Avatar__AdjustHealth(AvatarHealth *avatar, float amount);

void Avatar__IncreaseHealth(void *script, void *context) {
    AvatarHealth *avatar = Script__PopInt(script, context);
    Avatar__AdjustHealth(avatar, Script__PopFloat(script, context));
}
