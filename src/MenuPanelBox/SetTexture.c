/* MenuPanelBox__SetTexture @ 0x80274640 (size: 0x1BC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef int s32;
#define NULL 0
void Sphere__SetTexture(void *, s32, s32, s32, s32, s32);
typedef void (*SetTexFn)(void *, s32, s32, s32, s32, s32);
void MenuPanelBox__SetTexture(char *arg0, s32 arg1, s32 arg2) {
    char *a = arg0;
    char *b;
    char *end;
    char *c0;
    char *c1;
    char *c2;
    char *c3;
    *(s32 *)(a + 0x14) = arg1;
    *(s32 *)(a + 0x18) = arg2;
    Sphere__SetTexture(a + 0x1A0, arg1, arg2, 0, 1, 1);
    Sphere__SetTexture(a + 0x2A40, arg1, arg2, 0, 1, 1);
    c0 = a + 0x2220;
    Sphere__SetTexture(a + 0x340, arg1, arg2, 0, 1, 1);
    c1 = a + 0x1860;
    Sphere__SetTexture(a + 0xD00, arg1, arg2, 0, 1, 1);
    c2 = a + 0xEA0;
    Sphere__SetTexture(a + 0x16C0, arg1, arg2, 0, 1, 1);
    c3 = a + 0x4E0;
    Sphere__SetTexture(a + 0x2080, arg1, arg2, 0, 1, 1);
    b = a;
    end = b + 0x680;
    do {
        { void *vt = *(void **)(b + 0x67C); ((SetTexFn)*(void **)((char *)vt + 0x6C))(c3 + *(s16 *)((char *)vt + 0x68), arg1, arg2, 0, 1, 1); }
        c3 += 0x1A0;
        { void *vt = *(void **)(b + 0x103C); ((SetTexFn)*(void **)((char *)vt + 0x6C))(c2 + *(s16 *)((char *)vt + 0x68), arg1, arg2, 0, 1, 1); }
        c2 += 0x1A0;
        { void *vt = *(void **)(b + 0x19FC); ((SetTexFn)*(void **)((char *)vt + 0x6C))(c1 + *(s16 *)((char *)vt + 0x68), arg1, arg2, 0, 1, 1); }
        c1 += 0x1A0;
        { void *vt = *(void **)(b + 0x23BC); ((SetTexFn)*(void **)((char *)vt + 0x6C))(c0 + *(s16 *)((char *)vt + 0x68), arg1, arg2, 0, 1, 1); }
        b += 0x1A0;
        c0 += 0x1A0;
    } while ((s32)b <= (s32)end);
}
