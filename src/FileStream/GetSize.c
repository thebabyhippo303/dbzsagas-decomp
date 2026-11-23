/* FileStream__GetSize @ 0x8017F320 (size: 0x18, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct FileStream {
    int kind;
    int size;
} FileStream;

int FileStream__GetSize(FileStream *self) {
    if (self == 0)
        return -1;
    return self->size;
}
