/* PropertyStream__ReadEnvName @ 0x802B2F28 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

char *PropertyStream__ReadString(void *, char *, char *);
int strcmp(const char *, const char *);
extern char lbl_80351F14[];
extern char lbl_80351F20[];

char *PropertyStream__ReadEnvName(void *arg0) {
    void *p = arg0;
    char *s;

    if (*(s32 *)p == 0) {
        return NULL;
    }
    s = PropertyStream__ReadString(p, lbl_80351F14, lbl_80351F14);
    if (strcmp(s, lbl_80351F20) == 0) {
        return NULL;
    }
    return s;
}
