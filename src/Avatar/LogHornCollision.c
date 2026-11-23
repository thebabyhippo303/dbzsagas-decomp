/* Avatar__LogHornCollision @ 0x8009F98C (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK fn_80189A54(s32, const char *, ...);                /* extern */
extern M2C_UNK lbl_8031FFE0 __attribute__((section(".data")));
extern s32 lbl_803DCC10;

s32 Avatar__LogHornCollision(void) {
    fn_80189A54(lbl_803DCC10, &lbl_8031FFE0);
    return 0;
}
