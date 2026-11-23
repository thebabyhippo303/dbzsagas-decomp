/* SoundGroup__Destroy @ 0x8019D420 (size: 0x108, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef float f32;
typedef double f64;

typedef struct SoundNode SoundNode;

struct SoundNode {
    char pad[0x4C];
    SoundNode *prev;
    SoundNode *next;
    void *vtbl;
};

typedef struct SoundList {
    SoundNode *head;
    SoundNode *tail;
    s32 flag;
    s32 count;
} SoundList;

typedef struct SoundGroup {
    void *unused;
    char name[0x44];
    SoundList list;
    s32 voices;
    s32 maxVoices;
    s32 reclaims;
    void *vtbl;
} SoundGroup;

void Debug__FormatMessage(const char *fmt, ...);
void fn_801843CC(void *);
extern char lbl_8033FBF8[] __attribute__((section(".rodata")));
extern s32 lbl_80340358[] __attribute__((section(".rodata")));

void SoundGroup__Destroy(SoundGroup *self, s32 flags) {
    SoundList *list;
    SoundNode *node;
    void *vtbl;

    self->vtbl = lbl_80340358;
    list = &self->list;
    Debug__FormatMessage(lbl_8033FBF8, self->name, self->maxVoices, self->voices, self->reclaims);
    if ((list->flag != 0) && (list->head != 0)) {
        do {
            node = list->head;
            list->head = node->next;
            if (list->tail == node) {
                list->tail = node->prev;
            } else {
                node->next->prev = node->prev;
            }
            if (list->flag != 0) {
                if (node != 0) {
                    vtbl = node->vtbl;
                    ((void (*)(void *, s32))((s32 *)vtbl)[3])((char *)node + ((s16 *)vtbl)[4], 3);
                }
            } else {
                node->prev = 0;
                node->next = 0;
            }
            list->count -= 1;
        } while (list->head != 0);
    }
    if (flags & 1) {
        fn_801843CC(self);
    }
}
