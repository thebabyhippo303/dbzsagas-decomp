/* rand @ 0x802CE60C (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: rand @ 0x802CE60C (0x24). ProDG -O2. */
typedef struct {
    char pad[0x58];
    unsigned int seed;
} Reent;

extern Reent *lbl_803D8738;

int rand(void) {
    Reent *reent = lbl_803D8738;
    reent->seed = reent->seed * 0x41C64E6Du + 0x3039u;
    return reent->seed & 0x7FFFFFFFu;
}
