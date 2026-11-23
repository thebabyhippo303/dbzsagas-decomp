/* Script_RegisterFunction @ 0x8023A710 (size: 0x100, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct {
    int hash;
    int arg;
    int fn;
} Entry;

typedef struct {
    int count;
    Entry e[1];
} Registry;

u32 Hash__Buffer32(const u8 *, u32, u32);
int strlen(const char *);
extern Registry lbl_803ADF24 __attribute__((section(".data")));

s32 Script_RegisterFunction(s32 fn, s8 *name, void *arg) {
    u32 hash;
    s32 i;
    s32  i_b;

    hash = Hash__Buffer32((u8 *) name, strlen(name), 0U);
    i = 0;
    if (lbl_803ADF24.count > 0) {
        do {
            if (lbl_803ADF24.e[i].hash == hash) {
                if (lbl_803ADF24.e[i].fn == fn) {
                    lbl_803ADF24.e[i].fn = fn;
                    lbl_803ADF24.e[i].arg = arg;
                    return lbl_803ADF24.e[i].fn;
                } else {
                    return 0;
                }
            }
            i++;
        } while (i < lbl_803ADF24.count);
    }
    lbl_803ADF24.e[lbl_803ADF24.count].hash = hash;
    lbl_803ADF24.e[lbl_803ADF24.count].arg = arg;
    i_b = lbl_803ADF24.e[lbl_803ADF24.count].fn;
    lbl_803ADF24.e[lbl_803ADF24.count].fn = fn;
    lbl_803ADF24.count++;
    return i_b;
}
