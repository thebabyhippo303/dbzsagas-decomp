/* SoundDriver__AllocAram @ 0x8019624C (size: 0x12C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef unsigned int u32;
#define NULL 0

typedef struct AramNode {
    struct AramNode *prev;
    struct AramNode *next;
    u32 offset;
    u32 size;
} AramNode;

typedef struct {
    AramNode *head;
    AramNode *tail;
    s32 pad;
    s32 count;
} AramList;

void *Mem__New(s32);

u32 SoundDriver__AllocAram(char *self, u32 size) {
    AramNode *node;
    AramNode *cur;
    AramList *list;
    u32 off;
    AramNode *h;
    AramNode *pv;

    size = (size + 31) & ~31;
    node = Mem__New(16);
    if (node == NULL) {
        return 0;
    }
    off = *(u32 *)(self + 120) - size;
    *(u32 *)(self + 120) = off;
    node->size = size;
    node->offset = off;
    list = (AramList *)(self + 1292);
    h = list->head;
    if (h == NULL) {
        list->tail = node;
        list->head = node;
        node->prev = h;
        node->next = h;
    } else {
        cur = list->head;
        if (cur->offset < off) {
            do {
                cur = cur->next;
                if (cur == NULL) {
                    break;
                }
            } while (cur->offset < node->offset);
        }
        if (cur == NULL) {
            if (list->head == NULL) {
                list->tail = node;
                list->head = node;
                node->next = NULL;
                node->prev = NULL;
            } else {
                node->next = NULL;
                node->prev = list->tail;
                list->tail->next = node;
                list->tail = node;
            }
        } else {
            if (cur->prev != NULL) {
                cur->prev->next = node;
            } else {
                list->head = node;
            }
            pv = cur->prev;
            node->next = cur;
            node->prev = pv;
            cur->prev = node;
        }
    }
    list->count++;
    return node->offset;
}
