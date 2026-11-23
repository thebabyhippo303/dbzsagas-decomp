/* Database__LoadFileBuffer @ 0x80205EA8 (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Database__LoadFileBuffer @ 0x80205EA8 (0xF0). ProDG -O2. */

typedef struct DbFileBuf {
    char pad[0x14];
    void *buf;
    void *copy;
    int size_field;
    char pad2[0x94 - 0x20];
    int flag;
} DbFileBuf;

extern void MemHeap__SetAllocMethod(int method);
extern void *MemHeap__Alloc(int size, int alignment);
extern int fn_801884E8(int path);
extern int fn_80255BB0(int handle);
extern void fn_80255AE0(int handle, void *buf);
extern void *fn_80180210(int path, int *outSize, int flags);

extern DbFileBuf lbl_803ADBE4 __attribute__((section(".data")));
extern int lbl_803ADC78 __attribute__((section(".data")));

int Database__LoadFileBuffer(int path) {
    int saved_path;
    int handle;
    DbFileBuf *db;
    int zero;
    int size;
    void *buf;

    saved_path = path;
    db = &lbl_803ADBE4;
    zero = 0;
    db->buf = (void *)zero;
    MemHeap__SetAllocMethod(1);
    handle = fn_801884E8(saved_path);
    if (handle != 0) {
        size = fn_80255BB0(handle);
        db->buf = MemHeap__Alloc(size, 32);
        MemHeap__SetAllocMethod(0);
        fn_80255AE0(handle, db->buf);
        db->flag = zero;
    } else {
        db->buf = fn_80180210(saved_path, &size, 0);
    }
    MemHeap__SetAllocMethod(0);
    if (size == 0) {
        lbl_803ADC78 = 2;
        return 0;
    }
    buf = lbl_803ADBE4.buf;
    if (buf == 0) {
        lbl_803ADBE4.flag = 1;
        return 0;
    }
    lbl_803ADBE4.copy = buf;
    lbl_803ADBE4.size_field = size;
    return 1;
}
