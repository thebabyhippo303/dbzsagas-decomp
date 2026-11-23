/* WaterPool__AddRipple @ 0x8029E40C (size: 0x2C0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

f32 Random__Float01(void);
s32 rand(void);
f32 sqrtf(f32);
void *Mem__New(u32);
void WaterPool__InitializeRipple(void *, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void WaterPool__InsertRipple(void *, void *);
extern f32 lbl_80350040 __attribute__((section(".data")));
extern void **lbl_803DD650;

/* WIP 9.7% (id 9196dbd4). Full target decode (see lesson):
 * - InitializeRipple takes 17 args: (new, u16 pool[idx+2], f1=pool12, f2=pool32,
 *   f3=pool36, f4=pool40, f5=pool76, f6=pool16*pool12, f7=pool20*pool12, f8=pool24,
 *   stk8=pool28, stk12=pool32, stk16=pool36*pool12, stk20=pool40*pool12,
 *   stk24=pool44, stk28=pool48, stk32=pool52).
 * - InsertRipple(r15ripple, newObj). Mem__New(156).
 * - Inner top @AC (.L43), outer top @70 (.L28), skips -> @294.
 * - Squares spill to f32[3] @40; int/float dual-use s32[3] @56 (iv[1] int-only).
 * - Count test uses full *(pool+4+idx) expr (reloaded per iter, no cnt var).
 * - Outer-next addi hoisted @78, applied @294; NULL path li r3,0 then deref *(0).
 * - WALL: target stmw r15 (17 kept ints); best here stmw r21/r23. MW coloring
 *   assigns arg0->r21 arg2->r18 arg3->r22 ripple->r15 idx->r31 cnt-r17 next-r16. */
void WaterPool__AddRipple(u8 **arg0, s32 arg1, s32 *arg2, f32 *arg3) {
    f32 fv[3];
    s32 iv[3];
    void *r11s;
    void *pool;
    void *r15v;
    s32 r11v;
    s32 idx;
    s32 r17v;
    f32 f29v;
    f32 f31v;
    f32 f30v;
    f32 dirx;
    f32 diry;
    f32 dirz;
    f32 q0;
    f32 q1;
    f32 q2;
    f32 p12;
    f32 p76;
    f32 p16;
    f32 p20;
    f32 p24;
    f32 p32;
    f32 p36;
    f32 p40;
    f32 p44;
    f32 p48;
    f32 p52;
    f32 p28;
    void *newObj;
    u32 h2;

    r11s = *lbl_803DD650;
    if (arg1 < 0) {
        arg1 = M2C_FIELD(r11s, s32 *, 4) - 1;
    }
    if (arg1 >= M2C_FIELD(r11s, s32 *, 4)) {
        goto nullr;
    }
    if (M2C_FIELD(r11s, s32 *, 4) == 0) {
nullr:
        r15v = NULL;
        goto deref;
    }
    r15v = *(void **)((u8 *)M2C_FIELD(r11s, void **, 0) + arg1 * 4);
deref:
    r15v = *(void **)r15v;
    r11v = 0;
    do {
        idx = r11v * 80;
        pool = *arg0;
        if (*(s32 *)((u8 *)pool + 4 + idx) == 0) {
            goto nextpool;
        }
        r17v = 0;
        if (r17v >= *(s32 *)((u8 *)pool + 4 + idx)) {
            goto nextpool;
        }
        f29v = lbl_80350040;
        do {
            f31v = Random__Float01();
            p28 = *(f32 *)((u8 *)pool + 8 + idx);
            p28 += p28;
            f30v = (Random__Float01() - f29v) * p28;
            f31v = (f31v - f29v) * p28;
            if ((rand() & 4096) != 0) {
                f31v = -f31v;
            }
            if ((rand() & 4096) != 0) {
                f30v = -f30v;
            }
            dirx = arg3[0];
            r17v += 1;
            diry = arg3[1];
            dirz = arg3[2];
            q0 = dirx * dirx;
            fv[0] = q0;
            q1 = diry * diry;
            fv[1] = q1;
            q2 = dirz * dirz;
            fv[2] = q2;
            sqrtf(fv[0] + fv[1] + fv[2]);
            pool = *arg0;
            p12 = *(f32 *)((u8 *)pool + 56 + idx);
            iv[0] = arg2[0];
            fv[0] = arg3[0] * p12;
            fv[1] = arg3[1] * p12;
            fv[2] = arg3[2] * p12;
            iv[1] = arg2[1];
            iv[2] = arg2[2];
            *(f32 *)&iv[0] = *(f32 *)&iv[0] + f31v + fv[0];
            *(f32 *)&iv[2] = *(f32 *)&iv[2] + f30v + fv[2];
            newObj = Mem__New(156);
            pool = *arg0;
            p12 = *(f32 *)((u8 *)pool + 12 + idx);
            p32 = *(f32 *)((u8 *)pool + 32 + idx);
            p36 = *(f32 *)((u8 *)pool + 36 + idx);
            p40 = *(f32 *)((u8 *)pool + 40 + idx);
            p76 = *(f32 *)((u8 *)pool + 76 + idx);
            p16 = *(f32 *)((u8 *)pool + 16 + idx) * p12;
            p20 = *(f32 *)((u8 *)pool + 20 + idx) * p12;
            p24 = *(f32 *)((u8 *)pool + 24 + idx);
            h2 = *(u16 *)((u8 *)pool + idx + 2);
            p28 = *(f32 *)((u8 *)pool + 28 + idx);
            p44 = *(f32 *)((u8 *)pool + 44 + idx);
            p48 = *(f32 *)((u8 *)pool + 48 + idx);
            p52 = *(f32 *)((u8 *)pool + 52 + idx);
            WaterPool__InitializeRipple(newObj, h2, p12, p32, p36, p40, p76, p16, p20, p24, p28, p32, p36 * p12, p40 * p12, p44, p48, p52);
            WaterPool__InsertRipple(r15v, newObj);
            pool = *arg0;
        } while (r17v < *(s32 *)((u8 *)pool + 4 + idx));
nextpool:
        r11v += 1;
    } while (r11v <= 2);
}
