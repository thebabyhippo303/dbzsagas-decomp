/* Water__GetPoolByIndex @ 0x80294294 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct { void **items; s32 count; } Pool;
typedef struct { Pool *pool; } Water;
void *Water__GetPoolByIndex(Water *self, s32 index)
{
    Pool *p = self->pool;
    void **slot;

    if (index < 0) {
        index = p->count - 1;
    }
    if (index >= p->count) {
        slot = 0;
    } else if (p->count == 0) {
        slot = 0;
    } else {
        slot = &p->items[index];
    }
    return *slot;
}
