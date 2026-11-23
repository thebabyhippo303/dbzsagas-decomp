/* ProtagonistGroup__MoveAttachmentTree @ 0x801EA970 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

void ActorNode__Unlink(void *, void *, void *);
void ActorNode__InsertAfter(void *, void *);
void ProtagonistGroup__MoveAttachmentTree(void *, void *, void **, void *);

void ProtagonistGroup__MoveAttachmentTree(void *arg0, void *arg1, void **arg2, void *arg3) {
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg1, void **, 0x188);
    if (M2C_FIELD(temp_r31, void **, 0x40) != arg3) {
        ActorNode__Unlink(temp_r31, arg3, *arg2);
        M2C_FIELD(temp_r31, void **, 0x40) = arg3;
    } else {
        if (M2C_FIELD(temp_r31, void **, 0x10) != *arg2) {
            ActorNode__InsertAfter(temp_r31, *arg2);
        }
    }
    *arg2 = temp_r31;
    if (M2C_FIELD(temp_r31, void **, 0x24) != NULL) {
        ProtagonistGroup__MoveAttachmentTree(arg0, M2C_FIELD(temp_r31, void **, 0x24), arg2, arg3);
    }
    if (M2C_FIELD(temp_r31, void **, 0x28) != NULL) {
        ProtagonistGroup__MoveAttachmentTree(arg0, M2C_FIELD(temp_r31, void **, 0x28), arg2, arg3);
    }
}
