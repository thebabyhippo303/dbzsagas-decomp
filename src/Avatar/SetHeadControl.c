/* Avatar__SetHeadControl @ 0x8003300C (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetHeadControl @ 0x8003300C (0x54). ProDG -O2. */
typedef struct AvatarHead {
    char pad[0x1A50];
    int headControl;
} AvatarHead;

extern AvatarHead *Script__PopInt(void *script, void *context);
extern int Script__PopIntFlag(void *script, void *context);

void Avatar__SetHeadControl(void *script, void *context) {
    AvatarHead *avatar = Script__PopInt(script, context);
    avatar->headControl = Script__PopIntFlag(script, context) != 0;
}
