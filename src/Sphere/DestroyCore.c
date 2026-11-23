/* Sphere__DestroyCore @ 0x8026B62C (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Sphere__RemoveFromParent(void *);
void Sphere__Unregister(void *);
void fn_801843CC(void *);
M2C_UNK fn_8026BA50(void *);                        /* extern */
extern M2C_UNK lbl_8034DFA0 __attribute__((section(".data")));

void Sphere__DestroyCore(void *arg0, s32 arg1) {
    void *temp_r3;

    M2C_FIELD(arg0, M2C_UNK **, 0x19C) = &lbl_8034DFA0;
    Sphere__Unregister(arg0);
    fn_8026BA50(arg0);
    Sphere__RemoveFromParent(arg0);
    temp_r3 = M2C_FIELD(arg0, void **, 4);
    if (temp_r3 != NULL) {
        Sphere__RemoveFromParent(temp_r3);
    }
    if (arg1 & 1) {
        fn_801843CC(arg0);
    }
}
