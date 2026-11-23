/* SurfaceType__SplitKeyValue @ 0x801F8FAC (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
char *SurfaceType__SplitKeyValue(int unused, char *text) {
    unsigned char *bytes;
    int i;
    unsigned char c;
    unsigned char zero;
    char *rest;

    bytes = (unsigned char *)text;
    i = 0;
    c = bytes[i];
    if (c == 0)
        goto none;
    zero = 0;
    rest = text + 1;
    for (;;) {
        if (c == ':') {
            bytes[i] = zero;
            return rest;
        }
        i = i + 1;
        rest = rest + 1;
        c = bytes[i];
        if (c == 0)
            goto none;
    }
none:
    return 0;
}
