/* AvatarConfig__LoadAndBindSettings @ 0x8009C578 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct AvatarConfig {
    char *name;
    int flag;
    char pad[0x1C - 8];
    int primary;
    char pad2[0x30 - 0x20];
    int fallback;
    char pad3[0x44 - 0x34];
    int *chosen;
    char pad4[0x70 - 0x48];
    int bound;
    int *boundPtr;
} AvatarConfig;

extern void *lbl_803DCC10 __attribute__((section(".sdata")));
extern void CmdCon__ExecuteFileInContext(void *table, char *name);
extern void CmdCon__RemoveContext(void *table, char *name);

void AvatarConfig__LoadAndBindSettings(AvatarConfig *self) {
    if (self->name != 0) {
        CmdCon__ExecuteFileInContext(lbl_803DCC10, self->name);
        CmdCon__RemoveContext(lbl_803DCC10, self->name);
    }
    if (self->flag != 0) {
        self->chosen = &self->primary;
    } else {
        self->chosen = &self->fallback;
    }
    self->boundPtr = &self->bound;
}
