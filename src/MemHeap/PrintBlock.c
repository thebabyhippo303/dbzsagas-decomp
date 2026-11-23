/* MemHeap__PrintBlock @ 0x80181204 (size: 0x124, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct VaList { unsigned char gpr; unsigned char fpr; unsigned char reserved[2]; char *overflow_arg_area; char *reg_save_area; } VaList;
extern char lbl_8033D54C[11];
extern char lbl_8033D558[];
extern int vsprintf(char *buf, const char *fmt, VaList ap);
extern void *__builtin_saveregs(void);
extern int Mem__FormatPointer(void *);
extern int MemBlock__GetSizePlusPadding(void *);
extern unsigned MemBlock__GetAlignment(void *);
extern void Debug__FormatMessage(const char *, ...);
void MemHeap__PrintBlock(int indent, void *block, int arg2, const char *fmt, ...) {
    char buf[1000];
    char indentStr[11];
    __builtin_memcpy(indentStr, lbl_8033D54C, 11);
    __builtin_next_arg(fmt);
    vsprintf(buf, fmt, *(VaList *)__builtin_saveregs());
    indentStr[indent] = 0;
    Debug__FormatMessage(lbl_8033D558, indentStr, arg2, buf, Mem__FormatPointer(block), MemBlock__GetSizePlusPadding(block), MemBlock__GetAlignment(block));
}
