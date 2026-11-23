/* Avatar__SetHeading @ 0x800260D0 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetHeading @ 0x800260D0 (0x44). ProDG -O2. */
typedef struct {
    char pad[0x75C];
    float heading;
} AvatarHeading;

extern AvatarHeading *Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);

void Avatar__SetHeading(void *script, void *context) {
    AvatarHeading *avatar = Script__PopInt(script, context);
    avatar->heading = Script__PopFloat(script, context);
}
