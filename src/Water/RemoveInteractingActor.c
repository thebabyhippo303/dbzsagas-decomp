/* Water__RemoveInteractingActor @ 0x80277174 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
void Water__RemoveInteractingActor(void *arg0, s32 arg1) {
    void *node;
    void *first;
    void *list;

    if (arg1 == 0) {
        return;
    }
    node = M2C_FIELD(arg0, void **, 0x14);
    first = node;
    if (node == NULL) {
        return;
    }
    do {
        if (M2C_FIELD(node, s32 *, 0) == arg1) {
            list = (char *)arg0 + 0x14;
            if (first == node) {
                M2C_FIELD(arg0, void **, 0x14) = M2C_FIELD(node, void **, 0x10);
            } else {
                M2C_FIELD(M2C_FIELD(node, void **, 0xC), void **, 0x10) = M2C_FIELD(node, void **, 0x10);
            }
            if (M2C_FIELD(list, void **, 4) == node) {
                M2C_FIELD(list, void **, 4) = M2C_FIELD(node, void **, 0xC);
            } else {
                M2C_FIELD(M2C_FIELD(node, void **, 0x10), void **, 0xC) = M2C_FIELD(node, void **, 0xC);
            }
            M2C_FIELD(node, void **, 0xC) = NULL;
            M2C_FIELD(node, void **, 0x10) = NULL;
            M2C_FIELD(list, s32 *, 0xC) = M2C_FIELD(list, s32 *, 0xC) - 1;
            Mem__Delete(node);
            return;
        }
        node = M2C_FIELD(node, void **, 0x10);
    } while (node != NULL);
}
