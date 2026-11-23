/* Console__WriteBytes @ 0x802CDA34 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void EXIDebug__InitializeTransport(int mode);
extern void EXIDebug__WriteBytes(const void *data, int size);

int Console__WriteBytes(const void *data, int size) {
    volatile int *global_data = (volatile int *)0x80370000;
    if (global_data[0x5970 / 4] != 0) {
        global_data[0x5970 / 4] = 0;
        EXIDebug__InitializeTransport(0);
    }
    EXIDebug__WriteBytes(data, size);
    return size;
}
