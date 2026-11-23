/* ScriptThread__FindVariableIndex @ 0x8023A1A0 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
unsigned Hash__Buffer32(const char *, unsigned, unsigned);
int strlen(const char *);
typedef struct Ent { int hash; int pad[4]; } Ent;
typedef struct Tbl { char pad[20]; unsigned count; char pad2[16]; Ent *ents; } Tbl;
typedef struct Th { char pad[28]; Tbl *vars; } Th;

unsigned ScriptThread__FindVariableIndex(Th *self, const char *name) {
    int hash = Hash__Buffer32(name, strlen(name), 0);
    Tbl *t = self->vars;
    unsigned i;
    for (i = 0; i < t->count; i++) {
        if (hash == t->ents[i].hash) {
            return i;
        }
    }
    return -1;
}
