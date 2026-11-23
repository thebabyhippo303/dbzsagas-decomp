/* DbzBreakable__Destroy @ 0x800E578C (size: 0x108, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: DbzBreakable__Destroy @ 0x800E578C (0x108). ProDG -O2. */
extern char lbl_8032F048[] __attribute__((section(".data")));
extern char lbl_8032F028[] __attribute__((section(".data")));
extern char lbl_8032EF58[] __attribute__((section(".data")));
extern char lbl_8032F0F0[] __attribute__((section(".data")));
extern void memFree(void *ptr);
extern void fn_8022AB9C(void *obj, int flag);
extern void Actor__Destroy(void *self, int flag);

void DbzBreakable__Destroy(char *self, int flag) {
    void *next;
    void *next2;
    int table;
    int off;
    int n;

    *(char **)(self + 0x198) = lbl_8032F048;
    *(char **)(self + 0x1B4) = lbl_8032F028;
    *(char **)(self + 0x4C8) = lbl_8032EF58;
    *(char **)(self + 0x34) = lbl_8032F0F0;
    if (*(void **)(self + 0x86C) != 0) {
        do {
            void *cur = *(void **)(self + 0x86C);
            next = *(void **)((char *)cur + 0x14);
            memFree(cur);
            *(void **)(self + 0x86C) = next;
        } while (next != 0);
    }
    table = (int)self + 0x878;
    if (*(void **)(self + 0x870) != 0) {
        do {
            void *cur = *(void **)(self + 0x870);
            next2 = *(void **)((char *)cur + 0xC);
            memFree(cur);
            *(void **)(self + 0x870) = next2;
        } while (next2 != 0);
    }
    off = 0;
    n = 6;
    do {
        if (*(void **)(off + table) != 0) {
            void *p;
            fn_8022AB9C(*(void **)(off + table), 0);
            p = *(void **)(*(char **)(off + table) + 0x94);
            if (p != 0)
                memFree(p);
            if (*(void **)(off + table) != 0)
                memFree(*(void **)(off + table));
        }
        off += 8;
        n--;
    } while (n != 0);
    Actor__Destroy(self, flag);
}
