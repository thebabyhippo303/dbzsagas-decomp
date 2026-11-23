/* Xml__AddPooledString @ 0x80306858 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef struct PNode { void *str; struct PNode *prev; struct PNode *next; } PNode;
void *Xml__ArenaAlloc(s32);
int strlen(const char *);
void *memset(void *, int, u32);
char *strcpy(char *, const char *);
extern PNode lbl_8038A700 __attribute__((section(".data")));
void *Xml__AddPooledString(char *arg0) {
    PNode *node; PNode *head; PNode *next; u32 len; void *buf;
    node = Xml__ArenaAlloc(12);
    head = &lbl_8038A700;
    node->prev = head;
    next = head->next;
    node->next = next;
    next->prev = node;
    head->next = node;
    len = strlen(arg0) + 1;
    buf = Xml__ArenaAlloc(len);
    node->str = buf;
    memset(buf, 0, len);
    strcpy(node->str, arg0);
    return node->str;
}
