/* Avatar__ShowBoneByName @ 0x8005BA7C (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int Actor__FindBoneIdByName(void *, unsigned char *, const char *);
void Actor__SetBoneHidden(void *, int, int);
void AI__ShowActorBoneByName(void *arg0, u8 *arg1) {
    s8 sp8;
    void *temp_r30;

    temp_r30 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x38C), void **, 0xC8);
    Actor__FindBoneIdByName(temp_r30, arg1, &sp8);
    Actor__SetBoneHidden(temp_r30, (s32) (u8) sp8, 0);
}
