/* SwooshStreak__ShutdownSystem @ 0x8022FE98 (size: 0x1F8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;

#define NULL 0

typedef struct Node {
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct Arr {
    void **data;
    s32 count;
} Arr;

typedef struct Tail {
    Node *frees;
    s32 pad;
    Arr *arr;
} Tail;

typedef struct List {
    Node *head;
    Node *tailNode;
    s32 flag;
    s32 count;
    Tail tail;
} List;

typedef struct {
    char pad[0x18];
    void *f18;
    char pad2[0x28 - 0x1C];
    s32 f28;
} SwooshGlobal;

void SwooshStreak__KillLibraryStreaks(s32);
void SwooshStreak__FreeLibraryAssets(s32);
void SwooshGenerator__Destroy(void *, s32);
void Mem__DeleteArray(void *);
void Mem__Delete(void *);
void memFree(void *);
void memset(void *, int, u32);

extern List *lbl_803ADEA4 __attribute__((section(".data")));
extern SwooshGlobal lbl_803ADE7C __attribute__((section(".data")));

void SwooshStreak__ShutdownSystem(void) {
    List *list;
    Node *node;
    Node *node2;
    Tail *tail;
    Arr *arr;
    s32 n;
    s32 off;
    void *p;
    SwooshGlobal *g;

    SwooshStreak__KillLibraryStreaks(0);
    SwooshStreak__FreeLibraryAssets(0);
    list = lbl_803ADEA4;
    if (list != NULL) {
        if (list->head != NULL) {
            do {
                node = list->head;
                list->head = node->next;
                if (list->tailNode == node) {
                    list->tailNode = node->prev;
                } else {
                    node->next->prev = node->prev;
                }
                node->prev = NULL;
                node->next = NULL;
                list->count -= 1;
                if (node != NULL) {
                    SwooshGenerator__Destroy(node, 2);
                    node->prev = list->tail.frees;
                    list->tail.frees = node;
                }
            } while (list->head != NULL);
        }
        tail = &list->tail;
        if (tail->arr != NULL) {
            if (tail->arr->count > 0) {
                n = tail->arr->count;
                off = 0;
                do {
                    p = *(void **)((char *)tail->arr->data + off);
                    if (p != NULL) {
                        Mem__DeleteArray(p);
                    }
                    off += 4;
                    n -= 1;
                } while (n != 0);
            }
            arr = tail->arr;
            if (arr != NULL) {
                if (arr->data != NULL) {
                    Mem__Delete(arr->data);
                }
                Mem__Delete(arr);
                tail->arr = NULL;
            }
        }
        if ((list->flag != 0) && (list->head != NULL)) {
            do {
                node2 = list->head;
                list->head = node2->next;
                if (list->tailNode == node2) {
                    list->tailNode = node2->prev;
                } else {
                    node2->next->prev = node2->prev;
                }
                if (list->flag != 0) {
                    if (node2 != NULL) {
                        SwooshGenerator__Destroy(node2, 3);
                    }
                } else {
                    *(Node **)((char *)node2 + 0) = NULL;
                    *(Node **)((char *)node2 + 4) = NULL;
                }
                list->count -= 1;
            } while (list->head != NULL);
        }
        Mem__Delete(list);
    }
    g = &lbl_803ADE7C;
    p = g->f18;
    g->f28 = 0;
    if (p != NULL) {
        memFree(p);
    }
    memset(g, 0, 168);
}
