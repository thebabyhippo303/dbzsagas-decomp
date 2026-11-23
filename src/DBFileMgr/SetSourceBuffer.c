/* DBFileMgr__SetSourceBuffer @ 0x80205F98 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[0x14];
    int before_cursor;
    int cursor;
    int read_buffer;
} ReadBufferState;
extern ReadBufferState lbl_803ADBE4 __attribute__((section(".data")));

int Database__SetReadBuffer(int cursor, int buffer) {
    volatile ReadBufferState *state = &lbl_803ADBE4;
    state->read_buffer = buffer;
    state->cursor = cursor;
    state->before_cursor = cursor;
    return 1;
}
