/* PointerArray__AddUnique @ 0x800FEF0C (size: 0x12C, .text, ProDG 3.9.3 -O2) - MATCHED */
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
void *memset(s32 dst, int val, u32 n);

void PointerArray__AddUnique(PtrArray *arr, s32 item)
{
    s32 i = 0;
    s32 item_copy = item;
    s32 *slot_addr;
    {
        s32 n = arr->count;
        void **p;
        s32 bound;
        if (i >= n)
            goto append;
        p = arr->data;
        bound = n;
        do {
            n = (s32)*p;
            p++;
            if (n == item)
                return;
            i++;
        } while (i < bound);
    append: ;
    }
    slot_addr = &item_copy;
    {
        s32 cnt = arr->count;
        if (cnt == arr->cap) {
            u32 oldbytes = (u32)(cnt * 4);
            u32 newbytes = (u32)((cnt + arr->grow) * 4);
            void **newdata = (void **)Mem__NewArray(newbytes);
            if (newdata == 0)
                return;
            if (arr->data != 0) {
                memcpy(newdata, arr->data, oldbytes);
                if (arr->data != 0)
                    Mem__Delete(arr->data);
            }
            arr->data = newdata;
            arr->cap = arr->cap + arr->grow;
            if (arr->clear != 0)
                memset((s32)((char *)newdata + oldbytes), 0, newbytes - oldbytes);
        }
        {
            void **d = arr->data;
            s32 off = cnt * 4;
            void *dst = (char *)d + off;
            {
                s32 diff = arr->count - cnt;
                if (diff != 0)
                    memmove((char *)dst + 4, dst, (u32)(diff * 4));
            }
            *(void **)((char *)d + off) = (void *)*slot_addr;
            arr->count = arr->count + 1;
        }
    }
}
