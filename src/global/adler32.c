/* adler32 @ 0x80255748 (size: 0x184, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

#define NULL 0
#define NMAX 5552
#define BASE 65521U

s32 adler32(u32 adler, u8 *buf, u32 len) {
    u32 s1 = adler & 0xFFFF;
    u32 s2 = adler >> 16;
    s32 k;

    if (buf == NULL) {
        return 1;
    }
    while (len != 0) {
        k = len < NMAX ? len : NMAX;
        len -= k;
        while (k >= 16) {
            k -= 16;
            s1 += buf[0];  s2 += s1;
            s1 += buf[1];  s2 += s1;
            s1 += buf[2];  s2 += s1;
            s1 += buf[3];  s2 += s1;
            s1 += buf[4];  s2 += s1;
            s1 += buf[5];  s2 += s1;
            s1 += buf[6];  s2 += s1;
            s1 += buf[7];  s2 += s1;
            s1 += buf[8];  s2 += s1;
            s1 += buf[9];  s2 += s1;
            s1 += buf[10]; s2 += s1;
            s1 += buf[11]; s2 += s1;
            s1 += buf[12]; s2 += s1;
            s1 += buf[13]; s2 += s1;
            s1 += buf[14]; s2 += s1;
            s1 += buf[15]; s2 += s1;
            buf += 16;
        }
        while (k != 0) {
            k--;
            s1 += *buf++;
            s2 += s1;
        }
        s1 %= BASE;
        s2 %= BASE;
    }
    return (s32)((s2 << 16) | s1);
}
