/* LineToTerrain__Destroy @ 0x801D3B94 (size: 0x2C0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
int sprintf(char *, const char *, ...);
extern char lbl_8034146C[] __attribute__((section(".data")));
extern char lbl_803414AC[] __attribute__((section(".data")));
extern char lbl_803414C0[] __attribute__((section(".data")));
extern char lbl_80341500[] __attribute__((section(".data")));
extern char lbl_803421E8[] __attribute__((section(".data")));
extern char lbl_80342350[] __attribute__((section(".data")));
extern s32 lbl_803DE570;

void LineToTerrain__Destroy(char *self, s32 flags) {
    char buf[256];
    char *owner;
    char *node;
    char *pool;
    char *obj;
    char *vt;
    s32 val;
    f32 f;
    u32 mode;
    s32 next;
    s32 next2;
    s32 next3;
    char *tail;
    s32 sz;
    s32 start;

    M2C_FIELD(self, char **, 0x1C) = lbl_803421E8;
    if (M2C_FIELD(self, s32 *, 0x40) != 0) {
        owner = M2C_FIELD(self, char **, 0x24);
        val = M2C_FIELD(self, s32 *, 0x7F4);
        f = M2C_FIELD(self, f32 *, 0x7F8);
        if (M2C_FIELD(owner, s32 *, 0x30) != 0 && self == M2C_FIELD(owner, char **, 0x2C)) {
            mode = M2C_FIELD(owner, s32 *, 0x1C);
            mode &= lbl_803DE570;
            M2C_FIELD(owner, s32 *, 0x2C) = val;
            switch (mode) {
            case 0x10:
                M2C_FIELD(owner, f32 *, 0x24) = f;
                break;
            case 0x20:
                M2C_FIELD(owner, f32 *, 0x20) = f;
                break;
            case 0x30:
                M2C_FIELD(owner, f32 *, 0x28) = f;
                break;
            }
        }
    }
    node = M2C_FIELD(self, char **, 0x54);
    if (node != NULL) {
        if (M2C_FIELD(node, char **, 0) != NULL) {
            vt = M2C_FIELD(node, char **, 0x1C);
            M2C_FIELD(vt, void (**)(void *, s32), 0xC)(node + M2C_FIELD(vt, s16 *, 8), 2);
            pool = M2C_FIELD(node, char **, 0);
            if (M2C_FIELD(node, s32 *, 0x18) == M2C_FIELD(pool, s32 *, 0xC)) {
                next = M2C_FIELD(node, s32 *, 0x10);
                M2C_FIELD(pool, s32 *, 0x10) = next;
                if (next == -1) {
                    M2C_FIELD(pool, s32 *, 0xC) = 0;
                } else {
                    char *prev = M2C_FIELD(pool, char **, 0) + next;
                    s32 e = M2C_FIELD(prev, s32 *, 0x18);

                    M2C_FIELD(pool, s32 *, 0xC) = e;
                    M2C_FIELD(prev, s32 *, 0x14) = e;
                }
                if (M2C_FIELD(pool, s32 *, 0x10) == -1) {
                    M2C_FIELD(pool, s32 *, 0xB4) = 0;
                }
                if (M2C_FIELD(pool, u32 *, 0x1BC) & 0x20000000) {
                    sprintf(buf, lbl_8034146C, M2C_FIELD(node, s32 *, 4), M2C_FIELD(node, s32 *, 0x18), M2C_FIELD(node, s32 *, 0x18) - M2C_FIELD(node, s32 *, 4));
                    sprintf(buf, lbl_803414AC, M2C_FIELD(pool, s32 *, 0xC));
                }
            } else {
                M2C_FIELD(M2C_FIELD(pool, char **, 0) + M2C_FIELD(node, s32 *, 0x14), s32 *, 0x10) = M2C_FIELD(node, s32 *, 0x10);
                next2 = M2C_FIELD(node, s32 *, 0x10);
                if (next2 != -1) {
                    M2C_FIELD(M2C_FIELD(pool, char **, 0) + next2, s32 *, 0x14) = M2C_FIELD(node, s32 *, 0x14);
                } else {
                    M2C_FIELD(pool, s32 *, 0xB4) = M2C_FIELD(node, s32 *, 0x14);
                }
                next3 = M2C_FIELD(node, s32 *, 0x10);
                if (next3 != -1) {
                    start = M2C_FIELD(M2C_FIELD(pool, char **, 0) + next3, s32 *, 0x18);
                } else {
                    start = 0;
                }
                sz = M2C_FIELD(node, s32 *, 0x14) - start;
                if (M2C_FIELD(pool, u32 *, 0x1BC) & 0x20000000) {
                    sprintf(buf, lbl_803414C0, M2C_FIELD(node, s32 *, 4), M2C_FIELD(node, s32 *, 0x18), M2C_FIELD(node, s32 *, 0x18) - M2C_FIELD(node, s32 *, 4));
                    sprintf(buf, lbl_80341500, sz, start, M2C_FIELD(node, s32 *, 0x14));
                }
            }
        } else {
            vt = M2C_FIELD(node, char **, 0x1C);
            M2C_FIELD(vt, void (**)(void *, s32), 0xC)(node + M2C_FIELD(vt, s16 *, 8), 3);
        }
    }
    obj = M2C_FIELD(self, char **, 0x7DC);
    tail = self + 0x7DC;
    if (obj != NULL) {
        s32 v = M2C_FIELD(tail, s32 *, 0xC);

        if (v != 0 && v == M2C_FIELD(obj, s32 *, 0x18)) {
            s32 nv = (v & 0x7FFFFFFF) + 1;

            M2C_FIELD(obj, s32 *, 0x18) = nv;
            if (nv < 0) {
                M2C_FIELD(obj, s32 *, 0x18) = 0;
            }
        }
    }
    M2C_FIELD(tail, s32 *, 0xC) = 0;
    M2C_FIELD(self, char **, 0x1C) = lbl_80342350;
    if (flags & 1) {
        Mem__Delete(self);
    }
}
