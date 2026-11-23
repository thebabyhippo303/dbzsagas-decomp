/* AvatarEffectPath__ClearStrings @ 0x8009C9EC (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AvatarEffectPath__ClearStrings @ 0x8009C9EC (0x54). ProDG -O2. */
typedef struct {
    char pad[4];
    char *field_4;
    char *field_8;
} AvatarEffectPath;

extern void fn_80184430(char *text);

void AvatarEffectPath__ClearStrings(AvatarEffectPath *self) {
    if (self->field_4 != 0) {
        fn_80184430(self->field_4);
    }
    if (self->field_8 != 0) {
        fn_80184430(self->field_8);
    }
    *(volatile int *)&self->field_8 = 0;
    *(volatile int *)&self->field_4 = 0;
}
