/* AI__FinalizeDeathSequence @ 0x800714AC (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AI__SetState(void *, int);
void Avatar__AdjustHealth(void *, float);
void Avatar__StopFireShieldImpl(void *, void *);
void * Game__FindAvatarByAnimationId(int);
extern f32 lbl_8031EEBC __attribute__((section(".data")));
extern f32 lbl_8031EEC0 __attribute__((section(".data")));
extern f32 lbl_8031EEC4 __attribute__((section(".data")));

void AI__FinalizeDeathSequence(void *arg0) {
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) == 4) {
        temp_r3 = Game__FindAvatarByAnimationId(0x20);
        if ((temp_r3 != NULL) && ((s32) M2C_FIELD(temp_r3, s32 *, 0x2D4) != 0)) {
            Avatar__AdjustHealth(temp_r3, lbl_8031EEBC);
        }
        Avatar__StopFireShieldImpl(M2C_FIELD(arg0, void **, 0x390), (void *)0xD);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) == 7) {
        temp_r10 = M2C_FIELD(arg0, void **, 0x390);
        temp_r11 = M2C_FIELD(temp_r10, void **, 0x34);
        M2C_FIELD(temp_r11, M2C_UNK (**)(void *, f32), 0x174)(temp_r10 + M2C_FIELD(temp_r11, s16 *, 0x170), lbl_8031EEC0);
    } else {
        temp_r10_2 = M2C_FIELD(arg0, void **, 0x390);
        temp_r11_2 = M2C_FIELD(temp_r10_2, void **, 0x34);
        M2C_FIELD(temp_r11_2, M2C_UNK (**)(void *, f32), 0x174)(temp_r10_2 + M2C_FIELD(temp_r11_2, s16 *, 0x170), lbl_8031EEC4);
    }
    AI__SetState(arg0, 3);
}
