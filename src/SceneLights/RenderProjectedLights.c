/* SceneLights__RenderProjectedLights @ 0x8021ACB8 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: SceneLights__RenderProjectedLights @ 0x8021ACB8 (0x7C). ProDG -O2. */
typedef int s32;
#define NULL 0

typedef struct Light Light;
struct Light {
    Light *next;
    int flags;
};

typedef struct Sys Sys;
struct Sys {
    char pad[20];
    Light *head;
    char pad2[56];
    int f50;
};

extern Sys lbl_803ACFCC __attribute__((section(".data")));

void SceneLights__RenderProjectedLight(void *, s32);

void SceneLights__RenderProjectedLights(s32 arg) {
    Light *l;

    if (lbl_803ACFCC.f50 == 0) {
        return;
    }
    l = lbl_803ACFCC.head;
    if (l == NULL) {
        return;
    }
    do {
        int f = l->flags;
        if ((f & 1) != 0) {
            int t = f & 8;
            if (t != 0) {
                if (t == 8) {
                    SceneLights__RenderProjectedLight(l, arg);
                }
            }
        }
        l = l->next;
    } while (l != NULL);
}
