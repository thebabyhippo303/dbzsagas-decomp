/* Avatar__SelectCharacterDefinitionByName @ 0x8008B674 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned int u32;
typedef struct { char *name; char pad[32]; } CharDef;
typedef struct { char pad[0x19D8]; CharDef *def; } CharAvatar;

extern int String__CompareIgnoreCase(const char *, const char *);
extern CharDef lbl_80391DE4[] __attribute__((section(".data")));

void Avatar__SelectCharacterDefinitionByName(CharAvatar *self, char *name) {
    u32 i;
    for (i = 0; i < 63; i++) {
        if (String__CompareIgnoreCase(name, lbl_80391DE4[i].name) == 0) {
            self->def = &lbl_80391DE4[i];
            return;
        }
    }
}
