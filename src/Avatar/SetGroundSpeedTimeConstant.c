/* Avatar__SetGroundSpeedTimeConstant @ 0x8003B594 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetGroundSpeedTimeConstant @ 0x8003B594 (0x48). ProDG -O2. */
typedef struct {
    char pad[0x140];
    float groundSpeedTimeConstant;
} AvatarGroundInner;

typedef struct {
    char pad[0x7FC];
    AvatarGroundInner *inner;
} AvatarGround;

extern AvatarGround *Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);

void Avatar__SetGroundSpeedTimeConstant(void *script, void *context) {
    AvatarGround *avatar = Script__PopInt(script, context);
    avatar->inner->groundSpeedTimeConstant = Script__PopFloat(script, context);
}
