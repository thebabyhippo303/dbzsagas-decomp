/* Avatar__SetMeleeTimer @ 0x80043A80 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetMeleeTimer @ 0x80043A80 (0x44). ProDG -O2. */
typedef struct {
    char pad[0x2DC];
    float meleeTimer;
} AvatarMeleeTimer;

extern AvatarMeleeTimer *Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);

void Avatar__SetMeleeTimer(void *script, void *context) {
    AvatarMeleeTimer *avatar = Script__PopInt(script, context);
    avatar->meleeTimer = Script__PopFloat(script, context);
}
