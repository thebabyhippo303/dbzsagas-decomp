/* FluffLoop__DestroyAudioSettingsWidgets @ 0x80055214 (size: 0x1A0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef short s16;
#define NULL 0
void Sphere__DestroyCore(void *, s32);
void fn_80267A1C(void *, int);
void fn_80267B90(void *);
extern char lbl_8031CDD8[] __attribute__((section(".data")));

void FluffLoop__DestroyAudioSettingsWidgets(char *arg0, s32 arg1) {
    char *p;
    void *vt;

    *(char **)(arg0 + 0x19C) = lbl_8031CDD8;
    fn_80267B90(arg0);
    if (arg0 + 0x19600 != NULL) {
        p = arg0 + 0x1A640;
        if (arg0 + 0x19600 != p) {
            do {
                p -= 0x1A0;
                vt = *(void **)(p + 0x19C);
                (*(void (**)(void *, int))((char *)vt + 0xC))(p + *(s16 *)((char *)vt + 8), 0);
            } while (arg0 + 0x19600 != p);
        }
    }
    if (arg0 + 0x185C0 != NULL) {
        p = arg0 + 0x19600;
        if (arg0 + 0x185C0 != p) {
            do {
                p -= 0x1A0;
                vt = *(void **)(p + 0x19C);
                (*(void (**)(void *, int))((char *)vt + 0xC))(p + *(s16 *)((char *)vt + 8), 0);
            } while (arg0 + 0x185C0 != p);
        }
    }
    if (arg0 + 0x17580 != NULL) {
        p = arg0 + 0x185C0;
        if (arg0 + 0x17580 != p) {
            do {
                p -= 0x1A0;
                vt = *(void **)(p + 0x19C);
                (*(void (**)(void *, int))((char *)vt + 0xC))(p + *(s16 *)((char *)vt + 8), 0);
            } while (arg0 + 0x17580 != p);
        }
    }
    if (arg0 + 0x16540 != NULL) {
        p = arg0 + 0x17580;
        if (arg0 + 0x16540 != p) {
            do {
                p -= 0x1A0;
                vt = *(void **)(p + 0x19C);
                (*(void (**)(void *, int))((char *)vt + 0xC))(p + *(s16 *)((char *)vt + 8), 0);
            } while (arg0 + 0x16540 != p);
        }
    }
    Sphere__DestroyCore(arg0 + 0x163A0, 2);
    Sphere__DestroyCore(arg0 + 0x16200, 2);
    Sphere__DestroyCore(arg0 + 0x16060, 2);
    Sphere__DestroyCore(arg0 + 0x15EC0, 2);
    Sphere__DestroyCore(arg0 + 0x15D20, 2);
    fn_80267A1C(arg0 + 0xAE90, 2);
    fn_80267A1C(arg0, arg1);
}
