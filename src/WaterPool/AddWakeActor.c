/* WaterPool__AddWakeActor @ 0x80297F68 (size: 0xF8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type *)((char *)(expr) + (offset)))
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

void WaterPool__AddWakeActor(void *arg0, s32 item) {
    s32 item_copy;
    PtrArray *arr = *(PtrArray **)((char *)arg0 + 0x144);
    s32 *slot_addr = &item_copy;
    item_copy = item;
    {
        s32 cnt = arr->count;
        if (cnt == arr->cap) {
            u32 oldbytes = (u32)(cnt * 4);
            u32 newbytes = (u32)((cnt + arr->grow) * 4);
            void **newdata = (void **)Mem__NewArray(newbytes);
            if (newdata == 0) {
                return;
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
            {
                s32 diff = arr->count - cnt;
                if (diff != 0) {
                    memmove((char *)dst + 4, dst, (u32)(diff * 4));
                }
            }
            *(void **)((char *)d + off) = (void *)*slot_addr;
            arr->count = arr->count + 1;
        }
    }
}
