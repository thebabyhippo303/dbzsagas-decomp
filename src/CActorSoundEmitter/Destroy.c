/* CActorSoundEmitter__Destroy @ 0x801DEB4C (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
void SfxPlayer__StopVoice(s32, void *);
M2C_UNK Audio__DestroySfxPlayer(s32, s32, s32);
extern M2C_UNK lbl_80344E30 __attribute__((section(".data")));
extern s32 lbl_803DCC20;

void CActorSoundEmitter__Destroy(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &lbl_80344E30;
    if ((s32) M2C_FIELD(arg0, s32 *, 8) != 0) {
        SfxPlayer__StopVoice(M2C_FIELD(arg0, s32 *, 4), arg0 + 8);
    }
    Audio__DestroySfxPlayer(lbl_803DCC20, M2C_FIELD(arg0, s32 *, 4), 1);
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
