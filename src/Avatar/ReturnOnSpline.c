/* Avatar__ReturnOnSpline @ 0x80041090 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__ReturnOnSpline @ 0x80041090 (0x50). ProDG -O2. */
typedef struct {
    char pad[0x71C];
    int mode;
} AvatarSpline;

extern AvatarSpline *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);

void Avatar__ReturnOnSpline(void *script, void *context) {
    AvatarSpline *avatar = Script__PopInt(script, context);
    Script__PushInt(script, context, avatar->mode != 3);
}
