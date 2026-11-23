/* FileServer__HandleCommandResponseEvent @ 0x8015DE80 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK FileServer__ReadTransfer(M2C_UNK *, s32);   /* extern */
s32 FileServer__WaitForCommandHandshake();          /* extern */
M2C_UNK FileServer__WriteTransfer(M2C_UNK *, M2C_UNK); /* extern */
extern s32 lbl_8036FB50 __attribute__((section(".data")));
extern M2C_UNK (*lbl_8036FB54)(s32) __attribute__((section(".data")));
extern volatile s32 lbl_8039E5F8 __attribute__((section(".data")));
extern M2C_UNK lbl_8039E600 __attribute__((section(".data")));

void FileServer__HandleCommandResponseEvent(void) {
    s32 handle;
    s32 transfer;
    char *base = (char *)&lbl_8039E600;

    while ((handle = FileServer__WaitForCommandHandshake()) == 0) {
    }
    FileServer__ReadTransfer((M2C_UNK *)base, handle);
    transfer = M2C_FIELD(base, s32 *, 8);
    M2C_FIELD(base, s16 *, 2) = 0;
    lbl_8039E5F8 = transfer;
    FileServer__WriteTransfer((M2C_UNK *)base, 8);
    lbl_8036FB50 = 0;
    if (lbl_8036FB54 != NULL) {
        lbl_8036FB54(lbl_8039E5F8);
        lbl_8036FB54 = NULL;
    }
    *(volatile s32 *)0xCC003000 = 0x1000;
}
