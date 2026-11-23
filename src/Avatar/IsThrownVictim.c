/* Avatar__IsThrownVictim @ 0x800A27DC (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__IsThrownVictim @ 0x800A27DC (0x44). ProDG -O2. */
int Avatar__IsThrownVictim(void *self) {
    void *p = *(void **)((char *)self + 8);
    if (p == (char *)self + 16)
        return 0;
    if (p != (char *)self + 180)
        return (p == (char *)self + 484) << 1;
    return 1;
}
