/* PropertyStream__ReadString @ 0x802B3010 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0

u32 strlen(const char *);

char *PropertyStream__ReadString(u32 **s) {
    u32 *cursor = *s;
    if (cursor != NULL) {
        if (*cursor == 0) {
            *s = cursor + 1;
            return NULL;
        }
        {
            u32 len = strlen((const char *)cursor);
            *s = (u32 *)((char *)*s + ((len + 4) & ~3u));
            return (char *)cursor;
        }
    }
    return NULL;
}
