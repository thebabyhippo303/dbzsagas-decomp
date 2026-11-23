/* MissionUI__DestroyProgressCommitListener @ 0x8011C048 (size: 0x160, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern void PointerArray__Remove(void *, void *);
extern void fn_80267A1C(void *, int);
extern void *lbl_803DC650;
extern char lbl_8032E9F8[] __attribute__((section(".data")));

typedef void (*ReleaseFn)(void *self, int mode);

#define RELEASE(obj)                                                  \
    do {                                                              \
        void *_obj = (obj);                                           \
        char *_vtable;                                                \
        short _adjust;                                                \
        ReleaseFn _release;                                           \
        if (_obj != 0) {                                              \
            _vtable = *(char **)((char *)_obj + 412);                 \
            _adjust = *(short *)(_vtable + 8);                        \
            _release = *(ReleaseFn *)(_vtable + 12);                  \
            _release((char *)_obj + _adjust, 3);                      \
        }                                                             \
    } while (0)

void MissionUI__DestroyProgressCommitListener(char *self, int flags) {
    char *hi = self + 0x10000;
    void *arr;
    *(void **)(self + 412) = lbl_8032E9F8;
    RELEASE(*(void **)(hi - 20824));
    RELEASE(*(void **)(hi - 20840));
    RELEASE(*(void **)(hi - 20844));
    RELEASE(*(void **)(hi - 20828));
    RELEASE(*(void **)(hi - 20832));
    RELEASE(*(void **)(hi - 20836));
    arr = lbl_803DC650;
    *(void **)(hi - 20844) = 0;
    *(void **)(hi - 20840) = 0;
    *(void **)(hi - 20836) = 0;
    *(void **)(hi - 20832) = 0;
    *(void **)(hi - 20828) = 0;
    *(void **)(hi - 20824) = 0;
    PointerArray__Remove(arr, self);
    fn_80267A1C(self, flags);
}
