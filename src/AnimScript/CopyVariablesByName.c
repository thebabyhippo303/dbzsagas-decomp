/* AnimScript__CopyVariablesByName @ 0x802348A0 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct { s32 id; char pad[16]; } VarEntry;
typedef struct { char pad[20]; s32 count; char pad2[16]; VarEntry *vars; } VarList;
typedef struct { char pad[28]; VarList *list; char pad2[8]; f32 *floats; } Slot;
typedef struct { char pad[240]; Slot *slots[1]; } AnimState;

void AnimScript__CopyVariablesByName(AnimState *dst, s32 di, AnimState *src, s32 si) {
    Slot *d = dst->slots[di];
    u32 i = 0;
    Slot *s = src->slots[si];

    while (i < (u32)d->list->count) {
        u32 j = 0;
        while (j < (u32)s->list->count) {
            if (s->list->vars[j].id == d->list->vars[i].id) {
                d->floats[i] = s->floats[j];
                break;
            }
            j++;
        }
        i++;
    }
}
