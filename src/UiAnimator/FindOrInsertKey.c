/* UiAnimator__FindOrInsertKey @ 0x802601F4 (size: 0x110, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void *Mem__New(u32);
char *UiKeyframe__Init(char *, f32, f32);
extern f32 lbl_80349B50 __attribute__((section(".data")));

typedef struct Key { struct Key *prev; struct Key *next; f32 time; } Key;

Key *UiAnimator__FindOrInsertKey(void *arg0, f32 time) {
    Key *cur;
    Key *newk;
    f32 t;
    if (*(Key **)((char *)arg0 + 0x20) == NULL)
        *(Key **)((char *)arg0 + 0x20) = (Key *)UiKeyframe__Init(Mem__New(16), time, lbl_80349B50);
    cur = *(Key **)((char *)arg0 + 0x20);
    t = cur->time;
    if (t == time)
        goto done;
    do {
        if (t <= time)
            goto append;
        newk = (Key *)UiKeyframe__Init(Mem__New(16), time, lbl_80349B50);
        if (newk == NULL)
            goto advance;
        newk->prev = cur->prev;
        newk->next = cur;
        if (cur->prev != NULL)
            cur->prev->next = newk;
        cur->prev = newk;
        if (newk->prev != NULL)
            return newk;
        *(Key **)((char *)arg0 + 0x20) = newk;
        return newk;
append:
        if (cur->next == NULL) {
            newk = (Key *)UiKeyframe__Init(Mem__New(16), time, lbl_80349B50);
            cur->next = newk;
            if (newk != NULL)
                newk->prev = cur;
        }
advance:
        cur = cur->next;
        t = cur->time;
    } while (t != time);
done:
    return cur;
}
