/* MissionProgress__DestroyAll @ 0x8012C340 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct Arr { void **items; s32 count; s32 cap; } Arr;
extern Arr lbl_803944A4 __attribute__((section(".data")));
void MissionProgress__Destroy(void *, s32);
void Mem__Delete(void *);
void MissionProgress__DestroyAll(void) {
    s32 i;
    for (i = 0; i < lbl_803944A4.count; i++) {
        void *e = *(void **)((char *)lbl_803944A4.items + (i << 2));
        if (e != 0) MissionProgress__Destroy(e, 3);
    }
    if (lbl_803944A4.items != 0) {
        Mem__Delete(lbl_803944A4.items);
        lbl_803944A4.count = 0;
        lbl_803944A4.cap = 0;
        lbl_803944A4.items = 0;
    }
}
