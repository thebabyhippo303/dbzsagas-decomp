/* Task__KillMatching @ 0x80184FC4 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK Task__Kill(void *);                         /* extern */
extern void *lbl_803A1204 __attribute__((section(".data")));
extern s32 lbl_803DD4B0;

void Task__KillMatching(s32 arg0, s32 arg1) {
    void *node;
    s32 key;

    node = lbl_803A1204;
    key = arg0 & arg1;
    while (node != NULL) {
        if ((s32) node == lbl_803DD4B0 || key != (M2C_FIELD(node, s32 *, 0x10) & arg1)) {
            node = M2C_FIELD(node, void **, 8);
        } else {
            void *dead = node;
            node = M2C_FIELD(node, void **, 8);
            Task__Kill(dead);
        }
    }
}
