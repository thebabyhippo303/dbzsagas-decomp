/* Instance__FindByName @ 0x8025288C (size: 0x118, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
#define F(e,t,o) (*(t)((char *)(e) + (o)))
void *Database__GetTypedObject(s32, void *, void *, void *);
void *Instance__FindInArrayByName(void *, void *, char *);
int String__CompareIgnoreCase(const char *, const char *);
extern void *lbl_803DCCB8;

void *Instance__FindByName(void *self, char *name, void *type, s32 flag) {
    void *db;
    void *r;
    void *n;
    void *g;
    db = Database__GetTypedObject(96, type, F(self, void **, 0x10), 0);
    if (db != 0) {
        r = Instance__FindInArrayByName(self, db, name);
        if (r != 0) {
            return r;
        }
    }
    n = F(self, void **, 0x114);
    while (n != 0) {
        db = Database__GetTypedObject(96, type, F(n, void **, 0xC), 0);
        if (db != 0) {
            r = Instance__FindInArrayByName(self, db, name);
            if (r != 0) {
                return r;
            }
        }
        n = F(n, void **, 4);
    }
    if (flag != 0) {
        g = lbl_803DCCB8;
        n = F(g, void **, 0x14);
        while (n != 0) {
            if (String__CompareIgnoreCase(name, F(F(F(n, void **, 0), void **, 0x84), char **, 0x94) + 0x20) == 0) {
                return F(F(n, void **, 0), void **, 0x84);
            }
            g = lbl_803DCCB8;
            if (n != 0) {
                n = F(n, void **, 0x14);
            } else {
                n = F(g, void **, 0x14);
            }
        }
    }
    return 0;
}
