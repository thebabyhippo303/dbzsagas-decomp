/* AvaSurf__FreeRows @ 0x800B8750 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AvaSurf__FreeRows @ 0x800B8750 (0x40). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Mem__DeleteArray(void *);
void AvaSurf__FreeRows(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x2C);
    if (temp_r3 != NULL) {
        Mem__DeleteArray(temp_r3);
    }
    M2C_FIELD(arg0, void **, 0x2C) = NULL;
}
