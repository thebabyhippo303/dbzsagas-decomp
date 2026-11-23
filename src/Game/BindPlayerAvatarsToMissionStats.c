/* Game__BindPlayerAvatarsToMissionStats @ 0x800213AC (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 ControllerMap__GetPlayerController(void *, u32);
char * MissionStats__GetPlayerRecord(int);
void MissionStats__SetPlayerRecordAvatar(void *, void *);
s32 ControllerMap__IsPlayerAssigned(void *, M2C_UNK); /* extern */
extern void *lbl_803DCC74;

s32 MissionStats__BindPlayerAvatars(void) {
    s8 *temp_r31;
    s8 *temp_r31_2;
    void *temp_r3;
    void *temp_r3_2;

    temp_r31 = MissionStats__GetPlayerRecord(0);
    if (ControllerMap__IsPlayerAssigned(lbl_803DCC74, 0) != 0) {
        temp_r3 = ControllerMap__GetPlayerController(lbl_803DCC74, 0U);
        MissionStats__SetPlayerRecordAvatar(temp_r31, temp_r3);
        M2C_FIELD(temp_r3, s32 *, 0xE0) = 1;
    } else {
        MissionStats__SetPlayerRecordAvatar(temp_r31, NULL);
    }
    temp_r31_2 = MissionStats__GetPlayerRecord(1);
    if (ControllerMap__IsPlayerAssigned(lbl_803DCC74, 1) != 0) {
        temp_r3_2 = ControllerMap__GetPlayerController(lbl_803DCC74, 1U);
        MissionStats__SetPlayerRecordAvatar(temp_r31_2, temp_r3_2);
        M2C_FIELD(temp_r3_2, s32 *, 0xE0) = 1;
    } else {
        MissionStats__SetPlayerRecordAvatar(temp_r31_2, NULL);
    }
    return 1;
}
