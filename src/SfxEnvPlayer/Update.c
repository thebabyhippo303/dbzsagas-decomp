/* SfxEnvPlayer__Update @ 0x8019AD8C (size: 0x180, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sfx3DPlayer__Update(s32);
M2C_UNK AmbientMixer__Update(s32, s32);
M2C_UNK fn_8019B14C(s32, s32, s32);
M2C_UNK fn_8019B360(s32, s32, s32, s32);
M2C_UNK EnvSoundSource__Update(s32, s32, s32, s32);
#define VCALL0(obj, voff, aoff, type) M2C_FIELD(M2C_FIELD(obj, void **, 0x60), type (**)(void *), voff)((char *)(obj) + M2C_FIELD(M2C_FIELD(obj, void **, 0x60), s16 *, aoff))

void SfxEnvPlayer__Update(void *arg0) {
    s32 now;
    s32 i;
    s32 src;
    s32 node;
    void *obj;
    void *vt;
    char *slot;

    if (M2C_FIELD(arg0, s32 *, 0xAC) != 0) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 0;
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x208) == 0) {
        Sfx3DPlayer__Update((s32) arg0);
        obj = M2C_FIELD(arg0, void **, 0x20);
        now = VCALL0(obj, 0x4C, 0x48, s32);
        AmbientMixer__Update((s32) ((char *)arg0 + 0xD0), now);
        if ((u32) now >= M2C_FIELD(arg0, u32 *, 0x204)) {
            obj = M2C_FIELD(arg0, void **, 0x20);
            M2C_FIELD(arg0, u32 *, 0x204) = (u32) (now + 0x64);
            if (VCALL0(obj, 0xB4, 0xB0, s32) == 1) {
                obj = M2C_FIELD(arg0, void **, 0x20);
                vt = M2C_FIELD(obj, void **, 0x60);
                src = M2C_FIELD(vt, s32 (**)(void *, s32), 0xBC)((char *)obj + M2C_FIELD(vt, s16 *, 0xB8), 0);
                fn_8019B14C((s32) arg0, src + 4, now);
            }
            i = 0;
            slot = (char *)arg0 + 0x184;
            for (; i < VCALL0(M2C_FIELD(arg0, void **, 0x20), 0xB4, 0xB0, s32);) {
                obj = M2C_FIELD(arg0, void **, 0x20);
                vt = M2C_FIELD(obj, void **, 0x60);
                src = M2C_FIELD(vt, s32 (**)(void *, s32), 0xBC)((char *)obj + M2C_FIELD(vt, s16 *, 0xB8), i);
                i++;
                fn_8019B360((s32) arg0, src + 4, (s32) slot, now);
                slot += 0x1C;
            }
            for (node = M2C_FIELD(arg0, s32 *, 0x1F4); node != 0; node = M2C_FIELD(node, s32 *, 0x64)) {
                EnvSoundSource__Update(node, (s32) M2C_FIELD(arg0, void **, 0x20), (s32) arg0, now);
            }
        }
    }
}
