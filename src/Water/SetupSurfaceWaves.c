/* Water__SetupSurfaceWaves @ 0x802783A0 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef float f32;
typedef int s32;
int MaterialLayer__ParseWaveFunction(void *a, void *params);
void WaterMesh__SetHeightWave(void *mesh, s32 mode, f32 f1, f32 f2);
void WaterMesh__SetSurfaceWavePair(void *mesh, s32 w1, s32 w2, f32 a, f32 b, f32 c, f32 d);
typedef struct {
    char pad[0xE0];
    f32 fE0;
    f32 fE4;
    char pad2[0x20];
    f32 f108;
    f32 f10C;
    char pad3[0x20];
    f32 f130;
    f32 f134;
} WaveParams;
s32 Water__SetupSurfaceWaves(void *arg0, void *mesh, WaveParams *p) {
    s32 waveA;
    WaterMesh__SetHeightWave(mesh, MaterialLayer__ParseWaveFunction(arg0, &p->fE0), p->fE0, p->fE4);
    waveA = MaterialLayer__ParseWaveFunction(arg0, &p->f108);
    WaterMesh__SetSurfaceWavePair(mesh, waveA, MaterialLayer__ParseWaveFunction(arg0, &p->f130),
        p->f108, p->f10C, p->f130, p->f134);
    return 1;
}
