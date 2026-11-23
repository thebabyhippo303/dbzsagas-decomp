/* MissionStats__InitializePlayerRecord @ 0x80125A9C (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef float f32;
void AvatarControls__InitializeDefaultBindings(void *, s32);
void MissionStats__ClearPlayerRecordCounters(void *);
void MissionStats__ClearPlayerRecordVector3(void *);
extern f32 lbl_8032760C __attribute__((section(".data")));

void *MissionStats__InitializePlayerRecord(void *arg0) {
    f32 v = lbl_8032760C;
    *(s32 *)arg0 = 0;
    *(s32 *)((char *)arg0 + 0x18) = 0;
    *(f32 *)((char *)arg0 + 0xC) = v;
    *(f32 *)((char *)arg0 + 8) = v;
    *(f32 *)((char *)arg0 + 4) = v;
    AvatarControls__InitializeDefaultBindings(arg0, 0);
    MissionStats__ClearPlayerRecordVector3((char *)arg0 + 0x134);
    MissionStats__ClearPlayerRecordVector3((char *)arg0 + 0x140);
    MissionStats__ClearPlayerRecordCounters(arg0);
    return arg0;
}
