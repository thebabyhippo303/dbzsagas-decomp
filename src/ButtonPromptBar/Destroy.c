/* ButtonPromptBar__Destroy @ 0x802761C0 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sphere__DestroyCore(void *, s32);

void ButtonPromptBar__Destroy(void *arg0, s32 arg1) {
    char *p;
    void *vt;

    if ((char *)arg0 + 0x1A0 != NULL) {
        p = (char *)arg0 + 0x4160;
        if ((char *)arg0 + 0x1A0 != p) {
            do {
                p -= 0x550;
                vt = M2C_FIELD(p, void **, 0x19C);
                M2C_FIELD(vt, void (**)(void *, s32), 0xC)((void *)(p + M2C_FIELD(vt, s16 *, 8)), 0);
            } while (((u32)arg0 + 0x1A0) != (u32)p);
        }
    }
    Sphere__DestroyCore(arg0, arg1);
}
