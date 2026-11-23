/* ProcModel__QueueFreeGeometry @ 0x80250B24 (size: 0x170, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;

typedef struct Chunk {
    void *prev;
    void *next;
    void *items[100];
    s32 count;
} Chunk;

void *Mem__New(u32);
void MemHeap__TagAllocation(void *);
extern void *lbl_803DCD7C __attribute__((section(".sdata")));

void ProcModel__QueueFreeGeometry(void *arg0) {
    void *payload = M2C_FIELD(arg0, void **, 128);
    void *pool;
    void *tmp;
    s32 p;
    s32 c;

    if (payload == NULL) {
        return;
    }
    pool = lbl_803DCD7C;
    tmp = M2C_FIELD(pool, void **, 32);
    do {
        void *node1;
        void *nc1;
    if (tmp == NULL) {
        node1 = Mem__New(412);
        nc1 = node1;
        M2C_FIELD(nc1, void **, 408) = tmp;
        M2C_FIELD(pool, void **, 32) = nc1;
        MemHeap__TagAllocation(node1);
        node1 = M2C_FIELD(pool, void **, 32);
        p = (s32)pool + 16;
        if (M2C_FIELD(pool, void **, 16) == NULL) {
            M2C_FIELD(p, void **, 4) = node1;
            M2C_FIELD(pool, void **, 16) = node1;
            M2C_FIELD(node1, void **, 4) = tmp;
            M2C_FIELD(node1, void **, 0) = tmp;
        } else {
            M2C_FIELD(node1, void **, 4) = M2C_FIELD(pool, void **, 16);
            M2C_FIELD(node1, void **, 0) = tmp;
            nc1 = M2C_FIELD(pool, void **, 16);
            M2C_FIELD(nc1, void **, 0) = node1;
            M2C_FIELD(pool, void **, 16) = node1;
        }
        nc1 = (void *)M2C_FIELD(p, s32 *, 12);
        nc1 = (void *)((s32)nc1 + 1);
        M2C_FIELD(p, void **, 12) = nc1;
    }
    p = (s32)M2C_FIELD(pool, void **, 32);
    c = ((Chunk *)(void *)p)->count;
    if (c > 99) {
        tmp = (void *)0;
    } else {
        ((Chunk *)(void *)p)->items[c] = payload;
        ((Chunk *)(void *)p)->count = ((Chunk *)(void *)p)->count + 1;
        tmp = (void *)1;
    }
    } while (0);
    do {
    if (tmp == (void *)0) {
        void *node;
        void *newchunk;
        node = Mem__New(412);
        newchunk = node;
        M2C_FIELD(newchunk, void **, 408) = tmp;
        M2C_FIELD(pool, void **, 32) = newchunk;
        MemHeap__TagAllocation(node);
        node = M2C_FIELD(pool, void **, 32);
        p = (s32)pool + 16;
        if (M2C_FIELD(pool, void **, 16) == NULL) {
            M2C_FIELD((void *)p, void **, 4) = node;
            M2C_FIELD(pool, void **, 16) = node;
            M2C_FIELD(node, void **, 4) = tmp;
            M2C_FIELD(node, void **, 0) = tmp;
        } else {
            M2C_FIELD(node, void **, 4) = M2C_FIELD(pool, void **, 16);
            M2C_FIELD(node, void **, 0) = tmp;
            newchunk = M2C_FIELD(pool, void **, 16);
            M2C_FIELD(newchunk, void **, 0) = node;
            M2C_FIELD(pool, void **, 16) = node;
        }
        newchunk = (void *)M2C_FIELD((void *)p, s32 *, 12);
        newchunk = (void *)((s32)newchunk + 1);
        M2C_FIELD((void *)p, void **, 12) = newchunk;
        {
            s32 p2 = (s32)M2C_FIELD(pool, void **, 32);
            p = ((Chunk *)(void *)p2)->count;
            if (p > 99) {
                goto done;
            }
            ((Chunk *)(void *)p2)->items[p] = payload;
            ((Chunk *)(void *)p2)->count = ((Chunk *)(void *)p2)->count + 1;
        }
    }
    } while (0);
done:
    M2C_FIELD(arg0, void **, 128) = NULL;
}
