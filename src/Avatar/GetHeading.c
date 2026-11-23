/* Avatar__GetHeading @ 0x80026090 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__GetHeading @ 0x80026090 (0x40). ProDG -O2. */
typedef struct {
    char pad[0x75C];
    float heading;
} AvatarHeading;

extern AvatarHeading *Script__PopInt(void *script, void *context);
extern void Script__PushFloat(void *script, void *context, float value);

void Avatar__GetHeading(void *script, void *context) {
    AvatarHeading *avatar = Script__PopInt(script, context);
    Script__PushFloat(script, context, avatar->heading);
}
