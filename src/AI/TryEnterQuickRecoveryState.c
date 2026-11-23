/* AI__TryEnterQuickRecoveryState @ 0x80062C58 (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AI__SetState(void *, int);
void * Actor__GetStateHandler(int);
void * Game__FindNearestEligibleAvatar(void *);
extern f32 lbl_8031E4A4 __attribute__((section(".data")));
s32 AI__TryEnterQuickRecoveryState(void *arg0) {
    void *temp_r3;
    s32 temp_r0;
    register s32 var_r30;

    var_r30 = 0;
    temp_r3 = Game__FindNearestEligibleAvatar(M2C_FIELD(arg0, void **, 0x390));
    if (temp_r3 != NULL) {
        temp_r0 = M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x84), void **, 0xF4), s16 *, 0xA) & 0xFF00;
        if ((temp_r0 != 0x400) && (temp_r0 != 0xF00)) {
            var_r30 = 1;
        }
    }
    if (!((M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), f32 *, 0x288) /
          M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), f32 *, 0x28C)) >= lbl_8031E4A4)) {
        var_r30 = 1;
    }
    if (var_r30 != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x74) != 0x13) {
            M2C_FIELD(arg0, s32 *, 0x4BC) = 0;
            AI__SetState(arg0, 0);
            M2C_FIELD(arg0, s32 *, 0x74) = 0x13;
            M2C_FIELD(arg0, void **, 0x388) = Actor__GetStateHandler(0x13);
        } else {
            M2C_FIELD(arg0, s32 *, 0x530) = 0;
            M2C_FIELD(arg0, s32 *, 0x4BC) = 0;
        }
    }
    return var_r30;
}
