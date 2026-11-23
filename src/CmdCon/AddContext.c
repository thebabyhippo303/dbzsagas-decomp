/* CmdCon__AddContext @ 0x80189C28 (size: 0x15C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;

typedef struct Array {
    char *data;
    s32 count;
    s32 cap;
    s32 grow;
    s32 zero;
} Array;

typedef struct CmdCon {
    char pad[8];
    Array *contexts;
} CmdCon;

s32 CmdCon__FindContext(CmdCon *, char *);
void Mem__Delete(void *);
char *Mem__NewArray(s32);
s32 String__CompareIgnoreCase(char *, char *);
void *memcpy(void *, const void *, u32);
void *memmove(void *, const void *, u32);
void *memset(void *, int, u32);
void fn_8018B4D0(CmdCon *);
extern char lbl_8033E3E0 __attribute__((section(".data")));

s32 CmdCon__AddContext(CmdCon *self, char *name) {
    char *item;
    char **pitem;
    Array *a;
    s32 idx;
    s32 oldBytes;
    s32 newBytes;
    char *data;
    char *slot;
    char *base;
    s32 off;
    s32 tail;

    if (CmdCon__FindContext(self, name) != 0) {
        return 1;
    }
    if (self->contexts->count > 0 && String__CompareIgnoreCase(name, &lbl_8033E3E0) == 0) {
        return 0;
    }
    a = self->contexts;
    item = name;
    pitem = &item;
    idx = a->count;
    if (idx == a->cap) {
        oldBytes = idx << 2;
        newBytes = (idx + a->grow) << 2;
        data = Mem__NewArray(newBytes);
        if (data == 0) {
            idx = 0;
        } else {
            if (a->data != 0) {
                memcpy(data, a->data, oldBytes);
                if (a->data != 0) {
                    Mem__Delete(a->data);
                }
            }
            a->data = data;
            a->cap = a->cap + a->grow;
            if (a->zero != 0) {
                memset(data + oldBytes, 0, newBytes - oldBytes);
            }
            goto insert;
        }
    } else {
insert:
        base = a->data;
        off = idx << 2;
        slot = base + off;
        tail = a->count - idx;
        if (tail != 0) {
            memmove(slot + 4, slot, tail << 2);
        }
        idx = 1;
        *(char **)(base + off) = *pitem;
        a->count = a->count + 1;
    }
    fn_8018B4D0(self);
    return idx;
}
