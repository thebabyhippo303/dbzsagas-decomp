/* ItemSelector__HandleLeftInput @ 0x80266274 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct {
    char pad[312];
    short adjustUp;
    short unusedUp;
    void *fnUp;
    short adjustDown;
    short unusedDown;
    void *fnDown;
    short adjustLeft;
    short unusedLeft;
    void *fnLeft;
} ItemSelVT;

void ItemSelector__HandleLeftInput(void *arg0) {
    if (*(u32 *)((char *)arg0 + 27484) == 1) {
        ItemSelVT *vt = *(ItemSelVT **)((char *)arg0 + 0x10);
        ((void (*)(void *))vt->fnUp)((char *)arg0 + vt->adjustUp);
    }
}
