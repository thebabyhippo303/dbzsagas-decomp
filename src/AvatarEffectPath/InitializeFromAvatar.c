/* AvatarEffectPath__InitializeFromAvatar @ 0x8009C92C (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AvatarEffectPath__InitializeFromAvatar @ 0x8009C92C (0xC0). ProDG -O2. */
typedef struct {
    char pad[4];
    char *field_4;
    char *field_8;
} AvatarEffectPath;

extern char *lbl_803DC5A0;
extern char *lbl_803DC5A4;
extern void *fn_80184348(int size);
extern int fn_8021BEC8(char *path);
extern char *strcat(char *dest, const char *src);
extern char *strcpy(char *dest, const char *src);
extern int strlen(const char *s);

int AvatarEffectPath__InitializeFromAvatar(void *arg0, void *arg1) {
    AvatarEffectPath *self;
    char *name;
    int len;

    self = (AvatarEffectPath *)arg0;
    *(void **)self = arg1;
    name = *(char **)(*(char **)((char *)arg1 + 0x19D8) + 4);
    self->field_4 = fn_80184348(strlen(name) + 1);
    strcpy(self->field_4, name);
    len = strlen(lbl_803DC5A0);
    len = len + strlen(name);
    self->field_8 = fn_80184348(len + strlen(lbl_803DC5A4) + 1);
    strcpy(self->field_8, lbl_803DC5A0);
    strcat(self->field_8, name);
    strcat(self->field_8, lbl_803DC5A4);
    if (fn_8021BEC8(self->field_8) != 0) {
        return 1;
    }
    return 0;
}
