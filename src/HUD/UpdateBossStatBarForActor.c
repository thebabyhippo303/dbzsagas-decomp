/* HUD__UpdateBossStatBarForActor @ 0x801206A0 (size: 0x274, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 HUD__IsBossStatBarAvailable(void *);
void *Mem__New(u32);
void *HUD__ConstructBossStatBarWidgetGroup(void *, void *);
u32 Mem__NewArray(u32);
void Mem__Delete(void *);
void *memcpy(void *, const void *, unsigned int);
void *memset(void *, int, u32);
void *memmove(void *, void *, unsigned int);
void HUD__ProjectActorPositionToScreen(void *, void *);
void HUD__UpdateBossStatBarSphereAsset(void *, void *);
void HUD__LayoutBossStatBarWidgets(void *, void *, f32);
f32 atan2f(f32, f32);
void fn_80121E10(void *, f32);
void HUD__ShowBossStatBarWidgets(void *);
void HUD__UpdateBossStatBarWidgets(void *);
extern M2C_UNK lbl_803941DC __attribute__((section(".data")));
extern f32 lbl_80327380 __attribute__((section(".data")));
extern f32 lbl_80327384 __attribute__((section(".data")));
extern f32 lbl_80327388 __attribute__((section(".data")));
extern f32 lbl_8032738C __attribute__((section(".data")));
extern f32 lbl_803DE500;

/* HUD boss-stat-bar vector at lbl_803941DC: { array@0; count@4; cap@8;
 * growth@12; flags@16 }. Search array for available bar, else construct +
 * append (grow w/ memcpy+delete, memset tail if flags), shift-append via
 * memmove when count moved. Then project actor, sphere asset, layout,
 * angle (atan2 with zero/NaN guard), show+update. V2 42.7%: shape right;
 * open: frame 72 vs 80 (target has +20 word + vec3rd word @32?), regalloc
 * (st r27->r30 dance, r23/r24 addi hoists), crclr before memcpy/Project,
 * NaN three-way (f1!=f1 probe: does MW reuse CR0 for bso or emit 2nd fcmpu?). */

void *HUD__UpdateBossStatBarForActor(void *arg0) {
    u32 stkA;
    u32 stkB;
    void *sp10;
    u32 outX;
    u32 outY;
    s32 var_r30;
    void *st;
    s32 var_r29;
    s32 oldCount;
    u32 cntBytes;
    u32 newBytes;
    void *newArr;
    f32 den;
    f32 num;
    f32 ratio;
    f32 f2;
    f32 f1;
    f32 angle;

    var_r30 = 0;
    sp10 = NULL;
    st = (void *)&lbl_803941DC;
    if (var_r30 < M2C_FIELD(st, s32 *, 4)) {
        var_r29 = 0;
        do {
            if (HUD__IsBossStatBarAvailable(*(void **)((u8 *)M2C_FIELD(&lbl_803941DC, void **, 0) + var_r29)) != 0) {
                sp10 = *(void **)((u8 *)M2C_FIELD(&lbl_803941DC, void **, 0) + var_r29);
                goto check_sp;
            }
            var_r30 += 1;
            var_r29 += 4;
        } while (var_r30 < M2C_FIELD(st, s32 *, 4));
    }
check_sp:
    if (sp10 != NULL) {
        goto post;
    }
    sp10 = HUD__ConstructBossStatBarWidgetGroup(Mem__New(16), arg0);
    st = (void *)&lbl_803941DC;
    oldCount = M2C_FIELD(st, s32 *, 4);
    if (oldCount != M2C_FIELD(st, s32 *, 8)) {
        goto insert;
    }
    cntBytes = oldCount * 4;
    newBytes = (oldCount + M2C_FIELD(st, s32 *, 12)) * 4;
    newArr = (void *)Mem__NewArray(newBytes);
    if (newArr == NULL) {
        goto post;
    }
    if (M2C_FIELD(&lbl_803941DC, void **, 0) != NULL) {
        memcpy(newArr, M2C_FIELD(&lbl_803941DC, void **, 0), cntBytes);
    }
    if (M2C_FIELD(&lbl_803941DC, void **, 0) != NULL) {
        Mem__Delete(M2C_FIELD(&lbl_803941DC, void **, 0));
    }
    M2C_FIELD(&lbl_803941DC, void **, 0) = newArr;
    M2C_FIELD(&lbl_803941DC, s32 *, 8) = M2C_FIELD(&lbl_803941DC, s32 *, 8) + M2C_FIELD(&lbl_803941DC, s32 *, 12);
    if (M2C_FIELD(&lbl_803941DC, s32 *, 16) != 0) {
        memset((u8 *)newArr + cntBytes, 0, newBytes - cntBytes);
    }
insert:
    if ((M2C_FIELD(st, s32 *, 4) - oldCount) == 0) {
        goto skipmem;
    }
    memmove((u8 *)M2C_FIELD(st, void **, 0) + M2C_FIELD(st, s32 *, 4) * 4 + 4, (u8 *)M2C_FIELD(st, void **, 0) + M2C_FIELD(st, s32 *, 4) * 4, (M2C_FIELD(st, s32 *, 4) - oldCount) * 4);
skipmem:
    *(void **)((u8 *)M2C_FIELD(st, void **, 0) + M2C_FIELD(st, s32 *, 4) * 4) = sp10;
    M2C_FIELD(st, s32 *, 4) = M2C_FIELD(st, s32 *, 4) + 1;
post:
    HUD__ProjectActorPositionToScreen(&outX, arg0);
    den = M2C_FIELD(arg0, f32 *, 0x28C);
    num = M2C_FIELD(arg0, f32 *, 0x288);
    ratio = num / den;
    HUD__UpdateBossStatBarSphereAsset(sp10, arg0);
    stkA = outX;
    stkB = outY;
    HUD__LayoutBossStatBarWidgets(sp10, &stkA, ratio);
    f2 = lbl_80327384 - *(f32 *)&outY;
    f1 = *(f32 *)&stkA - lbl_80327380;
    if (f2 == lbl_80327388) {
        if (f1 == lbl_80327388) {
            angle = lbl_80327388;
        } else {
            if (f1 != f1) {
                angle = (-lbl_803DE500) * lbl_8032738C;
            } else {
                angle = lbl_803DE500 * lbl_8032738C;
            }
        }
    } else {
        angle = atan2f(f1, f2);
    }
    fn_80121E10(sp10, angle);
    HUD__ShowBossStatBarWidgets(sp10);
    HUD__UpdateBossStatBarWidgets(sp10);
    return sp10;
}
