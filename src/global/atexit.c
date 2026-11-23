/* atexit @ 0x802CE574 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: atexit @ 0x802CE574 (0x98). ProDG -O2. */
typedef struct AtExitBlock {
    struct AtExitBlock *next;
    int count;
    void (*funcs[32])(void);
} AtExitBlock;

typedef struct {
    char pad[0x148];
    AtExitBlock *blocks;
    AtExitBlock firstBlock;
} RuntimeGlobals;

extern RuntimeGlobals *lbl_runtimeGlobals;
extern void *fn_802CE630(int size);

int atexit(void (*func)(void)) {
    AtExitBlock *block = lbl_runtimeGlobals->blocks;
    if (block == 0) {
        block = &lbl_runtimeGlobals->firstBlock;
        lbl_runtimeGlobals->blocks = block;
    }
    if (block->count > 31) {
        block = fn_802CE630(136);
        if (block == 0)
            return -1;
        block->count = 0;
        block->next = lbl_runtimeGlobals->blocks;
        lbl_runtimeGlobals->blocks = block;
    }
    block->funcs[block->count++] = func;
    return 0;
}
