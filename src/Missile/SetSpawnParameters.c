/* Missile__SetSpawnParameters @ 0x800DCE80 (size: 0xF8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Missile__SetSpawnParameters @ 0x800DCE80 (0xF8). ProDG -O2. */
typedef struct { float x, y, z; } SpawnVec3;
typedef struct {
    char pad0[0x34];
    char *vt;
    SpawnVec3 a;
    float basis[9];
    SpawnVec3 b;
    SpawnVec3 c;
} SpawnMissile;

void Missile__SetSpawnParameters(SpawnMissile *self, float *basis, SpawnVec3 *a, SpawnVec3 *b, SpawnVec3 *c) {
    float *d = self->basis;
    self->basis[0] = basis[0];
    d[1] = basis[1];
    d[2] = basis[2];
    d[3] = basis[3];
    d[4] = basis[4];
    d[5] = basis[5];
    d[6] = basis[6];
    d[7] = basis[7];
    d[8] = basis[8];
    self->a = *a;
    self->b = *b;
    self->c = *c;
    {
        char *vt = self->vt;
        ((void (*)(void *))*(void **)(vt + 0x94))((char *)self + *(short *)(vt + 0x90));
    }
    {
        char *vt = self->vt;
        ((void (*)(void *))*(void **)(vt + 0xAC))((char *)self + *(short *)(vt + 0xA8));
    }
}
