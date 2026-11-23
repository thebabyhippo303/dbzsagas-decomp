/* DisplayShake__SortSlots @ 0x8028D660 (size: 0xDC, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64;
typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef float f32;
typedef double f64;
typedef int M2C_UNK;
#define NULL 0
typedef struct {
    s32 key;
    s32 f4;
    s32 f8;
    s32 f12;
    s32 f16;
} ShakeSlot;
typedef struct {
    ShakeSlot slots[4];
    s32 count;
} DisplayShake;
void DisplayShake__SortSlots(DisplayShake *self) {
    s32 i;
    s32 j;
    ShakeSlot *p;
    ShakeSlot tmp;
    ShakeSlot *q;
    for (i = 0; i < self->count; i++) {
        p = &self->slots[i];
        j = i;
        if (j < self->count) {
            q = p;
            do {
                if (q->key < p->key) {
                    tmp = *p;
                    *p = *q;
                    *q = tmp;
                }
                j++;
                q++;
            } while (j < self->count);
        }
    }
}
