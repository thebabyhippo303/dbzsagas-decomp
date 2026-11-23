/* String__IsCharInSet @ 0x8018C310 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8;
typedef int s32;

s32 String__IsCharInSet(s32 arg0, u8 *arg1) {
    u8 c;
    c = *arg1;
    while (c != 0) {
        if ((s8)c == arg0) {
            return 1;
        }
        arg1 += 1;
        c = *arg1;
    }
    return 0;
}
