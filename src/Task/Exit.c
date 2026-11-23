/* Task__Exit @ 0x80184BB0 (size: 0xF8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

typedef struct Task Task;
struct Task {
    char pad0[4];
    Task *prev;
    Task *next;
    void (*onExit)(Task *);
};

typedef struct {
    Task *head;
    Task *tail;
    s32 pad;
    s32 count;
} TaskList;

void fn_80185EEC(void *);
extern Task *lbl_803DD490 __attribute__((section(".sdata")));
extern char lbl_803DD4A8 __attribute__((section(".sdata")));
extern TaskList lbl_803A1204 __attribute__((section(".data")));
extern TaskList lbl_803A1224 __attribute__((section(".data")));

void Task__Exit(void) {
    Task *t = lbl_803DD490;
    TaskList *run;
    TaskList *free;
    s32 zero;

    if (t->onExit != 0) {
        t->onExit(t);
    }
    run = &lbl_803A1204;
    if (run->head == t) {
        run->head = t->next;
    } else {
        t->prev->next = t->next;
    }
    if (run->tail == t) {
        run->tail = t->prev;
    } else {
        t->next->prev = t->prev;
    }
    zero = 0;
    t->prev = (Task *)zero;
    t->next = (Task *)zero;
    run->count = run->count - 1;
    free = &lbl_803A1224;
    if (free->head == 0) {
        free->head = t;
        free->tail = t;
        t->next = (Task *)zero;
        t->prev = (Task *)zero;
    } else {
        t->next = free->head;
        t->prev = (Task *)zero;
        free->head->prev = t;
        free->head = t;
    }
    free->count = free->count + 1;
    fn_80185EEC(&lbl_803DD4A8);
}
