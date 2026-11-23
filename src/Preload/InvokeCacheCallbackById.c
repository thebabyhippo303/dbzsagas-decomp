/* Preload__InvokeCacheCallbackById @ 0x8012C4B4 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__InvokeCacheCallbackById @ 0x8012C4B4 (0x54). ProDG -O2. */
typedef struct CacheCb {
    int id;
    int (*fn)(void);
} CacheCb;

extern CacheCb lbl_8036BF7C[] __attribute__((section(".data")));

int Preload__InvokeCacheCallbackById(int id) {
    CacheCb *entry = lbl_8036BF7C;
    CacheCb *end = (CacheCb *)((char *)lbl_8036BF7C + 488);

    for (;;) {
        if (entry->id != id) {
            entry++;
            if ((int)entry < (int)end)
                continue;
            return 0;
        }
        return entry->fn();
    }
}
