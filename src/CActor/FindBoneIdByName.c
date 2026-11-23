/* CActor__FindBoneIdByName @ 0x801DCDB4 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned char u8;

int Skeleton__FindBoneIdByName(void *, u8 *, const char *);

u8 CActor__FindBoneIdByName(void *self, const char *name) {
    u8 id;
    Skeleton__FindBoneIdByName(*(void **)(*(char **)((char *)self + 0x84) + 0xC), &id, name);
    return id;
}
