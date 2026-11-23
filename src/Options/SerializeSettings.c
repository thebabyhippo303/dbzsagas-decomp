/* Options__SerializeSettings @ 0x801269E8 (size: 0xE8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Options__SerializeSettings @ 0x801269E8 (0xE8). ProDG -O2. */
typedef struct {
    char pad[0x244];
    char sub[1];
    char pad2[0x250 - 0x245];
    int serializedCount;
    char serializedSettings[1];
} Options;

extern char *lbl_803DC368;
extern char lbl_803276C8[];

extern int PersistentData__SetGlobalImpl(void *data, char *name, int value);
extern int Options__GetRumble(void *sub);
extern void Options__SetRumbleMode(void *sub, int mode);
extern int Options__GetSoundVolume(void *sub);
extern void Options__SetSoundVolume(void *sub, int volume);
extern int Options__GetMusicVolume(void *sub);
extern void Options__SetMusicVolume(void *sub, int volume);
extern int Options__GetDialogVolume(void *sub);
extern void Options__SetDialogVolume(void *sub, int volume);
extern int Options__GetSerializedSettingsSize(Options *self);
extern void memcpy();

int Options__SerializeSettings(Options *self, int *buf, int save) {
    int count;
    char *sub;

    if (save != 0) {
        count = self->serializedCount;
        *buf = count;
        memcpy(buf + 1, self->serializedSettings, (unsigned int)(self->serializedCount << 6));
    } else {
        count = *buf;
        sub = self->sub;
        self->serializedCount = count;
        memcpy(self->serializedSettings, buf + 1, (unsigned int)(count << 6));
        PersistentData__SetGlobalImpl(lbl_803DC368 + 300, lbl_803276C8, 0);
        Options__SetRumbleMode(sub, Options__GetRumble(sub));
        Options__SetSoundVolume(sub, Options__GetSoundVolume(sub));
        Options__SetMusicVolume(sub, Options__GetMusicVolume(sub));
        Options__SetDialogVolume(sub, Options__GetDialogVolume(sub));
    }
    return Options__GetSerializedSettingsSize(self);
}
