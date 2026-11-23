/* ParticleMgr__Update @ 0x8021D2B0 (size: 0x2E8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef union { f64 d; struct { s32 hi; u32 lo; } w; } DConv;

void Particle__FreeEntry(void *);
void ParticleMgr__UpdateEmitters(void);
s32 WindMgr__CollectActive(void *, u32);
void IntrusiveList__Remove(void *, void *);
void IntrusiveList__PushFront(void *, void *);
s32 Emitter__Activate(u32);
M2C_UNK ParticleMgr__FlushSpawnRequests(void);
M2C_UNK Particle__Update(void *, s32);
M2C_UNK WindMgr__EvaluateCollected(M2C_UNK, M2C_UNK);
extern f32 lbl_80346648 __attribute__((section(".rodata")));
extern f32 lbl_8034664C __attribute__((section(".rodata")));
extern f32 lbl_80346650 __attribute__((section(".rodata")));
extern f64 lbl_80346640 __attribute__((section(".rodata")));
extern s32 lbl_803AD664 __attribute__((section(".data")));
extern M2C_UNK lbl_803A35A0 __attribute__((section(".bss")));
extern M2C_UNK lbl_803AD05C[];

void ParticleMgr__Update(void) {
    DConv cu;
    f32 raw;
    f32 t0;
    f32 f648v;
    f32 f650v;
    register f32 t31;
    f32 vf;
    f32 tA;
    f64 c0v;
    M2C_UNK *pb;
    M2C_UNK *a35;
    s32 cnt;
    M2C_UNK *lp;
    u32 cnt1;
    void *node;
    void *tmp;
    register s32 tret;
    M2C_UNK *q;
    s32 next;
    s32 off;
    s32 *flagArr;
    M2C_UNK *arrA;
    M2C_UNK *arr1;
    M2C_UNK *arr2;
    M2C_UNK *p2;
    M2C_UNK *q2;
    M2C_UNK *b32;
    s32 cnt2;
    s32 *cbase;
    u32 r30u;
    M2C_UNK *b19;
    M2C_UNK *b20;

    b19 = (M2C_UNK *) 0x803B0000;
    pb = (M2C_UNK *) lbl_803AD05C;
    if (M2C_FIELD(pb, s32 *, 0x534) != 0) {
        goto sk180;
    }
    if (M2C_FIELD(pb, s32 *, 0x52C) == 0) {
        goto sk180;
    }
    a35 = &lbl_803A35A0;
    cu.w.hi = 0x43300000;
    cu.w.lo = M2C_FIELD(a35, u32 *, 0xC);
    c0v = lbl_80346640;
    f648v = lbl_80346648;
    f650v = lbl_80346650;
    raw = M2C_FIELD(a35, f32 *, 0x1C);
    t0 = (f32) (cu.d - c0v) * f648v;
    M2C_FIELD(pb, f32 *, 0x538) = raw;
    M2C_FIELD(pb, f32 *, 0x53C) = t0;
    if (__builtin_fabsf(raw) < f650v) {
        goto sk180;
    }
    lp = (M2C_UNK *) ((char *) pb + 32);
    M2C_FIELD(pb, void **, 0x608) = (void *) 1;
    cnt1 = 0x14;
    do {
        node = M2C_FIELD(lp, void **, 0);
        lp = (M2C_UNK *) ((char *) lp + 16);
        if (node == NULL) {
            goto countdown;
        }
        tmp = node;
        node = M2C_FIELD(tmp, void **, 0xC4);
        if ((M2C_FIELD(tmp, s32 *, 4) & 2048) != 0) {
            goto countdown;
        }
        if ((M2C_FIELD(M2C_FIELD(tmp, void **, 0xC), s32 *, 0x54) & 8192) != 0) {
            goto countdown;
        }
        Particle__FreeEntry(tmp);
        goto loopnext;
countdown:
        cnt1 -= 1;
loopnext:;
    } while (cnt1 != 0);
    ParticleMgr__UpdateEmitters();
    ParticleMgr__FlushSpawnRequests();
    if ((tret = WindMgr__CollectActive(NULL, 3U)) == 0) {
        goto skipeval;
    }
    WindMgr__EvaluateCollected(0, 0);
skipeval:;
    b20 = (M2C_UNK *) 0x803B0000;
    q = (M2C_UNK *) lbl_803AD05C;
    cnt = 0;
    arrA = (M2C_UNK *) ((char *) q + 352);
    do {
        next = cnt + 1;
        flagArr = (s32 *) ((char *) q + 1152);
        if (flagArr[cnt] != 0) {
            off = cnt * 16;
            node = *(void **) ((char *) arrA + off);
            if (node != NULL) {
                t31 = lbl_8034664C;
                lp = (M2C_UNK *) ((char *) flagArr - 1152);
                arr1 = (M2C_UNK *) ((char *) lp + 352);
                arr2 = (M2C_UNK *) ((char *) lp + 32);
                cnt = off;
                do {
                    tmp = node;
                    node = M2C_FIELD(tmp, void **, 0xC4);
                    if ((M2C_FIELD(tmp, s32 *, 4) & 512) != 0) {
                        vf = M2C_FIELD(lp, f32 *, 0x53C);
                    } else {
                        vf = M2C_FIELD(lp, f32 *, 0x538);
                    }
                    tA = M2C_FIELD(tmp, f32 *, 0x30) - vf;
                    M2C_FIELD(tmp, f32 *, 0x30) = tA;
                    if (tA > t31) {
                        IntrusiveList__Remove((void *) ((char *) arr1 + cnt), tmp);
                        IntrusiveList__PushFront((void *) ((char *) arr2 + cnt), tmp);
                        if (M2C_FIELD(tmp, s32 *, 0xB4) != 0) {
                            Emitter__Activate((u32) M2C_FIELD(tmp, s32 *, 0xB4));
                        }
                    }
                } while (node != NULL);
            }
            p2 = (M2C_UNK *) ((char *) b19 - 12196);
            q2 = p2;
            b32 = (M2C_UNK *) ((char *) p2 + 32);
            if (*(void **) ((char *) b32 + off) != NULL) {
                goto collect;
            }
            M2C_FIELD(p2, void **, 0x608) = NULL;
            goto i_end;
collect:
            M2C_FIELD(q2, s32 *, 0x46C) = 0;
            node = *(void **) ((char *) b32 + off);
            if (node == NULL) {
                goto count_top;
            }
            do {
                q2 = q;
                cnt2 = M2C_FIELD(q2, s32 *, 0x46C);
                cbase = (s32 *) M2C_FIELD(q2, void **, 0x468);
                cbase[cnt2] = (s32) node;
                M2C_FIELD(q2, s32 *, 0x46C) = cnt2 + 1;
                M2C_FIELD(node, s32 *, 4) = M2C_FIELD(node, s32 *, 4) | 1;
                node = M2C_FIELD(node, void **, 0xC4);
            } while (node != NULL);
count_top:
            cnt2 = M2C_FIELD(q, s32 *, 0x46C);
            cnt = 0;
            if (cnt >= cnt2) {
                goto i_end;
            }
            lp = (M2C_UNK *) ((char *) b20 - 12196);
            cbase = (s32 *) M2C_FIELD(lp, void **, 0x468);
            r30u = 0;
            do {
                tmp = *(void **) ((char *) cbase + r30u);
                if (M2C_FIELD(tmp, s32 *, 4) & 1) {
                    Particle__Update(tmp, tret);
                }
                cnt += 1;
                r30u += 4;
            } while (cnt < M2C_FIELD(lp, s32 *, 0x46C));
i_end:
            ;
            }
            cnt = next;
        } while (cnt <= 19);
        {
            M2C_UNK *t9 = (M2C_UNK *) 0x803B0000;
            if (M2C_FIELD(t9, s32 *, 1384) == 0) {
                goto sk177;
            }
            tA = M2C_FIELD(t9, f32 *, 1408) + M2C_FIELD(t9, f32 *, 1336);
            M2C_FIELD(t9, f32 *, 1408) = tA;
            if (!(!(tA <= M2C_FIELD(t9, f32 *, 1404)))) {
                goto sk177;
            }
            M2C_FIELD(t9, s32 *, 1384) = 0;
sk177:;
            lbl_803AD664 = 0;
        }
sk180:;
}
