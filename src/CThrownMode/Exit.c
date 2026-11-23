/* CThrownMode__Exit @ 0x8009FFF0 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: CThrownMode__Exit @ 0x8009FFF0 (0x60). ProDG -O2. */
extern char lbl_80320028[];
extern void Debug__FormatMessage(char *fmt, ...);

typedef struct ThrownName {
    char pad[16];
    unsigned flags;
} ThrownName;

typedef struct ThrownInner {
    char pad[676];
    int mode;
} ThrownInner;

typedef struct ThrownMode {
    ThrownName *name;
    char pad[120];
    ThrownInner *inner;
} ThrownMode;

void CThrownMode__Exit(ThrownMode *self) {
    Debug__FormatMessage(lbl_80320028, self->name, self->inner->mode);
    self->name->flags &= ~0x80u;
    self->inner->mode = 0;
}
