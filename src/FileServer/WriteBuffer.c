/* FileServer__WriteBuffer @ 0x8015D840 (size: 0xA4, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;

void FileServer__PulseDeviceControlBits(void);
u32 FileServer__ReadStatusByte(void);
void FileServer__WriteBufferWord(s32);
void FileServer__WriteCommandByte(s32);
void FileServer__ClearDeviceControlBits(void);

void FileServer__WriteBuffer(void *p, s32 n) {
    s32 bound;
    s32 idx;
    s32 c;

    FileServer__PulseDeviceControlBits();
    while (FileServer__ReadStatusByte() == 0) {
    }
    do {
        FileServer__PulseDeviceControlBits();
    } while (FileServer__ReadStatusByte() == 0xFF);
    FileServer__PulseDeviceControlBits();
    bound = n & 28;
    if (bound == 0) {
        goto skip_words;
    }
    idx = 0;
    do {
        FileServer__WriteBufferWord(*(s32 *) ((char *) p + idx));
        idx += 4;
    } while (idx < bound);
    p = (char *) p + idx;
skip_words:
    bound = n & 3;
    if (bound == 0) {
        goto skip_bytes;
    }
    idx = 0;
    do {
        FileServer__WriteCommandByte(*(u8 *) ((char *) p + idx));
        idx += 1;
    } while (idx < bound);
skip_bytes:
    for (c = 15; c != 0; c--) {
    }
    FileServer__ClearDeviceControlBits();
}
