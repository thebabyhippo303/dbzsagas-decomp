/* GameMenu__LoadDatabase @ 0x80263B50 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void *dblLoad(void *, s32, s32);
void *GameMenu__LoadDatabase(void *arg0, void *arg1) {
    char *vt;
    void *db;
    vt = *(char **)((char *)arg0 + 16);
    ((void (*)(void *))*(void **)(vt + 476))((char *)arg0 + *(s16 *)(vt + 472));
    db = dblLoad(arg1, 0, 0);
    *(void **)((char *)arg0 + 1112) = db;
    if (db != NULL) {
        *(void **)((char *)arg0 + 1108) = db;
    }
    return *(void **)((char *)arg0 + 1112);
}
