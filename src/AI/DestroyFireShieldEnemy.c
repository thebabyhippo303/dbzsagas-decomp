/* AI__DestroyFireShieldEnemy @ 0x80084AA4 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AI__DestroyEnemyBase(void *, s32);
void Avatar__StopFireShieldImpl(void *, void *);
extern M2C_UNK lbl_8032F4E0 __attribute__((section(".data")));

void AI__DestroyFireShieldEnemy(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x57C) = &lbl_8032F4E0;
    Avatar__StopFireShieldImpl(M2C_FIELD(arg0, void **, 0x390), (void *)0xE);
    AI__DestroyEnemyBase(arg0, arg1);
}
