/* Effect__TriggerExploFXWithCameraShake @ 0x800DAE4C (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
extern void Avatar__SpawnAttackFXWithCameraShake(s32, s32, void *);
extern int lbl_80322A34 __attribute__((section(".data")));
void Avatar__TriggerExploFXWithCameraShake(s32 arg0) {
    Avatar__SpawnAttackFXWithCameraShake(arg0, arg0, &lbl_80322A34);
}
