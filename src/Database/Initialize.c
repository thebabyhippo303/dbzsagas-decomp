/* Database__Initialize @ 0x80203950 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct SL { void *a; void *b; void *c; } SL;
typedef struct DB {
    void *arrA;
    SL listA;
    SL listB;
    s32 countA;
    void *arrB;
    SL listC;
    s32 countB;
    char pad[0x5C - 0x34];
    s32 f5c;
} DB;

void *memset(void *, int, unsigned long);
void *MemHeap__Alloc(s32, s32);
void SList__Init(void *, s32);
void SList__LinkArray(void *, void *, s32, s32);
void Database__ResetLoadedCursor(void);
void Database__ResetRecordCursor(void);
extern DB lbl_803ADB5C __attribute__((section(".data")));

void Database__Initialize(s32 countA, s32 countB) {
    DB *p;
    memset(&lbl_803ADB5C, 0, 136);
    p = &lbl_803ADB5C;
    p->countA = countA;
    lbl_803ADB5C.arrA = MemHeap__Alloc(countA * 24, 8);
    SList__Init(&p->listA, 0);
    SList__LinkArray(&p->listA, lbl_803ADB5C.arrA, p->countA, 24);
    SList__Init(&p->listB, 0);
    p->countB = countB;
    p->arrB = MemHeap__Alloc(countB * 52, 8);
    SList__Init(&p->listC, 0);
    SList__LinkArray(&p->listC, p->arrB, p->countB, 52);
    p->f5c = 0;
    Database__ResetLoadedCursor();
    Database__ResetRecordCursor();
}
