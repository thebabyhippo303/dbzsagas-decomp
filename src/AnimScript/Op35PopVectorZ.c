/* AnimScript__Op35PopVectorZ @ 0x80236680 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern f32 lbl_80346E14 __attribute__((section(".rodata")));
typedef struct Aux { char pad[56]; void *f56; } Aux;
typedef struct Slot { char p0[8]; u8 count; char p9[19]; Aux *aux; char p32[16]; f32 *table; } Slot;
typedef struct AnimScript { char pad[240]; Slot *slots[1]; } AnimScript;
s32 AnimScript__Op35PopVectorZ(AnimScript *this, s32 idx, s32 *sp) {
    Slot *slot = this->slots[idx];
    u8 count;
    f32 f0;
    f32 v[3];
    f32 *dst;
    f32 one;
    if (slot != NULL && slot->aux->f56 != NULL)
        *sp += 4;
    count = slot->count;
    slot->count = count - 1;
    f0 = slot->table[(s32)(s8)count];
    dst = v;
    one = lbl_80346E14;
    v[0] = one;
    dst[1] = one;
    dst[2] = f0;
    return 0;
}
