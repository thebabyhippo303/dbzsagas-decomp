/* FileServer__ProcessReadDmaQueue @ 0x8015DCFC (size: 0x184, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void FileServer__CompleteRequest(void);
void FileServer__ReadDma(s32, s32);
M2C_UNK FileServer__StartBlockingReadDma();         /* extern */
extern s32 lbl_8036FB50 __attribute__((section(".data")));
extern s32 lbl_8039E5E4 __attribute__((section(".data")));
extern s32 lbl_8039E5E8 __attribute__((section(".data")));
extern s32 lbl_8039E5EC __attribute__((section(".data")));
extern s32 lbl_8039E5F0 __attribute__((section(".data")));

void FileServer__ProcessReadDmaQueue(void) {
    if ((s32) lbl_8036FB50 == 1) {
        FileServer__StartBlockingReadDma();
    }
    do {

    } while (*(s32 *)0xCC006834 & 1);
    lbl_8039E5E8 -= 1;
    if ((s32) lbl_8039E5E8 != -1) {
        do {
            FileServer__ReadDma(lbl_8039E5E4, 0x400);
            lbl_8039E5E8 -= 1;
            lbl_8039E5E4 += 0x400;
        } while ((s32) lbl_8039E5E8 != -1);
    }
    if ((s32) lbl_8039E5EC != 0) {
        FileServer__ReadDma(lbl_8039E5E4, lbl_8039E5EC);
        lbl_8039E5EC = 0;
    }
    *(s32 *)0xCC006828 = 0;
    if ((s32) lbl_8039E5F0 != 0) {
        do {
            FileServer__StartBlockingReadDma();
            lbl_8039E5E8 -= 1;
            if ((s32) lbl_8039E5E8 != -1) {
                do {
                    FileServer__ReadDma(lbl_8039E5E4, 0x400);
                    lbl_8039E5E8 -= 1;
                    lbl_8039E5E4 += 0x400;
                } while ((s32) lbl_8039E5E8 != -1);
            }
            if ((s32) lbl_8039E5EC != 0) {
                FileServer__ReadDma(lbl_8039E5E4, lbl_8039E5EC);
                lbl_8039E5EC = 0;
            }
            *(void *)0xCC006828 = 0;
        } while ((s32) lbl_8039E5F0 != 0);
    }
    FileServer__CompleteRequest();
}
