/* fn_800759B0 @ 0x800759B0 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * AI__ConstructBase(void *);
void AI__EnsureActionPatternInitialized(void *);
int AI__InitializeActorAndState(void *);
void Bone__SetOpacity(void *, float);
int Skeleton__FindBoneByName(void *, void **, char *);
M2C_UNK Avatar__ShowBoneByName(void *, M2C_UNK *);  /* extern */
extern s8 lbl_8031E248 __attribute__((section(".data")));
extern M2C_UNK lbl_8031E254 __attribute__((section(".data")));
extern f32 lbl_8031F028 __attribute__((section(".data")));
extern M2C_UNK lbl_80331750 __attribute__((section(".data")));

void *AI__ConstructExploderController(void *arg0, void *arg1) {
    void *sp8;
    void *temp_r9;

    AI__ConstructBase(arg0);
    M2C_FIELD(arg0, void **, 0x38C) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0x57C) = &lbl_80331750;
    AI__InitializeActorAndState(arg0);
    AI__EnsureActionPatternInitialized(arg0);
    temp_r9 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x38C), void **, 0xC8);
    if ((s32) M2C_FIELD(M2C_FIELD(temp_r9, void **, 0x19D8), s32 *, 0xC) == 0x2E) {
        Skeleton__FindBoneByName(M2C_FIELD(M2C_FIELD(temp_r9, void **, 0x84), void **, 0xC), &sp8, &lbl_8031E248);
        Bone__SetOpacity(sp8, lbl_8031F028);
    } else {
        Avatar__ShowBoneByName(arg0, &lbl_8031E254);
    }
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x144) = 1;
    M2C_FIELD(arg0, s32 *, 0x148) = 1;
    M2C_FIELD(arg0, s32 *, 0x580) = 0;
    return arg0;
}
