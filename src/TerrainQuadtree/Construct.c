/* TerrainQuadtree__Construct @ 0x801CB398 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Ent { int mask; char *node; } Ent;
typedef struct Qt { int root; Ent ents[32]; int count; } Qt;
void TerrainQuadtreeNode__ByteSwap(char *);
Qt *TerrainQuadtree__Construct(Qt *self, int root, int *sizes, char *data) {
    int i; int *s; char *d;
    self->root = root; self->count = 0;
    d = data; s = sizes; i = 0;
    do {
        if (s[1] != 0) {
            self->ents[self->count].node = d; self->ents[self->count].mask = 1 << i;
            TerrainQuadtreeNode__ByteSwap(self->ents[self->count].node);
            d += s[1]; self->count++;
        }
        i++; s++;
    } while (i <= 31);
    return self; }