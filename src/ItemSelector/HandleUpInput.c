/* ItemSelector__HandleUpInput @ 0x802661EC (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct {
    char pad[312];
    short adjust;
    short unused;
    void *fn;
} ItemSelVT;

void ItemSelector__HandleUpInput(void *arg0) {
    if (*(u32 *)((char *)arg0 + 27484) == 0) {
        ItemSelVT *vt = *(ItemSelVT **)((char *)arg0 + 0x10);
        ((void (*)(void *))vt->fn)((char *)arg0 + vt->adjust);
    }
}
