/* Stdio__WriteCallback @ 0x8016809C (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched. ProDG -O2. */
extern int Stdio__SeekDescriptor(int fd, short mode, int a, int b);
extern int Stdio__WriteDescriptor(int fd, short mode, void *buf, int size);

void Stdio__WriteCallback(void *self, void *buf, int size) {
    unsigned flags;
    if (*(unsigned short *)((char *)self + 12) & 0x100)
        Stdio__SeekDescriptor(*(int *)((char *)self + 92),
                               *(short *)((char *)self + 14), 0, 2);
    flags = *(unsigned short *)((char *)self + 12);
    flags &= ~0x1000u;
    *(unsigned short *)((char *)self + 12) = (unsigned short)flags;
    Stdio__WriteDescriptor(*(int *)((char *)self + 92),
                           *(short *)((char *)self + 14), buf, size);
}
