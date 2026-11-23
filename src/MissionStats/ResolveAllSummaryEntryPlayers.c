/* MissionStats__ResolveAllSummaryEntryPlayers @ 0x80125A38 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
s32 MissionStats__GetSummaryEntryCount(void);
void MissionStats__ResolveSummaryEntryPlayers(void *entry);
extern char *lbl_803941F4 __attribute__((section(".data")));

void MissionStats__ResolveAllSummaryEntryPlayers(void) {
    s32 i;
    for (i = 0; i < MissionStats__GetSummaryEntryCount(); i++) {
        MissionStats__ResolveSummaryEntryPlayers(*(void **)(lbl_803941F4 + (i << 2)));
    }
}
