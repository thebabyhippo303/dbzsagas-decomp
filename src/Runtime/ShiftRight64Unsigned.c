/* Runtime__ShiftRight64Unsigned @ 0x8016894C (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
unsigned long long Runtime__ShiftRight64Unsigned(unsigned long long value, int shift) {
    union {
        unsigned long long all;
        struct {
            unsigned hi;
            unsigned lo;
        } p;
    } in, out;
    int remain;

    if (shift == 0) {
        return value;
    }
    in.all = value;
    remain = 32 - shift;
    if (remain <= 0) {
        out.p.hi = 0;
        out.p.lo = in.p.hi >> -remain;
    } else {
        out.p.hi = in.p.hi >> shift;
        out.p.lo = (in.p.lo >> shift) | (in.p.hi << remain);
    }
    return out.all;
}
