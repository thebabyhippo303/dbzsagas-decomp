/* FileServer__ProcessWatchpointCommand @ 0x8015E7E8 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned char u8;

void FileServer__ClearDataAddressBreakpoint(void);
void FileServer__SetDataAddressBreakpoint(void);
extern s32 lbl_8036FB60 __attribute__((section(".data")));
extern u8 lbl_8039E670 __attribute__((section(".bss")));
extern u8 lbl_8039E671 __attribute__((section(".bss")));

s32 FileServer__ProcessWatchpointCommand(s32 arg0) {
    s32 result;

    result = 0;
    if (lbl_8036FB60 != -0x8000) {
        return 0;
    }
    switch (arg0) {
    case 0:
        lbl_8039E671 = 0;
        break;
    case 1:
        lbl_8039E671 = (u8)arg0;
        break;
    case 2:
        lbl_8039E670 = 0;
        FileServer__ClearDataAddressBreakpoint();
        result = (s32)0x80000000;
        break;
    case 3:
        lbl_8039E670 = 1;
        FileServer__SetDataAddressBreakpoint();
        result = (s32)0x80000000;
        break;
    default:
        break;
    }
    return result | (lbl_8039E670 << 8) | lbl_8039E671;
}
