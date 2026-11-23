/* File__Release @ 0x8018797C (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: File__Release @ 0x8018797C (0x90). ProDG -O2. */
typedef struct File {
    void *data;
    int ownsData;
    char pad0[4];
    int field_0c;
    int field_10;
    void *uberHandle;
    void *buffer;
    int pendingSize;
} File;

extern void File__Flush(File *file);
extern void *memFree(void *ptr);
extern int fn_801807B8(void *handle, int close);

void File__Release(File *file) {
    int ownsData;

    File__Flush(file);
    if (file->buffer != 0) {
        memFree(file->buffer);
        file->buffer = 0;
    }
    if (file->uberHandle != 0) {
        fn_801807B8(file->uberHandle, 0);
        file->uberHandle = 0;
    }
    ownsData = file->ownsData;
    file->field_10 = 0;
    file->field_0c = 0;
    if (ownsData != 0 && file->data != 0)
        memFree(file->data);
    file->data = 0;
}
