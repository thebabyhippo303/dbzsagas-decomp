/* Pickup__Destroy @ 0x8002BE94 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Pickup__Destroy @ 0x8002BE94 (0x48). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern void Pickup__MarkForDestruction(void *pickup);
extern void Actor__MarkForDeath(void *pickup, float delay);

void Pickup__Destroy(void *script, void *context) {
    void *pickup = Script__PopInt(script, context);
    volatile float *base = (volatile float *)0x80310000;
    if (pickup != 0) {
        Pickup__MarkForDestruction(pickup);
        /* 0.0f pool at 0x80311624; displacement must be immediate, not a reloc. */
        Actor__MarkForDeath(pickup, base[1417]);
    }
}
