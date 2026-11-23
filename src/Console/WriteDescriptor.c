/* Console__WriteDescriptor @ 0x802CDAE0 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Console__WriteDescriptor @ 0x802CDAE0 (0x20). ProDG -O2. */
extern int Console__WriteByHandle(int handle, const void *buffer, int length);

int Console__WriteDescriptor(int handle, const void *buffer, int length) {
    return Console__WriteByHandle(handle, buffer, length);
}
