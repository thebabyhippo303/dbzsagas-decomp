/* FileServer__ReadMemory @ 0x8015B0D8 (size: 0x50, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned int (*ReadCallback)(void *, void *);

typedef struct {
    u8 pad[0x6A4];
    ReadCallback callback;
    u8 pad2[0x74];
    u16 size;
    u16 pad3;
    u32 offset;
    u8 pad4[0x10];
    u8 buffer[1];
} FileServer;

void FileServer__CopyMemory(void *, const void *, u32);

static u32 swap32(u32 value) {
    return ((value & 0xFF) << 24) | ((value & 0xFF00) << 8) |
           ((value >> 8) & 0xFF00) | ((value >> 24) & 0xFF);
}

static u16 swap16(u16 value) {
    return (u16)((value << 8) | (value >> 8));
}

void FileServer__ReadMemory(FileServer *self) {
    u32 offset = swap32(self->offset);
    u16 size = swap16(self->size);
    FileServer__CopyMemory(self->buffer, (u8 *)self + offset, size);
    self->callback((u8 *)self + 0x700, (void *)(size + 8));
}
