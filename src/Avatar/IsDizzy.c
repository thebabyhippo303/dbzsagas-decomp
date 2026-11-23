/* Avatar__IsDizzy @ 0x80044064 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__IsDizzy @ 0x80044064 (0x58). ProDG -O2. */
typedef struct {
    char pad_000[0x65C];
    int field_65C;
    int field_660;
    int field_664;
} Avatar;

extern Avatar *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);

void Avatar__IsDizzy(void *script, void *context) {
    Avatar *avatar = Script__PopInt(script, context);
    Script__PushInt(script, context, avatar->field_65C >= avatar->field_664);
}
