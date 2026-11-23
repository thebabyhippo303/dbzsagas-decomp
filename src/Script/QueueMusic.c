/* Script__QueueMusic @ 0x8002E350 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

char * Script__PopString(void *, void *, int *);
void fn_80184430(char *);
M2C_UNK fn_80192020(s32, s8 *, M2C_UNK, f32, f32);  /* extern */
extern f32 lbl_80311680 __attribute__((section(".data")));
extern f32 lbl_80311684 __attribute__((section(".data")));
extern s32 lbl_803DCC20;

void Script__QueueMusicTrack(void *arg0, void *arg1) {
    s32 sp8;
    s8 *temp_r3;

    temp_r3 = Script__PopString(arg0, arg1, &sp8);
    fn_80192020(lbl_803DCC20, temp_r3, 1, lbl_80311680, lbl_80311684);
    if ((sp8 != 0) && (temp_r3 != NULL)) {
        fn_80184430(temp_r3);
    }
}
