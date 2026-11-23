/* Avatar__GetHealth @ 0x80024E28 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__GetHealth @ 0x80024E28 (0x4C). ProDG -O2. */
typedef struct {
    char pad[0x288];
    float health;
    float max_health;
} AvatarHealth;

extern AvatarHealth *Script__PopInt(void *script, void *context);
extern void Script__PushFloat(void *script, void *context, float value);

void Avatar__GetHealth(void *script, void *context) {
    AvatarHealth *avatar = Script__PopInt(script, context);
    Script__PushFloat(script, context, avatar->health / avatar->max_health);
}
