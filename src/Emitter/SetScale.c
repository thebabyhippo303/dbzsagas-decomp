/* Emitter__SetScale @ 0x802243D0 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct EmitterEntry {
    unsigned int id;
    char pad[0x90 - 4];
    volatile float scale;
    volatile int value;
} EmitterEntry;

extern EmitterEntry *lbl_803AD48C __attribute__((section(".data")));

int Emitter__SetScale(unsigned int id, int value, float scale) {
    EmitterEntry *entry = (EmitterEntry *)((char *)lbl_803AD48C + (id >> 16) * 0x110);

    if (entry->id != id) {
        return 0;
    }
    entry->value = value;
    entry->scale = scale;
    return 1;
}
