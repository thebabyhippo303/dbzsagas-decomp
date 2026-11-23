/* Stdio__ReadCallback @ 0x80168038 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Stdio__ReadCallback @ 0x80168038 (0x64). ProDG -O2. */
extern int Stdio__ReadDescriptor(int fd, short mode, void *buf, int size);

void Stdio__ReadCallback(void *self, void *buf, int size) {
    unsigned flags;
    int n = Stdio__ReadDescriptor(*(int *)((char *)self + 92), *(short *)((char *)self + 14), buf, size);
    if (n >= 0)
        *(int *)((char *)self + 88) += n;
    else {
        flags = *(unsigned short *)((char *)self + 12);
        flags &= ~0x1000u;
        *(unsigned short *)((char *)self + 12) = (unsigned short)flags;
    }
}
