/* Stdio__ReadDescriptor @ 0x80168298 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Stdio__ReadDescriptor @ 0x80168298 (0x58). ProDG -O2. */
extern int lbl_803DD9AC;
extern int fn_802CDB50(int fd, void *buf, int count);

int Stdio__ReadDescriptor(int *err, int fd, void *buf, int count) {
    int result;

    lbl_803DD9AC = 0;
    result = fn_802CDB50(fd, buf, count);
    if (result == -1 && lbl_803DD9AC != 0) {
        *err = lbl_803DD9AC;
    }
    return result;
}
