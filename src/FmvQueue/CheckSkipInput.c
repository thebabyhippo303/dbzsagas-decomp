/* FmvQueue__CheckSkipInput @ 0x801DAADC (size: 0x1CC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

typedef u32 (*VirtFn)(void *);
typedef struct {
    char pad[16];
    s16 adj0; char _p0[2]; VirtFn fn0;
    s16 adj1; char _p1[2]; VirtFn fn1;
    s16 adj2; char _p2[2]; VirtFn fn2;
} VTab;
typedef struct {
    char pad[48];
    s32 w48;
    s32 w52;
    char pad2[48];
    s32 w104;
    s32 w108;
} Ctrl;
s32 ControllerMap__IsPlayerAssigned(void *, u32);
void *ControllerMap__GetPlayerController(void *, u32);
void *ControllerMap__GetController(void *, u32);
extern void *lbl_803DCC74 __attribute__((section(".sdata")));

s32 FmvQueue__CheckSkipInput(void) {
    Ctrl *c;
    VTab *ct;
    u32 i;
    s32 skip;
    s32 found;
    s32 t1;
    s32 t2;

    skip = 0;
    found = 0;
    i = 0;
    (*(VTab **)((char *)lbl_803DCC74 + 16))->fn0((char *)lbl_803DCC74 + (*(VTab **)((char *)lbl_803DCC74 + 16))->adj0);
    goto cond1;
body1:
    if (ControllerMap__IsPlayerAssigned(lbl_803DCC74, i) != 0) {
        Ctrl *c;
        found = 1;
        c = (Ctrl *)ControllerMap__GetPlayerController(lbl_803DCC74, i);
        t2 = 0;
        if (c->w48 == 0) {
            t2 = !(c->w52 ^ 1);
        }
        if (t2 != 0) {
            goto pressed1;
        }
        t1 = 0;
        if (c->w104 == 0) {
            t1 = !(c->w108 ^ 1);
        }
        if (t1 == 0) {
            goto next1;
        }
pressed1:
        skip = 1;
next1: ;
    }
    i += 1;
cond1:
    if (i < (*(VTab **)((char *)lbl_803DCC74 + 16))->fn2((char *)lbl_803DCC74 + (*(VTab **)((char *)lbl_803DCC74 + 16))->adj2)) {
        goto body1;
    }
    if (found != 0) {
        goto done;
    }
    i = 0;
    goto cond2;
body2:
    {
        Ctrl *c;
        u32 vr;
        c = (Ctrl *)ControllerMap__GetController(lbl_803DCC74, i);
    ct = *(VTab **)((char *)c + 504);
    vr = ct->fn2((char *)c + ct->adj2);
    if (vr != 0) {
        t2 = 0;
        if (c->w48 == 0) {
            t2 = !(c->w52 ^ 1);
        }
        if (t2 != 0) {
            goto pressed2;
        }
        vr = 0;
        if (c->w104 == 0) {
            vr = !(c->w108 ^ 1);
        }
        if (vr == 0) {
            goto next2;
        }
pressed2:
        skip = 1;
next2: ;
    }
    }
    i += 1;
cond2:
    if (i < (*(VTab **)((char *)lbl_803DCC74 + 16))->fn2((char *)lbl_803DCC74 + (*(VTab **)((char *)lbl_803DCC74 + 16))->adj2)) {
        goto body2;
    }
done:
    (*(VTab **)((char *)lbl_803DCC74 + 16))->fn1((char *)lbl_803DCC74 + (*(VTab **)((char *)lbl_803DCC74 + 16))->adj1);
    return skip;
}
