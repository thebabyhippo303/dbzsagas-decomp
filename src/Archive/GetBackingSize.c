/* Archive__GetBackingSize @ 0x8017FB0C (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched. ProDG -O2. */
typedef struct {
    int flags;
    int pad_4;
    void *backing;
} Archive;

extern int FileStream__GetSize(void *stream);
extern int fn_80180ACC(void *backing);

int Archive__GetBackingSize(Archive *archive) {
    if (archive->flags & 1)
        return fn_80180ACC(archive->backing);
    return FileStream__GetSize(archive->backing);
}
