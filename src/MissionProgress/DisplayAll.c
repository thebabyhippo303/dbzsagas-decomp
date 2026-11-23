/* MissionProgress__DisplayAll @ 0x8012C43C (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef short s16;

int MissionProgress__GetCount(void);

typedef struct {
    void **items;
    s32 count;
    s32 cap;
} Arr;
extern Arr lbl_803944A4 __attribute__((section(".data")));

typedef void (*ShowFn)(void *self, s32 arg0, s32 arg1);

void MissionProgress__DisplayAll(s32 arg0, s32 arg1) {
    s32 i;
    s32 offset;
    void *obj;
    char *vt;

    for (i = 0; i < MissionProgress__GetCount(); i++) {
        offset = i * 4;
        obj = *(void **)((char *)lbl_803944A4.items + offset);
        vt = *(char **)((char *)obj + 24);
        ((ShowFn)(*(void **)(vt + 12)))((char *)obj + *(s16 *)(vt + 8), arg0, arg1);
    }
}
