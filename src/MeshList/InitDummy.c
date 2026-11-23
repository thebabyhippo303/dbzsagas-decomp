/* MeshList__InitDummy @ 0x80210DF8 (size: 0x154, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *memset(void *, int, unsigned long);
char *strncpy(char *, const char *, unsigned long);
extern char lbl_80346248[] __attribute__((section(".data")));
extern const f32 lbl_80346258 __attribute__((section(".data")));
extern const f32 lbl_8034625C __attribute__((section(".data")));

void MeshList__InitDummy(char *self, char *blk) {
    s32 off;
    s32 n;
    s32 z;
    f32 *v;
    f32 *v_b;
    char *p4;
    f32 *m;

    n = 2;
    memset(self, 0, 0xB0);
    memset(blk, 0, 0x40);
    z = 0;
    M2C_FIELD(self, char **, 0x94) = blk;
    M2C_FIELD(self, s8 *, 1) = 0x20;
    M2C_FIELD(self, s32 *, 0x78) = z;
    m = (f32 *) (self + 0x10);
    off = 0;
    m[0] = lbl_80346258;
    m[15] = lbl_80346258;
    m[14] = lbl_8034625C;
    m[2] = lbl_8034625C;
    m[1] = lbl_8034625C;
    m[3] = lbl_8034625C;
    m[4] = lbl_8034625C;
    m[5] = lbl_80346258;
    m[6] = lbl_8034625C;
    m[7] = lbl_8034625C;
    m[8] = lbl_8034625C;
    m[9] = lbl_8034625C;
    m[10] = lbl_80346258;
    m[11] = lbl_8034625C;
    m[13] = lbl_8034625C;
    m[12] = lbl_8034625C;
    M2C_FIELD(self, s16 *, 2) = z;
    M2C_FIELD(M2C_FIELD(self, char **, 0x94), s32 *, 0) = z;
    do {
        n -= 1;
        p4 = M2C_FIELD(self, char **, 0x94) + 4;
        *(s32 *) (p4 + off) = 0;
        off += 4;
    } while (n != 0);
    M2C_FIELD(self, f32 *, 0x8C) = lbl_80346258;
    strncpy(M2C_FIELD(self, char **, 0x94) + 0x20, lbl_80346248, 0x14);
    M2C_FIELD(M2C_FIELD(self, char **, 0x94), s32 *, 0x14) = n;
    v = (f32 *) (self + 0x50);
    M2C_FIELD(M2C_FIELD(self, char **, 0x94), s32 *, 0x18) = n;
    v[0] = lbl_8034625C;
    v[1] = lbl_8034625C;
    v[2] = lbl_8034625C;
    M2C_FIELD(self, f32 *, 0x5C) = lbl_8034625C;
    v = (f32 *) (self + 0x60);
    M2C_FIELD(self, f32 *, 0x60) = lbl_8034625C;
    v[1] = lbl_8034625C;
    v[2] = lbl_8034625C;
    v_b = (f32 *) (self + 0x6C);
    M2C_FIELD(self, f32 *, 0x6C) = lbl_8034625C;
    v_b[2] = lbl_8034625C;
    v_b[1] = lbl_8034625C;
    M2C_FIELD(self, s32 *, 0x90) = n;
}
