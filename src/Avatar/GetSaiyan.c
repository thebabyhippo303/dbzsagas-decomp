/* Avatar__GetSaiyan @ 0x80032E44 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__GetSaiyan @ 0x80032E44 (0x40). ProDG -O2. */
typedef struct {
    char pad[0x2D0];
    int saiyan;
} AvatarSaiyan;

extern AvatarSaiyan *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);

void Avatar__GetSaiyan(void *script, void *context) {
    AvatarSaiyan *avatar = Script__PopInt(script, context);
    Script__PushInt(script, context, avatar->saiyan);
}
