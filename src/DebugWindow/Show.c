/* DebugWindow__Show @ 0x802CD1A4 (size: 0x118, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: DebugWindow__Show @ 0x802CD1A4 (0x118). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void *memcpy(void *, const void *, unsigned int);
void DebugWindow__DrawFrame(s32);
extern void *lbl_803DCF3C;
extern void *lbl_803DCF40;

void DebugWindow__Show(void *arg0) {
    s32 i;
    void *vt1;
    void *vt2;
    void *dst;
    void *src;

    if ((M2C_FIELD(arg0, s32 *, 0x74) != 0) && (M2C_FIELD(arg0, s32 *, 0x84) != 0)) {
        if (lbl_803DCF3C != NULL) {
            vt1 = M2C_FIELD(lbl_803DCF3C, void **, 8);
            M2C_FIELD(vt1, void (**)(void *), 0x14)((char *)lbl_803DCF3C + M2C_FIELD(vt1, s16 *, 0x10));
        }
        i = 0;
        dst = (char *)lbl_803DCF40 + (M2C_FIELD(arg0, s32 *, 0x58) << 1) + M2C_FIELD(arg0, s32 *, 0x5C) * 160;
        src = M2C_FIELD(arg0, void **, 0x88);
        if (i < M2C_FIELD(arg0, s32 *, 0x90)) {
            do {
                i++;
                memcpy(dst, src, M2C_FIELD(arg0, u32 *, 0x8C));
                dst += 160;
                src += M2C_FIELD(arg0, u32 *, 0x8C);
            } while (i < M2C_FIELD(arg0, s32 *, 0x90));
        }
        M2C_FIELD(arg0, s32 *, 0x7C) = (s32) lbl_803DCF40;
        M2C_FIELD(arg0, s32 *, 0x80) = 0xA0;
        M2C_FIELD(arg0, s32 *, 0x84) = 0;
        DebugWindow__DrawFrame((s32) arg0);
        if (lbl_803DCF3C != NULL) {
            vt2 = M2C_FIELD(lbl_803DCF3C, void **, 8);
            M2C_FIELD(vt2, void (**)(void *, s32, s32, s32, s32), 0x1C)((char *)lbl_803DCF3C + M2C_FIELD(vt2, s16 *, 0x18), 0, 0, 0x4F, 0x2A);
        }
    }
}
