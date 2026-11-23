/* Effect__SpawnExploFullscreenAtObjectPosition @ 0x800DA8BC (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef struct Vec3 { f32 x, y, z; } Vec3;
typedef struct Av { char pad[0x38]; Vec3 pos; } Av;
void *FullScreenEffect__Create(void *resource, const char *name, int count, f32 x, f32 y, f32 z);
extern void *lbl_803DC5E4;
extern char lbl_80322A34[] __attribute__((section(".data")));

void Avatar__SpawnExploFullscreenFX(Av *avatar) {
    Vec3 p;
    Vec3 *src = &avatar->pos;
    Vec3 *q = &p;
    *q = *src;
    FullScreenEffect__Create(lbl_803DC5E4, lbl_80322A34, 1, q->x, q->y, q->z);
}
