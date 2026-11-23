/* DvdFile__Destroy @ 0x80181170 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct DvdFile DvdFile;
struct DvdFile { char pad[0x20]; DvdFile *prev; DvdFile *next; };
typedef struct { DvdFile *head; DvdFile *tail; s32 pad; s32 count; } DvdFileList;

void * Mem__Delete(void *);
extern DvdFileList lbl_803A11F4 __attribute__((section(".data")));

void DvdFile__Destroy(DvdFile *arg0) {
    DvdFileList *list;

    if (arg0 != NULL) {
        list = &lbl_803A11F4;
        if (list->head == arg0) {
            list->head = arg0->next;
        } else {
            arg0->prev->next = arg0->next;
        }
        if (list->tail == arg0) {
            list->tail = arg0->prev;
        } else {
            arg0->next->prev = arg0->prev;
        }
        arg0->prev = NULL;
        arg0->next = NULL;
        list->count -= 1;
        Mem__Delete(arg0);
    }
}
