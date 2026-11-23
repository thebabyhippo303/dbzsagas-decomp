/* Console__ReadDescriptor @ 0x802CDB50 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Console__ReadDescriptor @ 0x802CDB50 (0x20). ProDG -O2. */
extern int fn_8015CE80(int handle, void *buffer, int length);

int Console__ReadDescriptor(int handle, void *buffer, int length) {
    return fn_8015CE80(handle, buffer, length);
}
