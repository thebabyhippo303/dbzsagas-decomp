/* PathFollower__AdvanceDistance @ 0x802BE848 (size: 0x254, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
/* WIP ~36%/79%al: PathFollower__AdvanceDistance @ 0x802BE848 (149 ins, 5 callees, 3 blrl).
 * DECODED CFG (offsets from 0x802BE848; b-targets certain, blt/beq/bso-targets hypothesized):
 * entry: r31=obj; f31=lbl_80352724; d=obj[28]+dist; obj[140]=0; obj[28]=d;
 *   if (d < f31) goto L21(=0x138? clamp-minD block);
 *   if (!(d <= Path__GetLength(obj[4]))) goto L90(past-end);
 *   obj[140]=1; if (!Path__IsLooped(obj[4])) goto L30;
 *   WrapDistance(obj); goto L168;
 * L30(0x78): if (obj[148]==0) goto L43(=0xac, skip-negate);
 *   obj[48]=-obj[48]; obj[44]=-obj[36];
 *   if (obj[28] < f31) goto L67(=0x12c? f0=obj[40]; obj[28]=f31; ->0x164);
 *   else { obj[28]=GetLength(); goto L168; }   // 0xa8 b 0x11c
 * 0xac: if (obj[152]==0) goto L78(=0x138? or 0x12c?);
 *   f0=obj[108]; if (!(f0 <= f31)) goto L75(=0x12c? f0=obj[40]; obj[28]=f31; ->0x164);
 *   obj[112]=f0; obj[48]=f31;
 *   if-chain on obj[116] (NOT switch!): 0: {obj[28]=f31; r4=1; vcall obj[0]+adj(Count); goto L168;}
 *     1: {obj[28]=f31; goto L168;} 2: {obj[28]=GetLength(); goto L168;} else goto L90;
 * L78?: f0=obj[28]; if (!(f0 >= f31)) goto L84(=GetLength->obj[28], fallthrough 0x15c);
 *   obj[28]=f31; // fallthrough 0x15c: obj[48]=f31;
 * L168(0x168): if (obj[160]==0) goto L110(tail-copies);
 *   r30=sp+8 (V3* homed across calls!); Evaluate(&tmp,obj[4],obj[28]); obj[72..80]=tmp(int-copy);
 *   GetTangent(&tmp? r3=r30, obj[4], obj[28]);
 * L110/else: two indirect-call branches copying V3s to obj[72..] and obj[60..]; epilogue lmw r30.
 * FIXES vs engine seed: (1) V3 tmp local + &tmp at both spline calls to home r30 (engine union broke CSE);
 * (2) obj[116] as if/else-if chain (engine switch made extra cmpwi/beq/bgt); (3) blt (not bge) at 0xa4 via
 * if (obj[28] < f31) with bodies in target order; (4) entry checks NOT merged (separate d<f31, d<=len).
 * RETRY: confirm .L targets from branch displacements, then score this shape.
 */
typedef struct { f32 x, y, z; } V3;
f32 Path__GetLength(void *);
s32 Path__IsLooped(void *);
void PathFollower__WrapDistance(void *);
void *SplinePath__EvaluateAtDistance(V3 *, void *, f32);
void *SplinePath__GetTangentAtDistance(V3 *, void *, f32);
extern f32 lbl_80352724 __attribute__((section(".data")));

void PathFollower__AdvanceDistance(void *arg0, f32 farg0) {
    V3 tmp;
    f32 minD;
    f32 d;
    s32 mode;
    minD = lbl_80352724;
    d = *(f32 *)((char *)arg0 + 0x1C) + farg0;
    *(s32 *)((char *)arg0 + 0x8C) = 0;
    *(f32 *)((char *)arg0 + 0x1C) = d;
    if (d < minD) {
        goto clamp21;
    }
    if (!(d <= Path__GetLength(*(void **)((char *)arg0 + 4)))) {
        goto pastend;
    }
    *(s32 *)((char *)arg0 + 0x8C) = 1;
    if (Path__IsLooped(*(void **)((char *)arg0 + 4)) != 0) {
        PathFollower__WrapDistance(arg0);
        goto tail;
    }
    if (*(s32 *)((char *)arg0 + 0x94) != 0) {
        *(f32 *)((char *)arg0 + 0x30) = -*(f32 *)((char *)arg0 + 0x30);
        *(f32 *)((char *)arg0 + 0x2C) = -*(f32 *)((char *)arg0 + 0x24);
        if (*(f32 *)((char *)arg0 + 0x1C) < minD) {
            goto negclamp;
        }
        *(f32 *)((char *)arg0 + 0x1C) = Path__GetLength(*(void **)((char *)arg0 + 4));
        goto tail;
    }
    if (*(s32 *)((char *)arg0 + 0x98) != 0) {
        d = *(f32 *)((char *)arg0 + 0x6C);
        if (!(d <= minD)) {
            goto get40;
        }
        *(f32 *)((char *)arg0 + 0x70) = d;
        *(f32 *)((char *)arg0 + 0x30) = minD;
        mode = *(s32 *)((char *)arg0 + 0x74);
        if (mode == 0) {
            *(f32 *)((char *)arg0 + 0x1C) = minD;
            goto tail;
        } else if (mode == 1) {
            *(f32 *)((char *)arg0 + 0x1C) = minD;
            goto tail;
        } else if (mode == 2) {
            *(f32 *)((char *)arg0 + 0x1C) = Path__GetLength(*(void **)((char *)arg0 + 4));
            goto tail;
        } else {
            goto pastend;
        }
    }
    if (!(*(f32 *)((char *)arg0 + 0x1C) >= minD)) {
        *(f32 *)((char *)arg0 + 0x1C) = Path__GetLength(*(void **)((char *)arg0 + 4));
    } else {
        *(f32 *)((char *)arg0 + 0x1C) = minD;
    }
    *(f32 *)((char *)arg0 + 0x30) = minD;
    goto tail;
negclamp:
get40:
clamp21:
    *(f32 *)((char *)arg0 + 0x1C) = minD;
    *(f32 *)((char *)arg0 + 0x30) = minD;
    goto tail;
pastend:
    *(f32 *)((char *)arg0 + 0x1C) = Path__GetLength(*(void **)((char *)arg0 + 4));
    *(f32 *)((char *)arg0 + 0x30) = minD;
tail:
    if (*(s32 *)((char *)arg0 + 0xA0) != 0) {
        SplinePath__EvaluateAtDistance(&tmp, *(void **)((char *)arg0 + 4), *(f32 *)((char *)arg0 + 0x1C));
        *(V3 *)((char *)arg0 + 0x48) = tmp;
        SplinePath__GetTangentAtDistance(&tmp, *(void **)((char *)arg0 + 4), *(f32 *)((char *)arg0 + 0x1C));
    }
    *(V3 *)((char *)arg0 + 0x3C) = tmp;
}
