/* FluffLoop__HandleOptionsCancelInput @ 0x80056C90 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: FluffLoop__HandleOptionsCancelInput @ 0x80056C90 (0xAC). ProDG -O2. */
typedef short s16;
typedef int s32;
typedef float f32;

typedef void (*FluffChildCancelFn)(void *self, int arg, f32 value);

extern f32 lbl_8031A8B0 __attribute__((section(".data")));
extern void *lbl_803DC368;
extern void *lbl_803DCC20;
extern void *lbl_803DCC74;

void fn_8018FEA0(void *obj, int arg);
void fn_801904E4(void *obj, f32 value);
void fn_80190558(void *obj, f32 value);
void Audio__SetMasterDialogVolume(void *obj, f32 value);
void fn_80190680(void *obj, int value);
void *fn_801D6674(void *obj, int arg);

void FluffLoop__HandleOptionsCancelInput(char *self) {
    char *child;

    fn_8018FEA0(lbl_803DCC20, 1);
    child = *(char **)(self + 0x19C);
    ((FluffChildCancelFn)*(void **)(child + 0x37C))(self + *(s16 *)(child + 0x378), 0, lbl_8031A8B0);
    fn_801904E4(lbl_803DCC20, *(f32 *)(self + 0x1A64C));
    fn_80190558(lbl_803DCC20, *(f32 *)(self + 0x1A650));
    Audio__SetMasterDialogVolume(lbl_803DCC20, *(f32 *)(self + 0x1A654));
    fn_80190680(lbl_803DCC20, *(s32 *)(self + 0x1A664));
    *(s32 *)((char *)lbl_803DC368 + 0x11C) = *(s32 *)(self + 0x1A648);
    *(s32 *)((char *)fn_801D6674(lbl_803DCC74, 0) + 0x1F4) = *(s32 *)(self + 0x1A648);
}
