/* Fade__GetColor @ 0x80228E08 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Fade__GetColorById @ 0x80228E08 (0x3C). ProDG -O2. */
extern void *Fade__FindByIdOrDefault(int id);

void *Fade__GetColorById(void *out, int id) {
    void *rec;

    rec = Fade__FindByIdOrDefault(id);
    *(unsigned *)out = *(unsigned *)((char *)rec + 0x14);
    return out;
}
