/* SfxEnvPlayer__UpdateEnvironmentZones @ 0x8019B14C (size: 0x124, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void SfxEnvPlayer__ReserveTriggerQuery(void *, s32);
void SfxEnvPlayer__ApplyEnvironment(void *, s32, f32);
void AmbientMixer__QueueTrack(void *, char *);
s32 fn_8025F71C(s32);
s32 fn_8025F788(s32, s32, s32, s32, s32);
f32 fn_80199EB0(void *, s32);

void SfxEnvPlayer__UpdateEnvironmentZones(char *arg0, s32 arg1) {
    s32 temp_r30_2;
    s32 temp_r3;
    s32 count;
    s32 temp_r5;
    s32 i;
    char *temp_r11;
    char *temp_r30;
    char *best;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0xB0);
    if (temp_r3 == 0) goto block_11;
    if (fn_8025F71C(temp_r3) == 0) goto block_11;
    SfxEnvPlayer__ReserveTriggerQuery(arg0, fn_8025F71C(M2C_FIELD(arg0, s32 *, 0xB0)));
    temp_r5 = M2C_FIELD(arg0, s32 *, 0xB8);
    if (temp_r5 == 0) goto block_11;
    best = NULL;
    count = fn_8025F788(M2C_FIELD(arg0, s32 *, 0xB0), arg1, temp_r5, M2C_FIELD(arg0, s32 *, 0xBC), 0);
    for (i = 0; i < count; i++) {
        temp_r30 = M2C_FIELD(arg0, char ***, 0xB8)[i];
        temp_r11 = M2C_FIELD(temp_r30, char **, 4);
        if ((M2C_FIELD(temp_r11, s32 (**)(void *), 0x2C)(temp_r30 + M2C_FIELD(temp_r11, s16 *, 0x28)) != 0) && ((best == NULL) || !(M2C_FIELD(temp_r30, f32 *, 0x60) >= M2C_FIELD(best, f32 *, 0x60)))) {
            best = temp_r30;
        }
    }
    if (best != NULL) goto found;
block_11:
    SfxEnvPlayer__ApplyEnvironment(arg0, M2C_FIELD(arg0, s32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4));
    return;
found:
    temp_r30_2 = M2C_FIELD(best, s32 *, 0x64);
    SfxEnvPlayer__ApplyEnvironment(arg0, temp_r30_2, fn_80199EB0(best, arg1));
    AmbientMixer__QueueTrack(arg0 + 0xD0, best + 0x78);
}
