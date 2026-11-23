/* FileStream__OpenLooseFile @ 0x8017F5E8 (size: 0x138, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char *App__MakeGcnDataPath(const char *path);
extern char *App__MakeDataPath(const char *path);
extern int fn_801808E0(char *resolved, void **out, int flags);
extern void *FileStream__FindFreeSlot(void);
extern void fn_801809A8(void *handle);
extern int fn_80180ACC(void *handle);
extern void *MemHeap__Alloc(unsigned int size, unsigned int align);
extern int fn_80180ADC(void *buf, int size, void *handle);
extern void FileStream__Close(void *slot);
extern void fn_80180FD4(void *handle, int a, int b, int c, int d);

void *FileStream__OpenDiskFile(const char *path, int mode, int flags) {
    void *handle;
    char *slot;
    int size;
    void *buf;
    void *kept;

    if (fn_801808E0(App__MakeGcnDataPath(path), &handle, flags) == 0) {
        if (fn_801808E0(App__MakeDataPath(path), &handle, flags) == 0) {
            return 0;
        }
    }
    slot = FileStream__FindFreeSlot();
    if (slot == 0) {
        fn_801809A8(handle);
        return 0;
    }
    size = fn_80180ACC(handle);
    *(int *)(slot + 0x14) = 0;
    *(int *)(slot + 4) = size;
    *(int *)(slot + 8) = flags;
    if (mode == 0) {
        *(volatile int *)slot = 0x11;
        kept = handle;
        *(volatile int *)(slot + 0x10) = mode;
        *(void *volatile *)(slot + 0xC) = kept;
    } else {
        *(int *)slot = 0x21;
        buf = MemHeap__Alloc(size, 8);
        *(void **)(slot + 0x10) = buf;
        if (buf == 0 || fn_80180ADC(buf, *(int *)(slot + 4), handle) == 0) {
            fn_801809A8(handle);
            FileStream__Close(slot);
            return 0;
        }
        if (flags & 2) {
            fn_80180FD4(handle, -1, 0, 0, 0);
        }
        fn_801809A8(handle);
    }
    return slot;
}
