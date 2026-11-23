/* Avatar__AdjustHealth @ 0x8009258C (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__AdjustHealth @ 0x8009258C (0x28). */
typedef struct {
    char pad[0x288];
    float health;
} AvatarHealth;

extern void Avatar__SetHealthImpl(AvatarHealth *avatar, float health);

void Avatar__AdjustHealth(AvatarHealth *avatar, float amount) {
    Avatar__SetHealthImpl(avatar, avatar->health + amount);
}
