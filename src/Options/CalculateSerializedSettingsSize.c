/* Options__CalculateSerializedSettingsSize @ 0x801269A8 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Options__CalculateSerializedSettingsSize @ 0x801269A8 (0x20). ProDG -O2. */
typedef struct {
    char pad[0x250];
    int serializedCount;
} Options;

int Options__CalculateSerializedSettingsSize(Options *self) {
    int size = (self->serializedCount << 6) + 4;
    return size + (((size ^ 15) + 1) & 15);
}
