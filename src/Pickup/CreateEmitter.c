/* Pickup__CreateEmitter @ 0x800F2890 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Pickup__CreateEmitter @ 0x800F2890 (0x74). ProDG -O2. */
extern void Emitter__Kill(void *emitter);
extern void *Emitter__CreateFromAsset(void *asset, void *a, void *b, int c, int d, int e, int f, int g, int h);

void Pickup__CreateEmitter(void *self, void *asset) {
    void *old = *(void **)((char *)self + 1540);
    if (old != 0) {
        Emitter__Kill(old);
        *(void **)((char *)self + 1540) = 0;
    }
    *(void **)((char *)self + 1540) = Emitter__CreateFromAsset(
        asset, (char *)self + 56, (char *)self + 104, 0, 0, 0, 0, 0, -1);
}
