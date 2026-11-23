/* EzString__StrCopy @ 0x8026FAC8 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
u32 EzString__StrLen(const char *);
u32 EzString__StrCopy(char *dst, const char *src) {
    if (dst == NULL) goto ret;
    dst[0] = 0;
    if (src == NULL) goto ret;
    memcpy(dst, src, EzString__StrLen(src) + 1);
ret:
    return EzString__StrLen(dst);
}
