/* Database__UnloadType @ 0x80203D14 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
typedef struct TypeNode {
    struct TypeNode *next;
    int id;
    int pad;
    void *records;
} TypeNode;
extern TypeNode *lbl_803ADB6C __attribute__((section(".data")));
extern int lbl_803ADB60 __attribute__((section(".data")));
extern char lbl_80345C08[] __attribute__((section(".data")));
extern void fn_802043B8(void *, char *);
extern void Database__UnloadRecord(s32, s32);
extern void Database__AdvanceLoadedCursorIfRemoved(void *);
extern void SList__Remove(void *, void *);
extern void SList__PushFront(void *, s32);
void Database__UnloadType(s32 type) {
    TypeNode *t;
    t = lbl_803ADB6C;
    while (t != NULL && type != t->id) {
        t = t->next;
    }
    if (t == NULL) {
        return;
    }
    fn_802043B8(t, lbl_80345C08);
    while (t->records != NULL) {
        Database__UnloadRecord(type, M2C_FIELD(t->records, s32 *, 4));
    }
    Database__AdvanceLoadedCursorIfRemoved(t);
    SList__Remove(&lbl_803ADB6C, t);
    SList__PushFront(&lbl_803ADB60, t);
}
