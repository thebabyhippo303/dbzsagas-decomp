/* BaseMenu__ResetState @ 0x802630D4 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32;
typedef struct { s32 a; s32 b; } Pair;
typedef struct { char pad[152]; s32 a152; s32 a156; s32 a160; s32 a164; Pair pA; Pair pB; s32 a184; s32 a188; } BM;
void BaseMenu__ResetState(BM *self) {
    self->a152 = 0;
    self->a156 = 0;
    self->a160 = 0;
    self->a164 = 0;
    self->pA = (Pair){0, 0};
    self->a184 = 0;
    self->a188 = 0;
    self->pB = (Pair){0, 0};
}
