/* TuningTableList__Destroy @ 0x8025416C (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef short s16;
void Mem__Delete(void *);
void TuningTableList__Destroy(void *self, int flags)
{
    void *n = *(void **)self;
    void *m;
    void *v;

    while (n != 0) {
        m = n;
        n = *(void **)((char *)n + 32);
        if (m != 0) {
            v = *(void **)((char *)m + 24);
            ((void (*)(void *, int))*(void **)((char *)v + 12))((char *)m + *(s16 *)((char *)v + 8), 3);
        }
    }
    if (flags & 1) {
        Mem__Delete(self);
    }
}
