/* DebugMenuScreen__Render @ 0x80262A48 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void Sphere__Render(void *);
void GameMenu__RefreshRows(void *);
void DebugMenuScreen__Render(void *arg0) {
    Sphere__Render(arg0);
    GameMenu__RefreshRows((char *)arg0 + 17360);
}
