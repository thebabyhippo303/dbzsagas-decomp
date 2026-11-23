/* Options__GetSerializedSettingsSize @ 0x801269C8 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Options__GetSerializedSettingsSize @ 0x801269C8 (0x20). ProDG -O2. */
extern int Options__CalculateSerializedSettingsSize(void);

int Options__GetSerializedSettingsSize(void) {
    return Options__CalculateSerializedSettingsSize();
}
