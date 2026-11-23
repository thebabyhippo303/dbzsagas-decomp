/* WindMgr__FreeAll @ 0x802177CC (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
typedef struct {
    char pad[0xC];
    void *head;
} WMSys;
extern WMSys lbl_803ADCB0 __attribute__((section(".bss")));
void WindMgr__FreeEntry(void *);

void WindMgr__FreeAll(void) {
    WMSys *sys;
    void *h;
    h = ((WMSys *)&lbl_803ADCB0)->head;
    if (h != NULL) {
        do {
            sys = &lbl_803ADCB0;
            WindMgr__FreeEntry(sys->head);
            h = sys->head;
        } while (h != NULL);
    }
}
