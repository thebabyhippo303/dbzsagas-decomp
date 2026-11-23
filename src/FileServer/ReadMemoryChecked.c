/* FileServer__ReadMemoryChecked @ 0x8015B1C4 (size: 0xF0, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef struct FileServer {
    u8 pad0[0x390];
    u32 flags;
} FileServer;
typedef s32 (*ReadCallback)(void *, u32);

extern s32 FileServer__CopyMemory(void *, const void *, u32);
extern void DCFlushRange(void *, u32);
extern void FileServer__ReportCommunicationError(FileServer *);

static u16 swap16(u16 value) {
    return (u16)((value << 8) | (value >> 8));
}

static u32 swap32(u32 value) {
    return ((value & 0xFF) << 24) | ((value & 0xFF00) << 8) |
           ((value >> 8) & 0xFF00) | ((value >> 24) & 0xFF);
}

void FileServer__ReadMemoryChecked(FileServer *self) {
    u8 *base = (u8 *)self;
    u16 size = swap16(*(u16 *)(base + 0x702));
    u16 request_size;
    u32 address = swap32(*(u32 *)(base + 0x704));
    u32 flags = self->flags;
    u32 i;
    s32 copied;

    if (size > 0x8000) {
        size = 0x8000;
        *(u16 *)(base + 0x702) = swap16(size);
    }
    copied = 0;
    request_size = size;
    if ((flags & 0x01000000) == 0 && address >= 0xFFFF8000 && address <= 0xFFFFBFFF) {
        *(u16 *)(base + 0x702) = 0;
        copied = FileServer__CopyMemory(base + 0x700, (const void *)8, request_size);
        if (copied != 1) {
            for (i = 0; i < request_size; ++i) {
                base[0x708 + i] = 0xAA;
            }
        }
    }
    if (copied != 1) {
        copied = FileServer__CopyMemory(base + 0x708, (const void *)address, request_size);
    }
    if (address > 0xFFFFBFFF) {
        DCFlushRange((void *)address, request_size);
    }
    if (((ReadCallback)*(void **)(base + 0x6A4))(base + 0x700, (u32)request_size + 8) != 0) {
        FileServer__ReportCommunicationError(self);
    }
}
