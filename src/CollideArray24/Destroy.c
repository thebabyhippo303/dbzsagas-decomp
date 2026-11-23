/* CollideArray24__Destroy @ 0x801D4A90 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Mem__Delete(void *);
void Mem__DeleteArray(void *);
extern M2C_UNK lbl_803422B0 __attribute__((section(".data")));
extern M2C_UNK lbl_80342350 __attribute__((section(".data")));

void CollideArray24__Destroy(void *arg0, s32 arg1) {
    void *temp_r3;

    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &lbl_803422B0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0) == 0) {
        temp_r3 = M2C_FIELD(arg0, void **, 0x2C);
        if (temp_r3 != NULL) {
            Mem__DeleteArray(temp_r3);
        }
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &lbl_80342350;
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
