/* strtol @ 0x80166E28 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: strtol @ 0x80166E28 (0x38). ProDG -O2. */
extern void *lbl_803D8688;
extern long Runtime__ParseSignedInteger(
    void *state, const char *text, char **end, int base);

long strtol(const char *text, char **end, int base) {
    return Runtime__ParseSignedInteger(lbl_803D8688, text, end, base);
}
