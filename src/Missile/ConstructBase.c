/* Missile__ConstructBase @ 0x800DC8A0 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
extern void fn_801A2CE4(void);
extern void Missile__InitializeGeometry(void *, s32, s32, s32);
extern int lbl_80333370 __attribute__((section(".data")));
extern int lbl_80333430 __attribute__((section(".data")));
void *Missile__ConstructBase(void *arg0) {
    fn_801A2CE4();
    return (Missile__InitializeGeometry(
        (*(void **)((char *)arg0 + 0x198) = &lbl_80333370, arg0),
        (*(void **)((char *)arg0 + 0x34) = &lbl_80333430, 0),
        (*(s32 *)((char *)arg0 + 0x24) = 0, 0), 0), arg0);
}
