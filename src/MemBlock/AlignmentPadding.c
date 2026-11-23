/* MemBlock__AlignmentPadding @ 0x80185CF8 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MemBlock__AlignmentPadding @ 0x80185CF8 (0x4C). ProDG -O2. */
extern unsigned MemBlock__GetAlignment(void *self);

unsigned MemBlock__AlignmentPadding(void *self) {
    unsigned pad = 0;
    unsigned align = MemBlock__GetAlignment(self);
    unsigned addr = (unsigned)self + 4;
    unsigned rem = addr % align;
    if (rem != 0)
        pad = align - rem;
    return pad;
}
