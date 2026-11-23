/* Stdio__WriteDescriptor @ 0x801682F0 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Stdio__WriteDescriptor @ 0x801682F0 (0x58). ProDG -O2. */
extern int lbl_803DD9AC;
extern int fn_802CDAE0(int fd, const void *buf, int count);

void Stdio__WriteDescriptor(int *err, int fd, const void *buf, int count) {
    int saved;
    lbl_803DD9AC = 0;
    if (fn_802CDAE0(fd, buf, count) == -1) {
        saved = lbl_803DD9AC;
        if (saved != 0)
            *err = saved;
    }
}
