/* SpiritBomb__GetActivePlayer @ 0x800458BC (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int Game__GetConfiguredPlayerCount(void *);
void * Game__GetPlayerImpl(void *, int);
void Script__PushInt(void *, void *, int);
extern void *lbl_803DC3C0;

void SpiritBomb__GetActivePlayer(void *arg0, void *arg1) {
    void *var_r31;

    var_r31 = Game__GetPlayerImpl(lbl_803DC3C0, 0);
    if ((Game__GetConfiguredPlayerCount(lbl_803DC3C0) == 2) && ((s32) M2C_FIELD(Game__GetPlayerImpl(lbl_803DC3C0, 1), s32 *, 0x670) == 0)) {
        var_r31 = Game__GetPlayerImpl(lbl_803DC3C0, 1);
    }
    Script__PushInt(arg0, arg1, (s32) var_r31);
}
