/* ProtagonistGroup__MoveAttachmentTreeFiltered @ 0x801EA598 (size: 0x124, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
s32 ProtagonistList__IsEmpty(void *);
void ActorNode__Unlink(void *, void *, void *);
void ActorNode__InsertAfter(void *, void *);
void ProtagonistGroup__MoveAttachmentTreeFiltered(void *, void *, void **, void *, void *);
extern s32 lbl_803DD194;
void ProtagonistGroup__MoveAttachmentTreeFiltered(void *arg0, void *arg1, void **arg2, void *arg3, void *arg4) {
    void *node;
    s32 v;
    s32 empty;
    node = M2C_FIELD(arg1, void **, 0x188);
    v = 1;
    if ((M2C_FIELD(arg1, s32 *, 0x10) & lbl_803DD194) == 0) {
        v = 0;
    }
    if (v != 0) {
        if (node != NULL) {
            empty = ProtagonistList__IsEmpty(arg4);
            if (empty != 0) {
                M2C_FIELD(arg4, void **, 4) = node;
                M2C_FIELD(arg4, void **, 0) = node;
                M2C_FIELD(node, s32 *, 0x44) = 0;
                M2C_FIELD(node, void **, 0x48) = NULL;
            } else {
                M2C_FIELD(node, s32 *, 0x44) = empty;
                M2C_FIELD(node, void **, 0x48) = M2C_FIELD(arg4, void **, 4);
                M2C_FIELD(M2C_FIELD(arg4, void **, 4), void **, 0x44) = node;
                M2C_FIELD(arg4, void **, 4) = node;
            }
        }
    } else {
        if (M2C_FIELD(node, void **, 0x40) != arg3) {
            ActorNode__Unlink(node, arg3, *arg2);
            M2C_FIELD(node, void **, 0x40) = arg3;
        } else if (M2C_FIELD(node, void **, 0x10) != *arg2) {
            ActorNode__InsertAfter(node, *arg2);
        }
        *arg2 = node;
        if (M2C_FIELD(node, s32 *, 0x28) != 0) {
            ProtagonistGroup__MoveAttachmentTreeFiltered(arg0, M2C_FIELD(node, void **, 0x28), arg2, arg3, arg4);
        }
    }
    if (M2C_FIELD(node, s32 *, 0x24) != 0) {
        ProtagonistGroup__MoveAttachmentTreeFiltered(arg0, M2C_FIELD(node, void **, 0x24), arg2, arg3, arg4);
    }
}
