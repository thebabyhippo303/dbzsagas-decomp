/* ShotList__Initialize @ 0x800D0638 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
void *memset(void *destination, int value, unsigned int size);
typedef struct {
    void *buffer;
    int initialized;
    int count;
    char pad[4];
    int enabled;
} ShotListGlobals;
extern ShotListGlobals lbl_80392D54 __attribute__((section(".data")));

int ShotList__Initialize(void) {
    register ShotListGlobals *state = &lbl_80392D54;
    if (state->enabled != 0 && state->buffer != 0) {
        memset(state->buffer, 0, state->count * 4);
    }
    state->initialized = 0;
    return 1;
}
