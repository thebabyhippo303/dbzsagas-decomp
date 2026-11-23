/* UberFile__OpenAsync @ 0x80180384 (size: 0xE4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: UberFile__OpenAsync @ 0x80180384 (0xE4). ProDG -O2. */
extern char lbl_8033D35C[];
extern void *fn_80180310(char *path, int mode, int flags);
extern void *fn_801805DC(void *handle);
extern void fn_80180658(void *handle, void *buf, void *info, int arg);
extern int fn_801807B8(void *handle, int close);
extern void Debug__FormatMessage(char *fmt, ...);
extern int OSDisableInterrupts(void);
extern void OSRestoreInterrupts(int level);
extern void OSDisableScheduler(void);
extern void OSEnableScheduler(void);
extern void MemHeap__SetAllocMethod(int method);
extern void *MemHeap__Alloc(void *size, int alignment);

void *UberFile__OpenAsync(char *path, void **outBuf, void **outInfo) {
    void *handle;
    int level;

    handle = fn_80180310(path, 0, 2);
    if (handle == 0) {
        Debug__FormatMessage(lbl_8033D35C, path);
        goto fail;
    }
    level = OSDisableInterrupts();
    OSDisableScheduler();
    OSRestoreInterrupts(level);
    *outInfo = fn_801805DC(handle);
    MemHeap__SetAllocMethod(1);
    *outBuf = MemHeap__Alloc(*outInfo, 32);
    MemHeap__SetAllocMethod(0);
    level = OSDisableInterrupts();
    OSEnableScheduler();
    OSRestoreInterrupts(level);
    if (*outBuf != 0) {
        fn_80180658(handle, *outBuf, *outInfo, 0);
        return handle;
    }
    fn_801807B8(handle, 0);
fail:
    return 0;
}
