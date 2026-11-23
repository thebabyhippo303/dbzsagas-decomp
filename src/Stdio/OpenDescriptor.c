/* Stdio__OpenDescriptor @ 0x801681E8 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Stdio__OpenDescriptor @ 0x801681E8 (0x58). ProDG -O2. */
extern int lbl_803DD9AC;
extern int fn_802CDB20(const char *path, int flags, ...);

int Stdio__OpenDescriptor(int *err, const char *path, int flags) {
    int result;

    lbl_803DD9AC = 0;
    result = fn_802CDB20(path, flags);
    if (result == -1 && lbl_803DD9AC != 0) {
        *err = lbl_803DD9AC;
    }
    return result;
}
