/* Simple__IsInRange @ 0x802C872C (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* BASELINE 73.2% (30/39, len 41/39). Head 0x0-0x6C matches. Tail wall @0x70:
   need (fcmpu-cr7,li,blt,fcmpu,cror,bso,fcmpu,bltlr,bgtlr,li,blr). TRIED: OR/
   nested/empty-then + result-var; `!(x>b)` gives ble, `!(b<x)` gives bge,
   never cror+bso (outer `!(<=)` DOES give bso — asymmetric peephole?).
   Also `||` operand order swaps + cr7 missing (needs single-compare reuse).
   -Muse-L2-M11 */
typedef int s32;
typedef float f32;

extern f32 lbl_803532B8 __attribute__((section(".data")));
extern f32 lbl_803DE500;
extern f32 lbl_803DE504;

s32 Simple__IsInRange(f32 x, f32 a, f32 b) {
    s32 result;
    if (!(__builtin_fabsf(a - b) <= lbl_803DE500)) {
        if (!(a >= lbl_803532B8)) {
            if (!(x >= lbl_803532B8)) {
                b -= lbl_803DE504;
            } else {
                a += lbl_803DE504;
            }
        } else if (!(x >= lbl_803532B8)) {
            a -= lbl_803DE504;
        } else {
            b += lbl_803DE504;
        }
    }
    result = 0;
    if (x < a) {
    } else if (!(b < x)) {
        return 1;
    }
    if (x < b) {
        return result;
    }
    if (x > a) {
        return result;
    }
    return 1;
}
