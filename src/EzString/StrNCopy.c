/* EzString__StrNCopy @ 0x8026FB2C (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0

u32 EzString__StrLen(u8 *);
void *memcpy(void *, const void *, u32);

void EzString__StrNCopy(u8 *dst, u8 *src, s32 n) {
    s32 len;
    s32 size;
    if (dst == NULL) {
        goto ret;
    }
    *dst = 0;
    if (src == NULL) {
        goto ret;
    }
    len = (s32)EzString__StrLen(src);
    size = len + 1;
    if (size > n) {
        size = n;
    }
    memcpy(dst, src, size);
ret:
    EzString__StrLen(dst);
}
