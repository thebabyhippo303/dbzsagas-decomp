/* Avatar__WaitingToDetonate @ 0x8003ACC4 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * Game__FindNearestEligibleAvatar(void *);
void * Script__PopInt(void *, void *);
void Script__PushInt(void *, void *, int);
void Avatar__WaitingToDetonate(void *arg0, void *arg1) {
    s32 var_r29;
    void *temp_r3;

    var_r29 = 0;
    temp_r3 = Game__FindNearestEligibleAvatar(Script__PopInt(arg0, arg1));
    if ((temp_r3 != NULL) && ((s32) (M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x84), void **, 0xF0), s16 *, 0xA) & 0xFF00) != 0x600)) {
        var_r29 = 1;
    }
    Script__PushInt(arg0, arg1, var_r29);
}
