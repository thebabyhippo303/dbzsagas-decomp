/* Avatar__GetId @ 0x8003A518 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__GetId @ 0x8003A518 (0x44). ProDG -O2. */
typedef struct {
    char pad[0xC];
    int id;
} AvatarIdInner;

typedef struct {
    char pad[0x19D8];
    AvatarIdInner *inner;
} AvatarId;

extern AvatarId *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);

void Avatar__GetId(void *script, void *context) {
    AvatarId *avatar = Script__PopInt(script, context);
    Script__PushInt(script, context, avatar->inner->id);
}
