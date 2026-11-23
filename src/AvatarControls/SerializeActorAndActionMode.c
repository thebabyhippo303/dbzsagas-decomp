/* AvatarControls__SerializeActorAndActionMode @ 0x800A2744 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Avatar__IsThrownVictim(void *);
void AvatarControls__SelectActionMode(char *, s32);
void AvatarControls__GetSerializedStateSizeThunk(s32);
M2C_UNK fn_80234A78(s32);
void AvatarControls__SerializeActorAndActionMode(s8 *arg0, void *arg1, s32 arg2) {
    s32 temp_r3;
    void *temp_r9;
    void *temp_r9_2;

    if (arg2 != 0) {
        temp_r9 = M2C_FIELD(arg0, void **, 0x2A4);
        if (temp_r9 != NULL) {
            M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(temp_r9, s32 *, 0x10C);
        }
        M2C_FIELD(arg1, s32 *, 4) = Avatar__IsThrownVictim(arg0);
    } else {
        temp_r3 = M2C_FIELD(arg1, s32 *, 0);
        if (temp_r3 != 0) {
            M2C_FIELD(arg0, void **, 0x2A4) = fn_80234A78(temp_r3);
        }
        AvatarControls__SelectActionMode(arg0, M2C_FIELD(arg1, s32 *, 4));
        temp_r9_2 = M2C_FIELD(arg0, void **, 4);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(s8 *), 0x44)(&arg0[M2C_FIELD(temp_r9_2, s16 *, 0x40)]);
    }
    AvatarControls__GetSerializedStateSizeThunk((s32) arg0);
}

