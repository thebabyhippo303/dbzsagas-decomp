/* MenuLoop__GetNextLoopMode @ 0x8004CDEC (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK fn_80260E60();                              /* extern */
extern M2C_UNK lbl_803946C4 __attribute__((section(".data")));
extern void *lbl_803DC368;

s32 MenuLoop__GetNextLoopMode(void) {
    s32 *tbl;
    s32 mode;

    fn_80260E60();
    tbl = (s32 *)&lbl_803946C4;
    mode = tbl[1];
    if (mode == -1) {
        tbl[1] = 0x24;
        return 1;
    }
    if (mode == 0x24) {
        M2C_FIELD(lbl_803DC368, s32 *, 0x108) = 1;
        return 2;
    }
    return 3;
}
