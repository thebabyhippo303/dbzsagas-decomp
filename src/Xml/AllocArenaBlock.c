/* Xml__AllocArenaBlock @ 0x803067A4 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *MemHeap__Alloc(unsigned int, unsigned int);

typedef struct XmlArenaBlock {
    s32 field0;
    s32 field4;
    struct XmlArenaBlock *field8;
} XmlArenaBlock;
extern XmlArenaBlock *lbl_803DD900;

void Xml__AllocArenaBlock(void) {
    XmlArenaBlock *block;
    XmlArenaBlock *head;

    block = MemHeap__Alloc(5000U, 8U);
    head = lbl_803DD900;
    block->field0 = 5000;
    block->field4 = 12;
    block->field8 = NULL;
    if (head != NULL) {
        head->field8 = block;
    }
    lbl_803DD900 = block;
}
