/* PropertyStream__Close @ 0x802B2E54 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern int lbl_803945A4[] __attribute__((section(".data")));
extern void *lbl_803DCCB8 __attribute__((section(".sdata")));
void Simple__ClearEnvLoadFlags(void *);
void PropertyStream__Close(int *arg0) {
    void *head;
    void *node;
    void *obj;
    head = lbl_803DCCB8;
    *arg0 = 0;
    node = *(void **)((char *)head + 20);
    if (node == 0) {
        return;
    }
    do {
        obj = *(void **)node;
        if ((*(int *)obj & lbl_803945A4[1]) == lbl_803945A4[0]) {
            Simple__ClearEnvLoadFlags(obj);
        }
        {
            void *list;
            list = lbl_803DCCB8;
            if (node != 0) {
                node = *(void **)((char *)node + 20);
            } else {
                node = *(void **)((char *)list + 20);
            }
        }
    } while (node != 0);
}
