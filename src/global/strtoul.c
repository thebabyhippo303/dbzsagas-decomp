/* strtoul @ 0x8016351C (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: strtoul @ 0x8016351C (0x38). ProDG -O2. */
extern void *lbl_803D8688;
extern unsigned long Runtime__ParseUnsignedInteger(
    void *state, const char *text, char **end, int base);

unsigned long strtoul(const char *text, char **end, int base) {
    return Runtime__ParseUnsignedInteger(lbl_803D8688, text, end, base);
}
