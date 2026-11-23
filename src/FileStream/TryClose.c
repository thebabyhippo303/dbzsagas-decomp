/* FileStream__TryClose @ 0x8017F338 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: FileStream__TryClose @ 0x8017F338 (0x34). ProDG -O2. */
extern void FileStream__Close(void *stream);

int FileStream__TryClose(void *stream) {
    if (stream == 0)
        return 0;
    FileStream__Close(stream);
    return 1;
}
