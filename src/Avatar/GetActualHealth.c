/* Avatar__GetActualHealth @ 0x800451BC (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__GetActualHealth @ 0x800451BC (0x40). ProDG -O2. */
typedef struct {
    char pad[0x288];
    float health;
} AvatarHealth;

extern AvatarHealth *fn_8023A310(void *script, void *context);
extern void Script__PushFloat(void *script, void *context, float value);

void Avatar__GetActualHealth(void *script, void *context) {
    AvatarHealth *avatar = fn_8023A310(script, context);
    Script__PushFloat(script, context, avatar->health);
}
