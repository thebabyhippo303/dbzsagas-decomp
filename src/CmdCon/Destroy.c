/* CmdCon__Destroy @ 0x80189904 (size: 0x148, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32;
void Mem__DeleteArray(void *);
void VariableContext__Destroy(void *, s32);
void Mem__Delete(void *);
void * memset(void *, int, u32);
typedef struct Arr { void **data; u32 count; s32 cap; s32 pad; s32 flag; } Arr;
typedef struct Pair { Arr *arr; s32 marker; } Pair;
typedef struct Cmd { char pad[8]; Pair pair; char p10[4]; void *p14; int p18; void *p1c; int p20; void *p24; } Cmd;
void CmdCon__Destroy(Cmd *self, s32 flags) {
    Pair *pair; Arr *arr; Arr *arr2; u32 n; u32 i;
    if (self->p14 != 0) Mem__DeleteArray(self->p14);
    if (self->p1c != 0) Mem__DeleteArray(self->p1c);
    if (self->p24 != 0) Mem__DeleteArray(self->p24);
    pair = &self->pair;
    if (pair->marker != 0) {
        n = self->pair.arr->count;
        for (i = 0; i < n; i++) {
            Arr *la; s32 idx; s32 c; void **slot; void *e;
            la = pair->arr;
            idx = (s32)i;
            if (idx < 0) idx = (s32)la->count - 1;
            c = (s32)la->count;
            if ((idx >= c) || (c == 0)) {
                slot = 0;
            } else {
                slot = la->data + idx;
            }
            e = *slot;
            if (e != 0) VariableContext__Destroy(e, 3);
        }
    }
    arr = pair->arr;
    if ((arr->flag != 0) && (arr->data != 0)) memset(arr->data, 0, (u32)arr->cap * 4);
    arr->count = 0;
    arr2 = pair->arr;
    if (arr2 != 0) {
        if (arr2->data != 0) Mem__Delete(arr2->data);
        Mem__Delete(arr2);
    }
    if (flags & 1) Mem__Delete(self);
}
