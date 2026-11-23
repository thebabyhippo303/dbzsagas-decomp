/* FrustumPool__FreeAll @ 0x8021B15C (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
typedef struct {
    char pad[0x14];
    void *head;
} FPSys;
extern FPSys lbl_803ADD08 __attribute__((section(".bss")));
void FrustumPool__Free(void *);

void FrustumPool__FreeAll(void) {
    FPSys *sys;
    void *h;
    h = ((FPSys *)&lbl_803ADD08)->head;
    if (h != NULL) {
        do {
            sys = &lbl_803ADD08;
            FrustumPool__Free(sys->head);
            h = sys->head;
        } while (h != NULL);
    }
}
