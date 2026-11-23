/* isdigit @ 0x80166E60 (size: 0x14, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned char u8;
typedef int s32;

extern u8 lbl_8033C9D9[] __attribute__((section(".data")));

s32 isdigit(s32 arg0) {
    return ((u8 *)lbl_8033C9D9)[arg0] & 4;
}
