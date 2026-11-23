/* CCameraAvatar__HasWideFramingActor @ 0x800BB868 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: CCameraAvatar__HasWideFramingActor @ 0x800BB868 (0x64). ProDG -O2. */
typedef struct {
    char pad[0xA];
    short kind;
} WideFramingKind;

typedef struct {
    char pad[0xF0];
    WideFramingKind *kind;
} WideFramingMid;

typedef struct {
    char pad[0x84];
    WideFramingMid *mid;
    char pad2[0x1598 - 0x88];
    int flag;
} WideFramingActor;

typedef struct {
    char pad[0x48];
    WideFramingActor **actors;
    int count;
} CCameraAvatar;

int CCameraAvatar__HasWideFramingActor(CCameraAvatar *self) {
    int i;
    for (i = 0; i < self->count; i++) {
        WideFramingActor *entry = self->actors[i];
        short kind = entry->mid->kind->kind;
        if (kind == 0x502 || kind == 0x103 || entry->flag != 0) {
            return 1;
        }
    }
    return 0;
}
