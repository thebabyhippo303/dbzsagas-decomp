/* Array__InitializeZeroEntries @ 0x8001A6B4 (size: 0x164, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef unsigned int u32;
typedef struct {
    void **data;
    s32 count;
    s32 cap;
    s32 grow;
    s32 clear;
} PtrArray;

u32 Mem__NewArray(u32 size);
void Mem__Delete(void *p);
void *memcpy(void *dst, const void *src, u32 n);
void *memmove(void *dst, const void *src, u32 n);
void *memset(void *dst, int val, u32 n);

void Array__InitializeZeroEntries(char *self, s32 a, s32 n) {
    PtrArray *arr;
    s32 i;
    s32 item;
    s32 *slot;
    *(s32 *)(self + 8) = a;
    arr = (PtrArray *)(self + 0x10);
    *(s32 *)(self + 0xC) = n;
    if (arr->clear != 0) {
        if (*(void **)(self + 0x10) != 0) {
            memset(*(void **)(self + 0x10), 0, arr->cap * 4);
        }
    }
    arr->count = 0;
    i = 0;
    if (i < *(s32 *)(self + 0xC)) {
        s32 zero = 0;
        arr = (PtrArray *)(self + 0x10);
        slot = &item;
        do {
            s32 cnt;
            s32 cap;
            cnt = arr->count;
            cap = arr->cap;
            item = zero;
            if (cnt == cap) {
                u32 oldbytes = (u32)(cnt * 4);
                u32 newbytes = (u32)((cnt + arr->grow) * 4);
                void **newdata = (void **)Mem__NewArray(newbytes);
                if (newdata == 0) {
                    goto next;
                }
                if (arr->data != 0) {
                    memcpy(newdata, arr->data, oldbytes);
                    if (arr->data != 0) {
                        Mem__Delete(arr->data);
                    }
                }
                arr->data = newdata;
                arr->cap = arr->cap + arr->grow;
                if (arr->clear != 0) {
                    memset((char *)newdata + oldbytes, 0, newbytes - oldbytes);
                }
            }
            {
                void **d = arr->data;
                s32 off = cnt * 4;
                void *dst = (char *)d + off;
                s32 diff = arr->count - cnt;
                if (diff != 0) {
                    memmove((char *)dst + 4, dst, (u32)(diff * 4));
                }
                *(void **)((char *)d + off) = (void *)*slot;
                arr->count = arr->count + 1;
            }
next:
            i++;
        } while (i < *(s32 *)(self + 0xC));
    }
    *(s32 *)self = 1;
}
