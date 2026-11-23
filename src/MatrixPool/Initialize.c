/* MatrixPool__Initialize @ 0x8021AEB8 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef struct { s32 count; void *pool; char l1[12]; char l2[12]; } MP;
extern MP lbl_803ADCE8 __attribute__((section(".data")));
void memset(void *, int, u32);
void *MemHeap__Alloc(u32, u32);
void SList__Init(void *, s32);
void SList__LinkArray(void *, void *, s32, s32);
s32 MatrixPool__Initialize(s32 count)
{
    u8 *p;
    s32 i;

    memset(&lbl_803ADCE8, 0, 0x20u);
    if (count == 0) {
        return 1;
    }
    lbl_803ADCE8.count = count;
    lbl_803ADCE8.pool = MemHeap__Alloc((u32)(count * 76), 8u);
    SList__Init(lbl_803ADCE8.l1, 4);
    SList__LinkArray(lbl_803ADCE8.l1, lbl_803ADCE8.pool, lbl_803ADCE8.count, 76);
    SList__Init(lbl_803ADCE8.l2, 4);
    p = (u8 *)lbl_803ADCE8.pool;
    for (i = 0; i < lbl_803ADCE8.count; i++, p += 76) {
        p[0] = 7;
        p[1] = 0;
    }
    return 1;
}
