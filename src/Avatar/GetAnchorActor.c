/* Avatar__GetAnchorActor @ 0x8003FD84 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__GetAnchorActor @ 0x8003FD84 (0x4C). ProDG -O2. */
typedef struct {
    char pad[0x2BC];
    int anchor;
} AvatarAnchor;

extern AvatarAnchor *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);

void Avatar__GetAnchorActor(void *script, void *context) {
    AvatarAnchor *avatar = Script__PopInt(script, context);
    int anchor = 0;
    if (avatar != 0) {
        anchor = avatar->anchor;
    }
    Script__PushInt(script, context, anchor);
}
