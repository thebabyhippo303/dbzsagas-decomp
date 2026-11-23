/* Avatar__IsDead @ 0x80026038 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__IsDead @ 0x80026038 (0x58). ProDG -O2. */
typedef struct {
    char pad[0x288];
    float health;
} AvatarHealth;

extern char lbl_80310000[];
extern AvatarHealth *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);

void Avatar__IsDead(void *script, void *context) {
    AvatarHealth *avatar = Script__PopInt(script, context);
    int dead = avatar->health <= *(float *)(lbl_80310000 + 0x1428);
    Script__PushInt(script, context, dead);
}
