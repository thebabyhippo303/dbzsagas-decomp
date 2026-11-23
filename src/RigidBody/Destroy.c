/* RigidBody__Destroy @ 0x801A9AC8 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Collider__Destroy(void *, int);
M2C_UNK Protagonist__Destroy(void *, s32);          /* extern */
extern M2C_UNK lbl_80340F30 __attribute__((section(".data")));
extern M2C_UNK lbl_80340FF0 __attribute__((section(".data")));

void RigidBody__Destroy(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x198) = &lbl_80340F30;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &lbl_80340FF0;
    Collider__Destroy(arg0 + 0x198, 0);
    Protagonist__Destroy(arg0, arg1);
}
