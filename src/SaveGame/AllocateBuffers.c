/* SaveGame__AllocateBuffers @ 0x8014E974 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct AllocVtable {
    char pad[0xA0];
    short this_adjust;
    void *(*alloc)(void *self, unsigned int size);
} AllocVtable;

typedef struct AllocHeap {
    char pad[12];
    AllocVtable *vtable;
} AllocHeap;

typedef struct SaveGame {
    char pad[48];
    void *field_48;
    void *field_52;
    char pad2[8];
    void *field_64;
} SaveGame;

extern AllocHeap *lbl_803DCC70;

void SaveGame__AllocateBuffers(SaveGame *self) {
    AllocHeap *heap = lbl_803DCC70;
    void *buffer = heap->vtable->alloc((char *)heap + heap->vtable->this_adjust, 51696);

    *(void *volatile *)&self->field_52 = (char *)buffer + 496;
    *(void *volatile *)&self->field_48 = (char *)buffer + 16;
    *(void *volatile *)&self->field_64 = buffer;
}
