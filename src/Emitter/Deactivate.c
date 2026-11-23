/* Emitter__Deactivate @ 0x80222DA0 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Emitter__Deactivate @ 0x80222DA0 (0x7C). ProDG -O2. */
typedef struct {
    unsigned int handle;
    unsigned int flags;
    char pad[0x110 - 8];
} DeactEmitter;

extern DeactEmitter *lbl_803AD48C __attribute__((section(".data")));
extern int fn_80222E58(unsigned int handle);

int Emitter__Deactivate(unsigned int handle) {
    DeactEmitter *emitter = &lbl_803AD48C[handle >> 16];
    unsigned int id = emitter->handle;

    if (id != handle) {
        return 0;
    }
    if (fn_80222E58(id) != 0) {
        return 0;
    }
    emitter->flags &= ~0x40u;
    return 1;
}
