/* CombatCue__SetCueType @ 0x80133614 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: CombatCue__SetCueType @ 0x80133614 (0x48). ProDG -O2. */
typedef struct {
    char pad[0x90];
    int type;
    char name[1];
} CombatCue;

extern const char *lbl_8036CA40[];
extern char *strcpy(char *dst, const char *src);

CombatCue *CombatCue__SetCueType(CombatCue *self, int type) {
    self->type = type;
    strcpy(self->name, lbl_8036CA40[type]);
    return self;
}
