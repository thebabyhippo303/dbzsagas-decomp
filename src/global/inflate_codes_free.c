/* inflate_codes_free @ 0x80258AC8 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: inflate_codes_free @ 0x80258AC8 (0x34). ProDG -O2. */
typedef void (*inflate_free_func)(void *opaque, void *block);

typedef struct {
    char pad[0x24];
    inflate_free_func free_func;
    void *opaque;
} InflateCodesState;

void inflate_codes_free(void *block, InflateCodesState *state) {
    state->free_func(state->opaque, block);
}
