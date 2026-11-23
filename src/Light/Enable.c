/* Light__Enable @ 0x8002DDEC (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Light__Enable @ 0x8002DDEC (0x70). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);

void Light__Enable(void *script, void *context) {
    void *light = (void *)Script__PopInt(script, context);
    int flag = Script__PopInt(script, context);
    int on = 1;
    unsigned flags;
    if (flag == 0)
        on = 0;
    if (on != 0) {
        flags = *(unsigned *)((char *)light + 112);
        flags |= 1u;
    } else {
        flags = *(unsigned *)((char *)light + 112);
        flags &= ~1u;
    }
    *(unsigned *)((char *)light + 112) = flags;
}
