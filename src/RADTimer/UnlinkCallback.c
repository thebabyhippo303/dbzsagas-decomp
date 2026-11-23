/* RADTimer__UnlinkCallback @ 0x802F7BF8 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
s32 RADTimer__UnlinkCallback(void *arg0, void *arg1) {
    void *p;
    void *c;
    if (arg0 == NULL) {
        return 0;
    }
    p = *(void **)((char *)arg0 + 48);
    if (p != arg1) {
        goto loop;
    }
    *(void **)((char *)arg0 + 48) = *(void **)p;
    return 1;
unlink:
    *(void **)p = *(void **)c;
    return 1;
loop:
    do {
        c = *(void **)p;
        if (c == arg1) {
            goto unlink;
        }
        p = c;
    } while (*(void **)p != NULL);
    return 0;
}
