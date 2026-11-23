/* Rand__Next @ 0x80254680 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Rand__Next @ 0x80254680 (0x24). */
typedef struct {
    unsigned int seed;
} Rand;

int Rand__Next(Rand *random) {
    random->seed = random->seed * 0x343FD + 0x269EC3;
    return (random->seed >> 16) & 0x7FFF;
}
