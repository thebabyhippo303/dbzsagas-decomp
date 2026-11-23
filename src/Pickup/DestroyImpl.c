/* Pickup__DestroyImpl @ 0x800F0CEC (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Emitter__Kill(void *);
void EventDispatcher__Send(void *, s32, s32, s32, s32);
void EventDispatcher__SendToActor(void *, s32, s32, s32, s32);
M2C_UNK Mover__Destroy(void *, s32);               /* extern */
extern M2C_UNK lbl_803347D8 __attribute__((section(".data")));
extern M2C_UNK lbl_803348A8 __attribute__((section(".data")));
extern M2C_UNK lbl_803348C8 __attribute__((section(".data")));
extern M2C_UNK lbl_80334970 __attribute__((section(".data")));
extern M2C_UNK lbl_803B1DDC __attribute__((section(".data")));

void Pickup__DestroyImpl(void *arg0, s32 arg1) {
    void *temp_r3;
    void *temp_r7;

    temp_r3 = M2C_FIELD(arg0, void **, 0x604);
    M2C_FIELD(arg0, M2C_UNK **, 0x198) = &lbl_803348C8;
    M2C_FIELD(arg0, M2C_UNK **, 0x1B4) = &lbl_803348A8;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C8) = &lbl_803347D8;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &lbl_80334970;
    if (temp_r3 != NULL) {
        Emitter__Kill(temp_r3);
    }
    temp_r7 = M2C_FIELD(arg0, void **, 0x5E8);
    if (temp_r7 != NULL) {
        EventDispatcher__SendToActor(&lbl_803B1DDC, 0x24, (s32) arg0, arg0, temp_r7);
    }
    EventDispatcher__Send(&lbl_803B1DDC, 0x10024, NULL, arg0, 0);
    Mover__Destroy(arg0, arg1);
}
