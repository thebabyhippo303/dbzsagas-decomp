/* AvatarControls__SetPlayerRecordAndEnabled @ 0x80099D0C (size: 0xC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
void AvatarControls__SetPlayerRecordAndEnabled(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    *(volatile s32 *)((char *)arg0 + 0x10) = arg3;
    *(volatile s32 *)((char *)arg0 + 4) = arg1;
}
