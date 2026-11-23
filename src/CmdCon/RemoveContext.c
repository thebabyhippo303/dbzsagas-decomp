/* CmdCon__RemoveContext @ 0x80189D84 (size: 0x128, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;
typedef struct Array {
    void **data;
    volatile int count;
    int cap;
    int grow;
    int zero;
} Array;
typedef struct CmdCon {
    char pad[8];
    Array *arr;
} CmdCon;
s32 CmdCon__FindContextIndex(s32 self, char *name);
void VariableContext__Destroy(void *, s32);
void * memmove(void *, void *, unsigned int);
void * memset(s32, int, u32);
s32 CmdCon__RemoveContext(CmdCon *self, char *name) {
    s32 idx;
    char *ab;
    Array *vec;
    idx = CmdCon__FindContextIndex((s32)self, name);
    if (idx < 0) {
        return 0;
    }
    if (idx == 0) {
        return 0;
    }
    ab = (char *)self + 8;
    if (((Array *)ab)->count != 0) {
        Array *entries;
        s32 i;
        entries = *(Array **)((char *)self + 8);
        i = idx;
        if (idx < 0) {
            i = entries->count - 1;
        }
        {
            s32 n = entries->count;
            void **slot;
            if ((i >= n) || (n == 0)) {
                slot = (void **)0;
            } else {
                slot = (void **)((char *)entries->data + (i * 4));
            }
            if (slot != (void **)0) {
                void *e = *slot;
                if (e != 0) {
                    VariableContext__Destroy(e, 3);
                }
            }
        }
    }
    {
        s32 j;
        vec = *(Array **)ab;
        j = idx;
        if (j < 0) {
            j = vec->count - 1;
        } else {
            if (j >= vec->count) {
                return 0;
            }
        }
        {
            void **data = vec->data;
            void *dst = (char *)data + (j * 4);
            s32 c3 = vec->count;
            s32 jp1 = j + 1;
            s32 nmove = c3 - jp1;
            if (nmove > 0) {
                memmove(dst, (char *)dst + 4, nmove * 4);
            }
            {
                s32 newcount = vec->count - 1;
                vec->count = newcount;
                if (vec->zero != 0) {
                    memset((s32)((char *)(vec->data + newcount)), 0, 4);
                }
                return 1;
            }
        }
    }
}
