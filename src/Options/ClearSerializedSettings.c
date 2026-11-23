/* Options__ClearSerializedSettings @ 0x801262FC (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Options__ClearSerializedSettings @ 0x801262FC (0x40). ProDG -O2. */
typedef struct {
    char pad[0x248];
    volatile int serializedCountA;
    volatile int serializedCountB;
    volatile int serializedCount;
    char serializedSettings[0x5000];
} Options;

extern void fn_801636E4(void *destination, int value, unsigned int size);

void Options__ClearSerializedSettings(Options *self) {
    self->serializedCount = 0;
    self->serializedCountA = 0;
    self->serializedCountB = 0;
    fn_801636E4(self->serializedSettings, 0, sizeof(self->serializedSettings));
}
