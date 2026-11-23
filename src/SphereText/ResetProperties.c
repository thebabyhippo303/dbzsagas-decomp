/* SphereText__ResetProperties @ 0x80270544 (size: 0x1B4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sphere__ResetProperties(void *);
void *Font__GetDefault(void);
typedef struct { s16 adjust; s16 pad; void *fn; } VtEnt;
typedef struct { VtEnt e[200]; } VTable;
extern f32 lbl_80349FC4 __attribute__((section(".data")));

void SphereText__ResetProperties(void *arg0) {
    void *temp_r9;
    void *temp_r29;
    void *temp_r28;
    void *temp_r28_2;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;
    void *temp_r9_10;
    void *temp_r9_11;
    void *temp_r9_12;

    Sphere__ResetProperties(arg0);
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 884)(arg0 + M2C_FIELD(temp_r9, s16 *, 880));
    temp_r28 = M2C_FIELD(arg0, void **, 0x19C);
    temp_r28_2 = (char *)temp_r28 + 864;
    temp_r29 = (char *)arg0 + M2C_FIELD(temp_r28, s16 *, 864);
    M2C_FIELD(temp_r28_2, M2C_UNK (**)(void *, void *, f32, f32), 4)(temp_r29, Font__GetDefault(), lbl_80349FC4, lbl_80349FC4);
    temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, s32), 532)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 528), 128);
    temp_r9_3 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, f32), 1004)(arg0 + M2C_FIELD(temp_r9_3, s16 *, 1000), lbl_80349FC4);
    temp_r9_4 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, f32), 1020)(arg0 + M2C_FIELD(temp_r9_4, s16 *, 1016), lbl_80349FC4);
    temp_r9_5 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *, f32), 1116)(arg0 + M2C_FIELD(temp_r9_5, s16 *, 1112), lbl_80349FC4);
    temp_r9_6 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *, f32), 1036)(arg0 + M2C_FIELD(temp_r9_6, s16 *, 1032), lbl_80349FC4);
    temp_r9_7 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *, f32), 1052)(arg0 + M2C_FIELD(temp_r9_7, s16 *, 1048), lbl_80349FC4);
    temp_r9_8 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_8, M2C_UNK (**)(void *, f32), 1068)(arg0 + M2C_FIELD(temp_r9_8, s16 *, 1064), lbl_80349FC4);
    temp_r9_9 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_9, M2C_UNK (**)(void *, f32), 1132)(arg0 + M2C_FIELD(temp_r9_9, s16 *, 1128), lbl_80349FC4);
    temp_r9_10 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_10, M2C_UNK (**)(void *, f32, f32), 1084)(arg0 + M2C_FIELD(temp_r9_10, s16 *, 1080), lbl_80349FC4, lbl_80349FC4);
    temp_r9_11 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_11, M2C_UNK (**)(void *, f32), 1124)(arg0 + M2C_FIELD(temp_r9_11, s16 *, 1120), lbl_80349FC4);
    M2C_FIELD(arg0, s32 *, 472) = 1;
    temp_r9_12 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_12, M2C_UNK (**)(void *), 924)(arg0 + M2C_FIELD(temp_r9_12, s16 *, 920));
}
