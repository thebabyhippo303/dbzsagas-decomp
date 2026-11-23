/* Bone__EnsureWorldTransform @ 0x8023CBD4 (size: 0x28C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void *Matrix__Copy4x4(void *, void *);
void Bone__ApplyScale(void *);
void *Bone__EnsureWorldTransform(void *);
extern f32 lbl_80346F94 __attribute__((section(".data")));
extern f32 lbl_80346F98 __attribute__((section(".data")));
extern char lbl_803AD910[];
void *Bone__EnsureWorldTransform(void *arg0) {
    f32 m[16];
    void *n;
    void *pb;
    f32 p0;
    f32 p4;
    f32 p8;
    f32 p16;
    f32 p20;
    f32 p24;
    f32 p32;
    f32 p36;
    f32 p40;
    f32 p48;
    f32 p52;
    f32 p56;
    f32 lx;
    f32 ly;
    f32 lz;
    f32 w0;
    f32 w1;
    if (M2C_FIELD(arg0, s32 *, 0xDC) & 0x800000) {
        if (M2C_FIELD(arg0, void **, 0xC0) != NULL) {
            Bone__EnsureWorldTransform(M2C_FIELD(arg0, void **, 0xC0));
            n = M2C_FIELD(arg0, void **, 0xC0);
            pb = (void *)((char *)arg0 + 64);
            ly = M2C_FIELD(pb, f32 *, 4);
            p16 = M2C_FIELD(n, f32 *, 16);
            p20 = M2C_FIELD(n, f32 *, 20);
            p24 = M2C_FIELD(n, f32 *, 24);
            p0 = M2C_FIELD(n, f32 *, 0);
            p4 = M2C_FIELD(n, f32 *, 4);
            p8 = M2C_FIELD(n, f32 *, 8);
            lx = M2C_FIELD(arg0, f32 *, 64);
            p32 = M2C_FIELD(n, f32 *, 32);
            p36 = M2C_FIELD(n, f32 *, 36);
            p40 = M2C_FIELD(n, f32 *, 40);
            lz = M2C_FIELD(pb, f32 *, 8);
            w0 = lbl_80346F94;
            p56 = M2C_FIELD(n, f32 *, 56);
            p48 = M2C_FIELD(n, f32 *, 48);
            p52 = M2C_FIELD(n, f32 *, 52);
            m[0] = (lz * p32) + ((lx * p0) + (ly * p16));
            m[1] = (lz * p36) + ((lx * p4) + (ly * p20));
            m[2] = (lz * p40) + ((lx * p8) + (ly * p24));
            m[3] = w0;
            ly = M2C_FIELD(pb, f32 *, 20);
            lx = M2C_FIELD(pb, f32 *, 16);
            lz = M2C_FIELD(pb, f32 *, 24);
            m[4] = (lz * p32) + ((lx * p0) + (ly * p16));
            m[5] = (lz * p36) + ((lx * p4) + (ly * p20));
            m[6] = (lz * p40) + ((lx * p8) + (ly * p24));
            m[7] = w0;
            ly = M2C_FIELD(pb, f32 *, 36);
            lx = M2C_FIELD(pb, f32 *, 32);
            lz = M2C_FIELD(pb, f32 *, 40);
            m[8] = (lz * p32) + ((lx * p0) + (ly * p16));
            m[9] = (lz * p36) + ((lx * p4) + (ly * p20));
            m[10] = (lz * p40) + ((lx * p8) + (ly * p24));
            m[11] = w0;
            w1 = lbl_80346F98;
            ly = M2C_FIELD(pb, f32 *, 52);
            lx = M2C_FIELD(pb, f32 *, 48);
            lz = M2C_FIELD(pb, f32 *, 56);
            m[12] = ((lz * p32) + ((lx * p0) + (ly * p16))) + p48;
            m[13] = ((lz * p36) + ((lx * p4) + (ly * p20))) + p52;
            m[14] = ((lz * p40) + ((lx * p8) + (ly * p24))) + p56;
            m[15] = w1;
            Matrix__Copy4x4(arg0, m);
        } else {
            void *sb;
            sb = (void *)((char *)arg0 + 64);
            M2C_FIELD(arg0, f32 *, 0) = M2C_FIELD(arg0, f32 *, 64);
            M2C_FIELD(arg0, f32 *, 4) = M2C_FIELD(sb, f32 *, 4);
            M2C_FIELD(arg0, f32 *, 8) = M2C_FIELD(sb, f32 *, 8);
            M2C_FIELD(arg0, f32 *, 12) = M2C_FIELD(sb, f32 *, 12);
            M2C_FIELD(arg0, f32 *, 16) = M2C_FIELD(sb, f32 *, 16);
            M2C_FIELD(arg0, f32 *, 20) = M2C_FIELD(sb, f32 *, 20);
            M2C_FIELD(arg0, f32 *, 24) = M2C_FIELD(sb, f32 *, 24);
            M2C_FIELD(arg0, f32 *, 28) = M2C_FIELD(sb, f32 *, 28);
            M2C_FIELD(arg0, f32 *, 32) = M2C_FIELD(sb, f32 *, 32);
            M2C_FIELD(arg0, f32 *, 36) = M2C_FIELD(sb, f32 *, 36);
            M2C_FIELD(arg0, f32 *, 40) = M2C_FIELD(sb, f32 *, 40);
            M2C_FIELD(arg0, f32 *, 44) = M2C_FIELD(sb, f32 *, 44);
            M2C_FIELD(arg0, f32 *, 48) = M2C_FIELD(sb, f32 *, 48);
            M2C_FIELD(arg0, f32 *, 52) = M2C_FIELD(sb, f32 *, 52);
            M2C_FIELD(arg0, f32 *, 56) = M2C_FIELD(sb, f32 *, 56);
            M2C_FIELD(arg0, f32 *, 60) = M2C_FIELD(sb, f32 *, 60);
        }
        if (M2C_FIELD(arg0, u8 *, 0xDC) != 0x20) {
            Bone__ApplyScale(arg0);
        }
        M2C_FIELD(arg0, s32 *, 0xDC) &= ~0x800000;
        M2C_FIELD(lbl_803AD910, s32 *, 128)++;
    }
    return arg0;
}
