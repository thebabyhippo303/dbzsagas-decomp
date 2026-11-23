/* Avatar__AddTimesHit @ 0x80044100 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__AddTimesHit @ 0x80044100 (0x4C). ProDG -O2. */
typedef struct {
    char pad[0x65C];
    int times_hit;
} AvatarHits;

extern AvatarHits *Script__PopInt(void *script, void *context);

void Avatar__AddTimesHit(void *script, void *context) {
    AvatarHits *avatar = Script__PopInt(script, context);
    int add = (int)Script__PopInt(script, context);
    avatar->times_hit += add;
}
