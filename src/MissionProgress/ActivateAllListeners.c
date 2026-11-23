/* MissionProgress__ActivateAllListeners @ 0x80119D80 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
s32 MissionProgress__GetListenerCount(void);
void MissionProgressListener__Activate(void *self);
extern void ** lbl_80394194 __attribute__((section(".data")));
void MissionProgress__ActivateAllListeners(void) {
    s32 i;
    for (i = 0; i < MissionProgress__GetListenerCount(); i++) { MissionProgressListener__Activate(lbl_80394194[i]); }
}
