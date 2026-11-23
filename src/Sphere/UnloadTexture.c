/* Sphere__UnloadTexture @ 0x8026C294 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef short s16;
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void EffectHandle__ForgetTextureSetByName(s32);
void Sphere__UnloadTexture(void *arg0) {
    s32 h;
    void *temp_r9;

    h = M2C_FIELD(arg0, s32 *, 0x14);
    if (h != 0) {
        EffectHandle__ForgetTextureSetByName(h);
    }
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x5C)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x58));
}
