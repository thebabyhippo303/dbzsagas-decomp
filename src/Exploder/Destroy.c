/* Exploder__Destroy @ 0x800EC3B0 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Actor__Destroy(void *, int);
void memFree(void *);
extern M2C_UNK lbl_803317D0 __attribute__((section(".data")));
extern M2C_UNK lbl_803318A0 __attribute__((section(".data")));
extern M2C_UNK lbl_803318C0 __attribute__((section(".data")));
extern M2C_UNK lbl_80331968 __attribute__((section(".data")));

void Exploder__Destroy(void *arg0, s32 arg1) {
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r9;
    void *temp_r9_2;

    M2C_FIELD(arg0, M2C_UNK **, 0x198) = &lbl_803318C0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1B4) = &lbl_803318A0;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C8) = &lbl_803317D0;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &lbl_80331968;
    if ((void *) M2C_FIELD(arg0, void **, 0x704) != NULL) {
        do {
            temp_r9 = M2C_FIELD(arg0, void **, 0x704);
            temp_r30 = M2C_FIELD(temp_r9, void **, 0x14);
            memFree(temp_r9);
            M2C_FIELD(arg0, void **, 0x704) = temp_r30;
        } while (temp_r30 != NULL);
    }
    if ((void *) M2C_FIELD(arg0, void **, 0x708) != NULL) {
        do {
            temp_r9_2 = M2C_FIELD(arg0, void **, 0x708);
            temp_r30_2 = M2C_FIELD(temp_r9_2, void **, 0xC);
            memFree(temp_r9_2);
            M2C_FIELD(arg0, void **, 0x708) = temp_r30_2;
        } while (temp_r30_2 != NULL);
    }
    Actor__Destroy(arg0, arg1);
}
