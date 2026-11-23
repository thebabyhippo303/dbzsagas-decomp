/* Cast__IsProtagonist @ 0x801F3730 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct Node {
    void *f0;
    char pad[16];
    struct Node *f20;
    char pad2[20];
    struct Node *f44;
} Node;
extern Node *lbl_803DCCB8;
int Cast__IsProtagonist(void *arg) {
    Node *n = lbl_803DCCB8;
    Node *g = n;
    n = n->f44;
    while (n != ((void *)0)) {
        if (arg == n->f0) {
            return 1;
        }
        if (n != ((void *)0)) {
            n = n->f20;
        } else {
            n = g->f44;
        }
    }
    return 0;
}
