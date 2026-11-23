/* Options__Construct @ 0x8012623C (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Options__Construct @ 0x8012623C */
extern char lbl_80337010[];
extern void Options__InitializeSettingsArrays(void *settings);
extern void Options__ClearSerializedSettings(void *self);

typedef struct {
    int v0;
    int v1;
    int v2;
} Vols;

typedef struct {
    int field0;
    int field4;
    char pad[52];
    int field3C;
    int field40;
    int field44;
} Options;

void *Options__Construct(Options *self) {
    register int zero;
    Vols *vols;

    zero = 0;
    *(void **)((char *)self + 0x5254) = lbl_80337010;
    Options__InitializeSettingsArrays((char *)self + 12);
    vols = (Vols *)((char *)self + 60);
    self->field3C = 100;
    vols->v2 = 100;
    vols->v1 = zero;
    Options__ClearSerializedSettings(self);
    self->field4 = zero;
    self->field0 = -1;
    return self;
}
