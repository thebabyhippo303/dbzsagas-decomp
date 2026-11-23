/* Archive__SeekBackingSource @ 0x8017FB48 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Archive__SeekBackingSource @ 0x8017FB48 (0x64). ProDG -O2. */
extern void FileStream__Seek(void *stream, int offset, int whence);
extern void fn_801809E8(void *stream);
extern void fn_80180FD4(void *stream, int a, int b, int c, int d);

void Archive__SeekBackingSource(void *self, int offset) {
    if ((*(int *)self & 1) == 0)
        FileStream__Seek(*(void **)((char *)self + 8), offset, 2);
    else {
        fn_801809E8(*(void **)((char *)self + 8));
        fn_80180FD4(*(void **)((char *)self + 8), -1, 0, 0, 0);
    }
}
