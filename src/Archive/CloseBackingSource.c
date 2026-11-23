/* Archive__CloseBackingSource @ 0x8017FAA0 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Archive__CloseBackingSource @ 0x8017FAA0 (0x6C). ProDG -O2. */
typedef int s32;

extern int FileStream__TryClose(void *stream);
extern void fn_801809A8(void *stream);

s32 Archive__CloseBackingSource(void *arg0) {
    s32 flags;
    s32 bit0;
    s32 value;
    void *stream;

    flags = *(s32 *)arg0;
    bit0 = flags & 1;
    if (bit0 != 0) {
        stream = *(void **)((char *)arg0 + 8);
        if (stream != 0) {
            fn_801809A8(stream);
        }
        value = 0;
    } else {
        value = flags & 2;
        if (value != 0) {
            FileStream__TryClose(*(void **)((char *)arg0 + 8));
            *(s32 *)((char *)arg0 + 8) = bit0;
            return 1;
        }
    }
    *(s32 *)((char *)arg0 + 8) = value;
    return 1;
}
