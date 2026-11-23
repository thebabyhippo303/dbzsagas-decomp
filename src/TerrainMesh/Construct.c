/* TerrainMesh__Construct @ 0x801D1D2C (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Part { char b[48]; } Part;
typedef struct Mesh { int root; Part parts[32]; int count; } Mesh;
void TerrainMeshPart__Construct(Part *);
void TerrainMeshPart__Initialize(Part *, int, char *);

Mesh *TerrainMesh__Construct(Mesh *self, int root, int *sizes, char *data) {
    int i;
    Part *p;
    int n;
    self->root = root;
    p = self->parts;
    n = 31;
    do {
        TerrainMeshPart__Construct(p);
        p++;
    } while (n-- != 0);
    self->count = 0;
    for (i = 0; i < 32; i++) {
        if (sizes[i] != 0) {
            TerrainMeshPart__Initialize(&self->parts[self->count], 1 << i, data);
            data += sizes[i];
            self->count++;
        }
    }
    return self;
}
