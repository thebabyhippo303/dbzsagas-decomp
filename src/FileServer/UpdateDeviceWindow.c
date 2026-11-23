/* FileServer__UpdateDeviceWindow @ 0x8015E384 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void FileServer__ResetDeviceWindow(void);
void FileServer__ConfigureDeviceWindow(void *);
extern M2C_UNK lbl_8039E640 __attribute__((section(".data")));
extern s32 lbl_8039E660 __attribute__((section(".data")));
extern s32 lbl_8039E664 __attribute__((section(".data")));
extern s32 lbl_8039E668 __attribute__((section(".data")));

void FileServer__UpdateDeviceWindow(s32 arg0) {
    s32 temp_r8;

    temp_r8 = (arg0 + 0x1F) & 0xFFFFFFE0;
    if (temp_r8 == (s32) lbl_8039E668) {
        lbl_8039E660 = 0;
        lbl_8039E664 += temp_r8;
        FileServer__ConfigureDeviceWindow(&lbl_8039E640);
        return;
    }
    lbl_8039E664 = -1;
    lbl_8039E660 = 0x31100;
    FileServer__ResetDeviceWindow();
}
