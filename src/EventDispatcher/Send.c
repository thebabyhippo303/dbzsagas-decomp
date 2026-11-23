/* EventDispatcher__Send @ 0x80251510 (size: 0x140, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef short s16; typedef int s32; typedef unsigned int u32;
#define NULL 0

void EventDispatcher__Send(void *self, s32 a1, s32 a2, s32 a3, void *a4) {
    u32 mask;
    s32 n;
    u32 b;
    char *arr;
    void *node;
    void *vt;

    if (a4 != NULL) {
        *(s32 *)((char *)self + 24) = 0;
        vt = *(void **)((char *)a4 + 24);
        ((void (*)(void *, s32, s32, s32))((char *)a4 + *(s16 *)((char *)vt + 16)))((char *)a4 + *(s16 *)((char *)vt + 16), a1, a2, a3);
        return;
    }
    mask = (u32)a1 & *(u32 *)((char *)self + 8);
    *(s32 *)((char *)self + 24) = 1;
    if ((mask & *(u32 *)((char *)self + 28)) == 0)
        return;
    if ((mask & *(u32 *)((char *)self + 32)) != mask) {
        node = *(void **)self;
        if (node == NULL)
            return;
        do {
            if ((((u32)*(s32 *)((char *)node + 20)) & mask) != 0) {
                vt = *(void **)((char *)node + 24);
                ((void (*)(void *, s32, s32, s32))((char *)node + *(s16 *)((char *)vt + 16)))((char *)node + *(s16 *)((char *)vt + 16), a1, a2, a3);
            }
            node = *(void **)((char *)node + 4);
        } while (node != NULL);
        return;
    }
    n = *(s32 *)((char *)self + 16);
    b = *(u32 *)((char *)self + 12);
    arr = (char *)self + (n << 2) + 36;
    for (;;) {
        if (n >= *(s32 *)((char *)self + 20))
            return;
        if ((mask & b) != 0) {
            vt = *(void **)arr;
            ((void (*)(void *, s32, s32, s32))((char *)vt + *(s16 *)((char *)vt + 16)))((char *)vt + *(s16 *)((char *)vt + 16), a1, a2, a3);
            mask ^= b;
            if (mask == 0)
                return;
        }
        arr += 4;
        n++;
        b <<= 1;
    }
}
