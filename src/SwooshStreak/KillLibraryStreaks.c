/* SwooshStreak__KillLibraryStreaks @ 0x802301E0 (size: 0x120, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void SwooshGenerator__Destroy(void *, s32);
s32 ParticleMgr__FindLibraryIndex(s32);
typedef struct SwooshNode { struct SwooshNode *prev; struct SwooshNode *next; s32 unk8; s32 lib; } SwooshNode;
typedef struct { SwooshNode *head; SwooshNode *tail; s32 unk8; s32 count; SwooshNode *frees; } SwooshList;
typedef struct { char pad[40]; SwooshList *list; } SwooshLib;
extern SwooshLib lbl_803ADE7C;
void SwooshStreak__KillLibraryStreaks(s32 arg0) {
    s32 idx; SwooshList *list; SwooshNode *node; SwooshNode *next;
    idx = -1;
    if (arg0 != 0) { idx = ParticleMgr__FindLibraryIndex(arg0); if (idx == 20) { return; } }
    next = lbl_803ADE7C.list->head;
    if (next == NULL) { return; }
    do {
        node = next; next = node->next;
        if ((arg0 == 0) || (node->lib == idx)) {
            list = lbl_803ADE7C.list;
            if (list->head == node) { list->head = node->next; } else { node->prev->next = node->next; }
            if (list->tail == node) { list->tail = node->prev; } else { node->next->prev = node->prev; }
            node->prev = NULL; node->next = NULL; list->count -= 1;
            if (node != NULL) { SwooshGenerator__Destroy(node, 2); node->prev = list->frees; list->frees = node; }
        }
    } while (next != NULL);
}
