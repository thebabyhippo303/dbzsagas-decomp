/* AabbToTerrain__AppendTriangleCount @ 0x801B066C (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern char lbl_80341724[];
int sprintf(char *, const char *, ...);
char *strcat(char *, const char *);
char *AabbToTerrain__AppendTriangleCount(void *arg0, char *arg1) {
    u32 n = *(u32 *)((char *)arg0 + 64);
    char buf[256];
    for (;;) {
        if (n == 0) {
            n = 0;
            break;
        }
        n = *(u32 *)(n + 36);
        break;
    }
    sprintf(buf, lbl_80341724, n);
    return strcat(arg1, buf);
}
