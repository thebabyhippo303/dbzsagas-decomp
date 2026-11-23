/* Avatar__SetTimesHit @ 0x800440BC (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetTimesHit @ 0x800440BC (0x44). ProDG -O2. */
typedef struct {
    char pad[0x65C];
    int times_hit;
} AvatarTimesHit;

extern int Script__PopInt(void *script, void *context);

void Avatar__SetTimesHit(void *script, void *context) {
    AvatarTimesHit *avatar = (AvatarTimesHit *)Script__PopInt(script, context);
    avatar->times_hit = Script__PopInt(script, context);
}
