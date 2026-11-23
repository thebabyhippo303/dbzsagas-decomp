/* CameraBag__Destroy @ 0x800BBB78 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct { s32 a; void *p; } Entry;
typedef struct { s32 count; Entry *entries; } CCameraAvatar;
void Mem__DeleteArray(void *);
void ShotList__Destroy(void);

void CCameraAvatar__Destroy(CCameraAvatar *self) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        void *p = self->entries[i].p;
        if (p != 0) {
            Mem__DeleteArray(p);
        }
    }
    if (self->entries != 0) {
        Mem__DeleteArray(self->entries);
    }
    self->entries = 0;
    self->count = 0;
    ShotList__Destroy();
}
