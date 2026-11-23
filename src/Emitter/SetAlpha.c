/* Emitter__SetAlpha @ 0x80224410 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct EmitterAlphaEntry {
    unsigned int id;
    char pad[0x98 - 4];
    volatile float alpha;
    volatile float *alphaPtr;
} EmitterAlphaEntry;

extern EmitterAlphaEntry *lbl_803AD48C __attribute__((section(".data")));

int Emitter__SetAlpha(unsigned int id, float alpha) {
    EmitterAlphaEntry *entry;

    entry = (EmitterAlphaEntry *)((char *)lbl_803AD48C + (id >> 16) * 0x110);
    if (entry->id != id) {
        return 0;
    }
    entry->alpha = alpha;
    entry->alphaPtr = &entry->alpha;
    return 1;
}
