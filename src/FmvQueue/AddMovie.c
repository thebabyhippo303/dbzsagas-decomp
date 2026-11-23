/* FmvQueue__AddMovie @ 0x801DA4D8 (size: 0x150, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Fmv__Exists(char *);
s32 Mem__New(s32);
void * sprintf(char *, void *, ...);
char * strcpy(char *, const char *);
char * strrchr(const char *, int);
extern M2C_UNK lbl_803435F4 __attribute__((section(".data")));
extern M2C_UNK lbl_80343600 __attribute__((section(".data")));
extern s32 lbl_803DCCA0;

typedef struct FMNode { char name[0x80]; s32 val; struct FMNode *prev; struct FMNode *next; } FMNode;
typedef struct FMQH { FMNode *head; FMNode *tail; s32 f8; s32 count; } FMQH;
typedef struct FMQ { s32 pad0; FMQH q; } FMQ;

s32 FmvQueue__AddMovie(FMQ *arg0, s8 *arg1, s32 arg2) {
    char path[256];
    char tmp[252];
    char *sep;
    FMNode *node;
    FMNode *h;
    FMQH *q;

    if (lbl_803DCCA0 != 0) {
        strcpy(tmp, arg1);
        sep = strrchr(tmp, '\\');
        if ((sep == NULL) && (sep = strrchr(tmp, '/'), (sep == NULL))) {
            sprintf(path, &lbl_803435F4, tmp, tmp);
        } else {
            *sep = 0;
            sep += 1;
            sprintf(path, &lbl_80343600, tmp, sep, sep);
        }
    } else {
        strcpy(path, arg1);
    }
    if (Fmv__Exists(path) == 0) {
        return 0;
    }
    node = (FMNode *) Mem__New(0x8C);
    if (node == NULL) {
        return 0;
    }
    strcpy(node->name, path);
    node->val = arg2;
    q = &arg0->q;
    h = q->head;
    if (h == NULL) {
        q->tail = node;
        q->head = node;
        node->next = h;
        node->prev = h;
    } else {
        node->next = NULL;
        node->prev = q->tail;
        q->tail->next = node;
        q->tail = node;
    }
    q->count += 1;
    return 1;
}
