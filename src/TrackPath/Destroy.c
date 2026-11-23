/* TrackPath__Destroy @ 0x801FF5C8 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK BezierPath__Destroy(M2C_UNK *);             /* extern */
extern M2C_UNK lbl_803455B8 __attribute__((section(".data")));

void TrackPath__Destroy(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &lbl_803455B8;
    BezierPath__Destroy(arg0);
}
