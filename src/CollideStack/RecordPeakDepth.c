/* CollideStack__RecordPeakDepth @ 0x800065DC (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned int u32;
char * strcpy(char *, const char *);
typedef struct {
    char pad0[0xC]; u32 depth;
    char pad1[0xB8 - 0x10]; u32 peak;
    char name[0x80];
    char src[0x80];
    u32 flagsA : 1;
    u32 flagsB : 1;
    u32 rest : 30;
} CS;
void CollideStack__RecordPeakDepth(CS *s) {
    u32 d = s->depth;
    if (d > s->peak) {
        s->peak = d;
        strcpy(s->name, s->src);
        s->flagsA = s->flagsB;
    }
}
