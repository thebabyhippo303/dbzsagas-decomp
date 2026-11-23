/* Sphere__UpdateHandles @ 0x8026E5F4 (size: 0x24C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern s32 lbl_803DD63C;
extern s32 lbl_803DD640;
extern char lbl_803B1FFC[];
extern char lbl_803B202C[];
extern char lbl_803B204C[];
int EffectHandle__SelectTextureSet(void *);
u32 EffectHandle__Release(u32);
u32 EffectHandle__Create(u32, u32, u32, u32, void *, void *, void *, s32);
u32 EffectHandle__SetFlags(u32, s32);
void Sphere__FreeDropShadowHandles(void *);
void Sphere__UpdateHandles(void *arg0) {
    s32 i;
    s32 ctr;
    s32 ctr2;
    s32 idx;
    s32 off;
    u32 h;
    u32 tab;
    char *d;
    void *p244;
    void *p292;
    void *p340;
    void *p388x;
    void *p436;
    void *p484;
    void *p532;
    void *p580;
    void *p628;
    void *p676;
    void *p724;
    void *p820;
    void *p868;
    void *p916;
    void *p772;
    void *a148;
    void *a196;
    void *a52;
    void *a100;
    s32 k;
    if (*(void **)((char *)arg0 + 364) == NULL) return;
    if (*(void **)*(void **)((char *)arg0 + 364) == NULL) return;
    if (*(void **)((char *)arg0 + 384) != *(void **)((char *)arg0 + 20)) return;
    if (*(void **)((char *)arg0 + 388) != *(void **)((char *)arg0 + 24)) return;
    if (lbl_803DD63C == 0) {
        for (ctr = 4; ctr != 0; ctr--) {
        }
        lbl_803DD63C = 1;
    }
    if (lbl_803DD640 == 0) {
        for (ctr2 = 4; ctr2 != 0; ctr2--) {
        }
        lbl_803DD640 = 1;
    }
    p244 = (char *)arg0 + 244;
    p292 = (char *)arg0 + 292;
    p340 = (char *)arg0 + 340;
    p388x = (char *)arg0 + 388;
    p436 = (char *)arg0 + 436;
    p484 = (char *)arg0 + 484;
    p532 = (char *)arg0 + 532;
    p580 = (char *)arg0 + 580;
    p628 = (char *)arg0 + 628;
    p676 = (char *)arg0 + 676;
    p724 = (char *)arg0 + 724;
    p820 = (char *)arg0 + 820;
    p868 = (char *)arg0 + 868;
    p916 = (char *)arg0 + 916;
    p772 = (char *)arg0 + 772;
    a148 = (char *)arg0 + 148;
    a196 = (char *)arg0 + 196;
    a52 = (char *)arg0 + 52;
    a100 = (char *)arg0 + 100;
    if (*(void **)((char *)arg0 + 20) != NULL) {
        EffectHandle__SelectTextureSet(*(void **)((char *)arg0 + 20));
        if (*(void **)((char *)arg0 + 16) != NULL) {
            tab = *(u32 *)((char *)*(void **)((char *)arg0 + 16) + 48);
            if (tab != 0) {
                if (*(u32 *)((char *)arg0 + 24) == 0x12345678) {
                    d = *(char **)((char *)arg0 + 412);
                    ((void (*)(void *, s32))*(void **)(d + 780))((char *)arg0 + *(s16 *)(d + 776), 1);
                    h = *(u32 *)*(void **)((char *)arg0 + 364);
                    if (h != 0) {
                        EffectHandle__Release(h);
                    }
                    h = EffectHandle__Create(*(u32 *)((char *)arg0 + 24), 0, 0, 0, lbl_803B1FFC, lbl_803B202C, lbl_803B204C, -1);
                    *(u32 *)*(void **)((char *)arg0 + 364) = h;
                    if (h != 0) {
                        EffectHandle__SetFlags(h, 0);
                    }
                }
                else {
                    d = *(char **)((char *)arg0 + 412);
                    k = (*(u32 *)((char *)arg0 + 24) * 16 + tab);
                    ((void (*)(void *, s32))*(void **)(d + 780))((char *)arg0 + *(s16 *)(d + 776), *(u16 *)(k + 14) + 1);
                    i = 0;
                    if (i < *(s32 *)((char *)arg0 + 368)) {
                        off = 0;
                        do {
                            h = *(u32 *)((char *)*(void **)((char *)arg0 + 364) + off);
                            if (h != 0) {
                                EffectHandle__Release(h);
                            }
                            h = EffectHandle__Create(*(u16 *)((char *)(((*(u32 *)((char *)arg0 + 24) + i) * 16) + tab) + 8), 0, 0, 0, lbl_803B1FFC, lbl_803B202C, lbl_803B204C, -1);
                            *(u32 *)((char *)*(void **)((char *)arg0 + 364) + off) = h;
                            if (h != 0) {
                                EffectHandle__SetFlags(h, 0);
                            }
                            i++;
                            off += 4;
                        } while (i < *(s32 *)((char *)arg0 + 368));
                    }
                }
            }
        }
    }
    *(void **)((char *)arg0 + 380) = *(void **)((char *)arg0 + 16);
    *(void **)((char *)arg0 + 384) = *(void **)((char *)arg0 + 20);
    *(void **)((char *)arg0 + 388) = *(void **)((char *)arg0 + 24);
    Sphere__FreeDropShadowHandles(arg0);
}
