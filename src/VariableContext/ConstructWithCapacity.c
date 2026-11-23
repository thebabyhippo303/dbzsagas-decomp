/* VariableContext__ConstructWithCapacity @ 0x8018DE70 (size: 0x17C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * strncpy(char *, char *, u32);
s32 Mem__New(s32);
char * Mem__NewArray(s32);
void * memset(void *, int, u32);
typedef struct VL { void *data; s32 count; s32 cap; s32 f0C; s32 clear; s32 flag; } VL;

s8 *VariableContext__ConstructWithCapacity(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3) {
    VL *list;
    VL *list2;
    VL *list3;
    s32 clear;
    s32 clear2;
    s32 one;
    s8 *p28;

    p28 = arg0 + 0x28;
    list = (VL *) Mem__New(0x18);
    clear = 0;
    if (arg3 != 0) {
        list->data = Mem__NewArray(arg3 * 4);
    } else {
        list->data = (void *) arg3;
    }
    list->f0C = 8;
    list->count = 0;
    list->flag = 0;
    list->cap = arg3;
    list->clear = clear;
    if (clear != 0) {
        if (list->data != NULL) {
            memset(list->data, 0, arg3 * 4);
        }
    }
    M2C_FIELD(p28, VL **, 0) = list;
    M2C_FIELD(p28, s32 *, 4) = 1;
    strncpy(arg0, arg1, 0x1FU);
    M2C_FIELD(arg0, s8 *, 0x1F) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    if (arg2 != 0) {
        list2 = (VL *) Mem__New(0x18);
        clear2 = 0;
        if (arg3 != 0) {
            list2->data = Mem__NewArray(arg3 * 4);
        } else {
            list2->data = (void *) arg3;
        }
        list2->f0C = 0x80;
        list2->count = 0;
        list2->flag = 0;
        list2->cap = arg3;
        list2->clear = clear2;
        if (clear2 != 0) {
            if (list2->data != NULL) {
                memset(list2->data, 0, arg3 * 4);
            }
        }
        one = 1;
        M2C_FIELD(arg0, VL **, 0x30) = list2;
        list2->flag = one;
    } else {
        list3 = (VL *) Mem__New(0x18);
        list3->flag = arg2;
        list3->f0C = 0x80;
        M2C_FIELD(arg0, VL **, 0x30) = list3;
        list3->count = arg2;
        list3->cap = arg2;
        list3->clear = arg2;
        list3->data = (void *) arg2;
    }
    return arg0;
}
