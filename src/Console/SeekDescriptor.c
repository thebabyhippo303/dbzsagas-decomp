/* Console__SeekDescriptor @ 0x802CDB30 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Console__SeekDescriptor @ 0x802CDB30 (0x20). ProDG -O2. */
extern int fn_8015CE90(int handle, int offset, int whence);

int Console__SeekDescriptor(int handle, int offset, int whence) {
    return fn_8015CE90(handle, offset, whence);
}
