/* Cast__Destroy @ 0x801F5928 (size: 0x128, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

typedef struct PtrArray {
    void **data;
    s32 count;
} PtrArray;

typedef struct Sub {
    char pad[8];
    PtrArray *arr;
} Sub;

void ProtagonistGroup__Destroy(void *, s32);
void ActorList__Destroy(void *, s32);
void Mem__DeleteArray(void *);
void Mem__Delete(void *);

void Cast__Destroy(char *self, s32 flags) {
    Sub *sub;
    PtrArray *arr;
    s32 i;
    s32 n;
    s32 total;

    ProtagonistGroup__Destroy(self + 128, 2);
    sub = (Sub *)(self + 4);
    ActorList__Destroy(self + 116, 2);
    ActorList__Destroy(self + 104, 2);
    ActorList__Destroy(self + 92, 2);
    ActorList__Destroy(self + 80, 2);
    ActorList__Destroy(self + 68, 2);
    ActorList__Destroy(self + 56, 2);
    ActorList__Destroy(self + 44, 2);
    ActorList__Destroy(self + 32, 2);
    ActorList__Destroy(self + 20, 2);
    if (sub->arr != 0) {
        total = sub->arr->count;
        if (total > 0) {
            n = total;
            i = 0;
            do {
                void *p = *(void **)((char *)sub->arr->data + i);
                if (p != 0) {
                    Mem__DeleteArray(p);
                }
                i += 4;
                n -= 1;
            } while (n != 0);
        }
        arr = sub->arr;
        if (arr != 0) {
            if (arr->data != 0) {
                Mem__Delete(arr->data);
            }
            Mem__Delete(arr);
        }
        sub->arr = 0;
    }
    if (flags & 1) {
        Mem__Delete(self);
    }
}
