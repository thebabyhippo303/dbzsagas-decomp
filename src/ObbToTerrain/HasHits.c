/* ObbToTerrain__HasHits @ 0x801C9174 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void ObbToTerrain__Test(void *, void *);
s32 ObbToTerrain__HasHits(void *arg0, void *arg1) {
    void *p;
    s32 n;
    if ((*(s32 *)((char *)arg0 + 44) & 1) == 0) {
        ObbToTerrain__Test(arg0, arg1);
    }
    p = *(void **)((char *)arg0 + 64);
    if (p != NULL) {
        n = *(s32 *)((char *)p + 36);
    } else {
        n = 0;
    }
    if (n <= 0) {
        return 0;
    }
    *(s32 *)((char *)arg1 + 84) = 0;
    *(s32 *)((char *)arg1 + 0) = 0;
    return 1;
}
