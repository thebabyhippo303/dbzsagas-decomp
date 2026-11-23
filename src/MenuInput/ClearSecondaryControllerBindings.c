/* MenuInput__ClearSecondaryControllerBindings @ 0x80007D88 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;
typedef short s16;

typedef struct {
    char pad0[0x20];
    s16 adjust;
    char pad1[2];
    u32 (*getCount)(void *);
} MapVtbl;

typedef struct {
    char pad0[0xC];
    u32 count;
    MapVtbl *vtbl;
} ControllerMap;

typedef struct {
    char pad0[0x40];
    s16 adjust;
    char pad1[2];
    void (*setBinding)(void *, s32);
} PadVtbl;

typedef struct {
    char pad[0x1F8];
    PadVtbl *vtbl;
} Pad;

s32 ControllerMap__IsPlayerAssigned(ControllerMap *, u32);
Pad *ControllerMap__GetPlayerController(ControllerMap *, u32);
void ControllerMap__UnassignPlayer(ControllerMap *, u32);
extern ControllerMap *lbl_803DCC74 __attribute__((section(".sdata")));

void MenuInput__ClearSecondaryControllerBindings(void) {
    u32 i;
    ControllerMap *map = lbl_803DCC74;
    if (map->count > 1) {
        i = 1;
        while (i < lbl_803DCC74->vtbl->getCount((char *)lbl_803DCC74 + lbl_803DCC74->vtbl->adjust)) {
            if (ControllerMap__IsPlayerAssigned(lbl_803DCC74, i) != 0) {
                Pad *pad = ControllerMap__GetPlayerController(lbl_803DCC74, i);
                pad->vtbl->setBinding((char *)pad + pad->vtbl->adjust, 1);
                ControllerMap__UnassignPlayer(lbl_803DCC74, i);
            }
            i++;
        }
    }
}
