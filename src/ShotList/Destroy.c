/* ShotList__Destroy @ 0x800D0698 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

typedef struct {
    void *data;
} Shot;

typedef struct {
    Shot **items;
    s32 count;
    s32 capacity;
} ShotListData;

void Mem__DeleteArray(void *);
void Mem__Delete(void *);
extern ShotListData lbl_80392D54 __attribute__((section(".data")));

void ShotList__Destroy(void) {
    s32 i = 0;
    if (i < lbl_80392D54.count) {
        s32 off = 0;
        do {
            Shot *shot = *(Shot **)((char *)lbl_80392D54.items + off);
            if (shot != 0) {
                if (shot->data != 0) {
                    Mem__DeleteArray(shot->data);
                }
                Mem__Delete(shot);
            }
            i++;
            off += 4;
        } while (i < lbl_80392D54.count);
    }
    if (lbl_80392D54.items != 0) {
        Mem__Delete(lbl_80392D54.items);
    }
    lbl_80392D54.count = 0;
    lbl_80392D54.capacity = 0;
    lbl_80392D54.items = 0;
}
