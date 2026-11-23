/* Avatar__AdjustKameForCell @ 0x800439F0 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;
typedef float f32;
extern void *Script__PopInt(void *, void *);
extern void Script__PushInt(void *, void *, s32);
extern f32 lbl_80311E54 __attribute__((section(".data")));
extern void *lbl_803DC3C0 __attribute__((section(".sdata")));
void Avatar__AdjustKameForCell(void *script, void *context) {
    void *actor;
    actor = Script__PopInt(script, context);
    Script__PushInt(script, context,
        (*(s32 *)(*(char **)((char *)actor + 0x19D8) + 0xC) == 0x20 &&
         *(s32 *)((char *)actor + 0x2D4) != 0 &&
         !(*(f32 *)((char *)actor + 0x288) / *(f32 *)((char *)actor + 0x28C) > lbl_80311E54) &&
         ((*(s32 *)(*(char **)((char *)lbl_803DC3C0 + 0x238) + 4) ^ 0x15) == 0)));
}
