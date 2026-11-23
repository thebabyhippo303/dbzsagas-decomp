/* UiSpriteResources__DestroyOverlayWidgets @ 0x8000B938 (size: 0x128, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef int M2C_UNK;
void Sphere__DestroyCore(void *, s32);
extern M2C_UNK lbl_8030EFC0 __attribute__((section(".data")));

void UiSpriteResources__DestroyOverlayWidgets(char *arg0, s32 arg1) {
    char *p;
    char *outerCur;
    char *innerBegin;
    char *s1, *s2, *s3;
    void *vt;

    M2C_FIELD(arg0, M2C_UNK **, 0x19C) = &lbl_8030EFC0;
    M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
    if (arg0 + 0x7AF8 != NULL) {
        p = arg0 + 0x80D4;
        if (arg0 + 0x7AF8 != p) {
            do {
                p -= 0x1F4;
                vt = M2C_FIELD(p, void **, 0x19C);
                M2C_FIELD(vt, M2C_UNK (**)(void *, M2C_UNK), 0xC)(p + M2C_FIELD(vt, s16 *, 8), 0);
            } while (arg0 + 0x7AF8 != p);
        }
    }
    s1 = arg0 + 0x4F8;
    s2 = arg0 + 0x358;
    s3 = arg0 + 0x1B8;
    if (arg0 + 0x698 != NULL) {
        outerCur = arg0 + 0x7A88;
        if (arg0 + 0x698 != outerCur) {
            do {
                outerCur -= 0x1090;
                if (outerCur + 4 != NULL) {
                    innerBegin = outerCur + 0x1044;
                    if (outerCur + 4 != innerBegin) {
                        do {
                            innerBegin -= 0x1A0;
                            vt = M2C_FIELD(innerBegin, void **, 0x19C);
                            M2C_FIELD(vt, M2C_UNK (**)(void *, M2C_UNK), 0xC)(innerBegin + M2C_FIELD(vt, s16 *, 8), 0);
                        } while (outerCur + 4 != innerBegin);
                    }
                }
            } while (arg0 + 0x698 != outerCur);
        }
    }
    Sphere__DestroyCore(s1, 2);
    Sphere__DestroyCore(s2, 2);
    Sphere__DestroyCore(s3, 2);
    Sphere__DestroyCore(arg0, arg1);
}
