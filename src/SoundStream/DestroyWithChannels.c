/* SoundStream__DestroyWithChannels @ 0x8019FBC4 (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct SChannel {
    char pad[0x28];
    struct SChannel *prev;
    struct SChannel *next;
} SChannel;

typedef struct SList {
    SChannel *head;
    SChannel *tail;
    s32 owned;
    s32 count;
} SList;

typedef struct SoundStream {
    char pad[80];
    void *unk80;
    SList list;
} SoundStream;

void SoundChannel__Destroy(void *, s32);
void SoundStream__Destroy(void *, s32);
extern M2C_UNK lbl_80340450 __attribute__((section(".data")));

void SoundStream__DestroyWithChannels(SoundStream *self, s32 arg) {
    SList *list = &self->list;
    SChannel *node;

    self->unk80 = &lbl_80340450;
    if ((list->owned != 0) && (list->head != NULL)) {
        do {
            node = list->head;
            list->head = node->next;
            if (list->tail == node) {
                list->tail = node->prev;
            } else {
                node->next->prev = node->prev;
            }
            if (list->owned != 0) {
                if (node != NULL) {
                    SoundChannel__Destroy(node, 3);
                }
            } else {
                node->prev = NULL;
                node->next = NULL;
            }
            list->count = list->count - 1;
        } while (list->head != NULL);
    }
    SoundStream__Destroy(self, arg);
}
