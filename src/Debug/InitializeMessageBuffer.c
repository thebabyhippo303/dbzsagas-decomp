/* Debug__InitializeMessageBuffer @ 0x8017E9A8 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned char u8;

extern s32 lbl_803A12B4[] __attribute__((section(".bss")));
extern u8 lbl_803DD4B4;

void Debug__InitializeMessageBuffer(s32 mode, s32 flag) {
    s32 fill;
    s32 *cursor;
    s32 count;

    fill = 0;
    if (flag != 0) {
        fill = -1;
    }
    cursor = lbl_803A12B4;
    count = 320;
    do {
        *cursor = fill;
        cursor += 1;
        count -= 1;
    } while (count != 0);
    lbl_803DD4B4 = (u8)mode;
}
