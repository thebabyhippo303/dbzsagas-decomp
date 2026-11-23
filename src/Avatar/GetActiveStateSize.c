/* Avatar__GetActiveStateSize @ 0x800B5BB4 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__GetActiveStateSize @ 0x800B5BB4 (0x38). ProDG -O2. */
typedef struct {
    char pad[0xC8];
    short this_adjustment;
    short pad2;
    int (*get_size)(void *state);
} ActiveStateVTable;

typedef struct {
    char pad[4];
    ActiveStateVTable *vtable;
} ActiveState;

int Avatar__GetActiveStateSize(void *avatar) {
    ActiveState *state = *(ActiveState **)((char *)avatar + 0x144);
    ActiveStateVTable *vtable = state->vtable;
    return vtable->get_size((char *)state + vtable->this_adjustment);
}
