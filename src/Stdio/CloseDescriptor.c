/* Stdio__CloseDescriptor @ 0x80168198 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Stdio__CloseDescriptor @ 0x80168198 (0x50). ProDG -O2. */
extern int lbl_803DD9AC;
extern int fn_802CDB00(int fd);

void Stdio__CloseDescriptor(int *err, int fd) {
    int saved;
    lbl_803DD9AC = 0;
    if (fn_802CDB00(fd) == -1) {
        saved = lbl_803DD9AC;
        if (saved != 0)
            *err = saved;
    }
}
