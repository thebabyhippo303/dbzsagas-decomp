/* Game__CloseArchiveAndFiles @ 0x80007484 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Archive__CloseIfOpen(void *);
void File__DestroyAll(int);
M2C_UNK fn_80188510();                              /* extern */
extern void *lbl_803DC370;

s32 Game__CloseArchiveAndFiles(void) {
    Archive__CloseIfOpen(lbl_803DC370);
    lbl_803DC370 = NULL;
    fn_80188510();
    File__DestroyAll(1);
    return 1;
}
