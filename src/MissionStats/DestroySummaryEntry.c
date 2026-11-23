/* MissionStats__DestroySummaryEntry @ 0x80122AE0 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MissionStats__DestroySummaryEntry @ 0x80122AE0 (0x28). ProDG -O2. */
extern void fn_801843CC(void *entry);

void MissionStats__DestroySummaryEntry(void *entry, int flags) {
    if ((flags & 1) != 0) {
        fn_801843CC(entry);
    }
}
