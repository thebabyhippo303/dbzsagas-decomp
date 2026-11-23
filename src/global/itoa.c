/* itoa @ 0x80163D5C (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned int u32;
typedef int s32;
char * strrev(char *);
extern char lbl_8036FEEC[] __attribute__((section(".data")));

char * itoa(u32 n, char *buf, s32 base) {
    u32 sign = n >> 31;
    s32 i;
    if (sign != 0 && base == 10) {
        n = -n;
    }
    i = 0;
    do {
        buf[i] = lbl_8036FEEC[n % base];
        i++;
        n = n / base;
    } while (n != 0);
    if (sign != 0) {
        buf[i] = 45;
        i++;
    }
    buf[i] = 0;
    return strrev(buf);
}
