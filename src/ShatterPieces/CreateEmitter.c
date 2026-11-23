/* ShatterPieces__CreateEmitter @ 0x800F71D4 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * Emitter__CreateFromAsset(void *, void *, void *, int, int, int, int, int, int);
void SuspensionBridge__CreateEmitter(void *arg0, void *arg1) {
    s32 sp8;

    sp8 = -1;
    M2C_FIELD(arg0, void **, 0x370) = Emitter__CreateFromAsset(arg1, arg0 + 0x38, NULL, 0, 0, 0, 0, 0, sp8);
}
