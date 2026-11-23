/* Bink__FindTrackIndex @ 0x802EF114 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0

s32 Bink__FindTrackIndex(void *st, s32 id) {
    s32 n = *(s32 *)((char *)st + 760);
    s32 i = 0;
    if (i < n) {
        void **tbl = *(void ***)((char *)st + 616);
        s32 bound = n;
        u32 *arr = *(u32 **)((char *)st + 604);
        do {
            u32 v = *arr++;
            n = (s32)tbl[v];
            if (n == id) {
                return i;
            }
            i++;
        } while (i < bound);
    }
    return -1;
}
