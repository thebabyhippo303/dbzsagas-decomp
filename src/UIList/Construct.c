/* UIList__Construct @ 0x80135284 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * fn_80184348(int);
void fn_8026B590(void *);
extern volatile f32 lbl_8032AB9C __attribute__((section(".data")));
extern volatile f32 lbl_8032ABA0 __attribute__((section(".data")));
extern M2C_UNK lbl_80330458 __attribute__((section(".data")));

void *UIList__Construct(void *arg0) {
    void *temp_r29;
    void *temp_r3;
    s32 eight;
    s32 zero = 0;
    f32 value0;
    f32 value1;

    temp_r29 = arg0 + 0x340;
    fn_8026B590(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x19C) = &lbl_80330458;
    fn_8026B590(arg0 + 0x1A0);
    eight = 8;
    temp_r3 = fn_80184348(0x20);
    value0 = lbl_8032AB9C;
    M2C_FIELD(arg0, volatile void **, 0x340) = temp_r3;
    value1 = lbl_8032ABA0;
    M2C_FIELD(temp_r29, volatile s32 *, 0xC) = eight;
    M2C_FIELD(temp_r29, volatile s32 *, 0x14) = zero;
    M2C_FIELD(temp_r29, volatile s32 *, 4) = zero;
    M2C_FIELD(temp_r29, volatile s32 *, 8) = eight;
    M2C_FIELD(temp_r29, volatile s32 *, 0x10) = zero;
    M2C_FIELD(arg0, volatile s32 *, 0x364) = 1;
    M2C_FIELD(arg0, volatile s32 *, 0x35C) = zero;
    M2C_FIELD(arg0, volatile f32 *, 0x380) = value1;
    M2C_FIELD(arg0, volatile f32 *, 0x378) = value0;
    M2C_FIELD(arg0, volatile s32 *, 0x358) = zero;
    M2C_FIELD(arg0, volatile s32 *, 0x368) = zero;
    M2C_FIELD(arg0, volatile f32 *, 0x37C) = value0;
    M2C_FIELD(arg0, volatile f32 *, 0x384) = value0;
    M2C_FIELD(arg0, volatile f32 *, 0x388) = value0;
    M2C_FIELD(arg0, volatile f32 *, 0x36C) = value0;
    M2C_FIELD(arg0, volatile f32 *, 0x370) = value0;
    M2C_FIELD(arg0, volatile f32 *, 0x374) = value0;
    return arg0;
}
