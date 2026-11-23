/* Avatar__SetGravity @ 0x8003B550 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetGravity @ 0x8003B550 (0x44). ProDG -O2. */
typedef struct {
    char pad[0x70C];
    float gravity;
} AvatarGravity;

extern AvatarGravity *Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);

void Avatar__SetGravity(void *script, void *context) {
    AvatarGravity *avatar = Script__PopInt(script, context);
    avatar->gravity = Script__PopFloat(script, context);
}
