/* CollisionMaterial__Write @ 0x801A8A94 (size: 0xDC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Entry {
    int type;
    float cor;
    float cog;
} Entry;

typedef struct Material {
    void *file;
    char pad[44 - 4];
    Entry *entries;
} Material;

extern int sprintf(char *buf, const char *fmt, ...);
extern int strlen(const char *s);
extern void fn_80255360(void *file, const char *buf, int len);

void CollisionMaterial__Write(Material *self, int index) {
    char buf[80];
    int off = index * 12;
    sprintf(buf, "collisionType %d", *(int *)(off + (int)self->entries));
    fn_80255360(self->file, buf, strlen(buf));
    sprintf(buf, "cor %f", *(float *)(off + (int)self->entries + 4));
    fn_80255360(self->file, buf, strlen(buf));
    sprintf(buf, "cog %f", *(float *)(off + (int)self->entries + 8));
    fn_80255360(self->file, buf, strlen(buf));
}
