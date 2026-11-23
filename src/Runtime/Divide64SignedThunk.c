/* Runtime__Divide64SignedThunk @ 0x8015D930 (size: 0x4, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef long long s64;

s64 Runtime__Divide64Signed(s64, s64);

s64 Runtime__Divide64SignedThunk(s64 numerator, s64 denominator) {
    return Runtime__Divide64Signed(numerator, denominator);
}
