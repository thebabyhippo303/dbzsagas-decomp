/* FmvQueue__SkipCallback @ 0x801DAAAC (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

s32 FmvQueue__CheckSkipInput(s32);

s32 FmvQueue__SkipCallback(s32 arg0) {
    s32 result;
    if (arg0 != 0) {
        result = FmvQueue__CheckSkipInput(arg0);
    } else {
        result = 0;
    }
    return result;
}
