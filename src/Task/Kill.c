/* Task__Kill @ 0x80184EAC (size: 0x118, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * memFree(void *);
typedef struct TaskNode {
    void *data;
    struct TaskNode *prev;
    struct TaskNode *next;
    void (*fn)(void *);
    s32 pad10[5];
    s32 flags;
} TaskNode;
typedef struct {
    TaskNode *head;
    TaskNode *tail;
    s32 pad8;
    s32 count;
} TaskList;
extern TaskList lbl_803A1204 __attribute__((section(".data")));
extern TaskList lbl_803A1214 __attribute__((section(".data")));
extern TaskNode *lbl_803DD4B0;

void Task__Kill(TaskNode *arg0) {
    s32 f;
    TaskList *l;
    TaskList *l2;

    if ((arg0 != NULL) && (arg0 != lbl_803DD4B0)) {
        f = arg0->flags & 4;
        if (f == 0) {
            if (arg0->fn != NULL) {
                arg0->fn(arg0);
            }
            memFree(arg0->data);
            arg0->data = (void *)f;
            l = &lbl_803A1204;
            if (l->head == arg0) {
                l->head = arg0->next;
            } else {
                arg0->prev->next = arg0->next;
            }
            if (l->tail == arg0) {
                l->tail = arg0->prev;
            } else {
                arg0->next->prev = arg0->prev;
            }
            arg0->prev = NULL;
            arg0->next = NULL;
            l->count -= 1;
            l2 = &lbl_803A1214;
            if (l2->head == NULL) {
                l2->head = arg0;
                l2->tail = arg0;
                arg0->next = NULL;
                arg0->prev = NULL;
            } else {
                arg0->next = l2->head;
                arg0->prev = NULL;
                l2->head->prev = arg0;
                l2->head = arg0;
            }
            l2->count += 1;
        }
    }
}
