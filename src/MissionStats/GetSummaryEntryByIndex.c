/* MissionStats__GetSummaryEntryByIndex @ 0x801259E8 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;

s32 MissionStats__GetSummaryEntryCount(void);
extern s32 *lbl_803941F4 __attribute__((section(".data")));

s32 MissionStats__GetSummaryEntryByIndex(s32 index) {
    if (index >= 0 && index < MissionStats__GetSummaryEntryCount()) {
        return *(s32 *)((u32)lbl_803941F4 + ((u32)index << 2));
    }
    return 0;
}
