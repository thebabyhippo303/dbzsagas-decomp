/* File__OpenPath @ 0x80187754 (size: 0x228, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef unsigned int u32;
void File__Release(void *);
void *FileHandle__Open(char *, void *, s32);
void *MemHeap__Alloc(u32, u32);
void *File__FindResolved(char *);
s32 File__FindMemoryImage(char *);
s32 fn_80255BB0(s32);
void fn_80255AE0(s32, void *);
void File__RemapPath(char *, char *);
s32 String__CompareIgnoreCase(char *, char *);
void *dblLoad(char *, void *, s32);
s32 FileHandle__GetSize(void *);
void FileHandle__Close(void *, s32);
s32 FileHandle__Read(void *, void *, s32, s32);
void memFree(void *);
void *Database__GetTypedObject(s32, char *, void *, void *);
extern char lbl_8033DFB4[] __attribute__((section(".data")));

s32 File__OpenPath(char *self, char *path, s32 mode) {
    char buf[128];
    s32 sp88;
    s32 size;
    void *res;
    s32 img;
    void *h;
    s32 ok;
    void *dbl;
    s32 r;

    File__Release(self);
    *(void **)(self + 0x14) = 0;
    *(void **)(self + 0) = 0;
    *(s32 *)(self + 0xC) = 0;
    *(void **)(self + 0x10) = 0;
    *(s32 *)(self + 4) = 1;
    if (mode == 1) {
        *(void **)(self + 0x14) = FileHandle__Open(path, &sp88, 1);
        *(void **)(self + 0x18) = MemHeap__Alloc(0x10000, 0x20);
        r = 1;
        *(s32 *)(self + 0x1C) = 0;
        if (*(void **)(self + 0x14) == 0) {
            r = 0;
        }
        return r;
    }
    res = File__FindResolved(path);
    if (res != 0) {
        *(void **)(self + 0) = *(void **)res;
        *(s32 *)(self + 0xC) = *(s32 *)((char *)res + 0xC);
        *(s32 *)(self + 4) = 0;
        *(void **)(self + 0x10) = 0;
        return 1;
    }
    img = File__FindMemoryImage(path);
    if (img != 0) {
        *(s32 *)(self + 0xC) = fn_80255BB0(img);
        *(void **)(self + 0) = MemHeap__Alloc(*(s32 *)(self + 0xC), 0x20);
        fn_80255AE0(img, *(void **)(self + 0));
        *(s32 *)(self + 4) = 1;
        *(void **)(self + 0x10) = res;
        return 1;
    }
    File__RemapPath(buf, path);
    if (String__CompareIgnoreCase(buf, path) != 0) {
        *(void **)(self + 0x20) = dblLoad(buf, 0, 0);
    }
    dbl = *(void **)(self + 0x20);
    if (dbl == 0) {
        h = FileHandle__Open(path, &sp88, 0);
        if (h == 0) {
            return 0;
        }
        size = FileHandle__GetSize(h);
        if (size <= 0) {
            FileHandle__Close(h, 0);
            return 0;
        }
        *(void **)(self + 0) = MemHeap__Alloc(size, 0x20);
        if (*(void **)(self + 0) == 0) {
            return 0;
        }
        ok = FileHandle__Read(h, *(void **)(self + 0), size, 0);
        FileHandle__Close(h, 0);
        if (ok == 0) {
            memFree(*(void **)(self + 0));
            *(s32 *)(self + 0) = img;
            return 0;
        }
    } else {
        *(void **)(self + 0) = Database__GetTypedObject(0x500, lbl_8033DFB4, dbl, &size);
        *(s32 *)(self + 4) = img;
    }
    *(void **)(self + 0x10) = 0;
    *(s32 *)(self + 0xC) = size;
    return 1;
}
