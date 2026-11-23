/* FileServer__CopyMemory @ 0x8015AB00 (size: 0x78, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef unsigned int u32; typedef unsigned char u8;

u32 CopyFlag;

u32 FileServer__CopyMemory(void *dst, void *src, u32 len) {
    u32 *d;
    u32 *s;
    u32 *end;

    CopyFlag = 1;
    if ((((u32)dst & 3) != 0) || (((u32)src & 3) != 0) || ((len & 3) != 0)) {
        u8 *db = (u8 *)dst - 1;
        u8 *sb = (u8 *)src - 1;
        u8 *endb = sb + len;
        do {
            *db++ = *sb++;
        } while (sb < endb);
        CopyFlag = 0;
        return 1;
    }
    d = (u32 *)dst - 1;
    s = (u32 *)src - 1;
    end = (u32 *)((char *)s + len);
    do {
        *d++ = *s++;
    } while (s < end);
    CopyFlag = 0;
    return 1;
}
