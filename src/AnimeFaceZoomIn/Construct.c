/* AnimeFaceZoomIn__Construct @ 0x800237A0 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;
void *fn_80184348(int);
extern f32 lbl_80310FA0 __attribute__((section(".data")));
extern f32 lbl_80310FA4 __attribute__((section(".data")));
extern int lbl_80335A80 __attribute__((section(".data")));
extern int lbl_80335B58 __attribute__((section(".data")));
void *AnimeFaceZoomIn__Construct(void *self) {
    register int zero = 0;
    register int eight = 8;
    f32 a;
    f32 b;
    void *p18 = (char *)self + 0x18;
    void *p24 = (char *)self + 0x24;
    *(volatile void **)((char *)self + 0x3C) = &lbl_80335B58;
    a = lbl_80310FA0;
    b = lbl_80310FA4;
    *(volatile f32 *)((char *)self + 0x18) = a;
    *(volatile f32 *)((char *)p18 + 8) = a;
    *(volatile f32 *)((char *)p18 + 4) = b;
    *(void **)p24 = fn_80184348(0x20);
    *(volatile int *)((char *)p24 + 0x14) = zero;
    *(volatile int *)((char *)p24 + 0x0C) = eight;
    *(volatile int *)((char *)p24 + 4) = zero;
    *(volatile int *)((char *)p24 + 8) = eight;
    *(volatile int *)((char *)p24 + 0x10) = zero;
    *(volatile void **)((char *)self + 0x3C) = &lbl_80335A80;
    return self;
}
