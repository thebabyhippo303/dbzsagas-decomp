/* TerrainQuadtree__Load @ 0x801CB19C (size: 0xFC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void *Database__GetTypedObject(s32, char *, void *, s32 *);
void *Mem__New(u32);
void *TerrainQuadtree__Construct(void *, s32, void *, void *);
extern char lbl_803417BC[];

s32 TerrainQuadtree__Load(void *file, s32 arg) {
    s32 size;
    u32 in0;
    u32 out0;
    u32 in;
    u32 out;
    u32 *data;
    u32 *body;
    u8 *pi0;
    u8 *po0;
    u8 *pi;
    u8 *po;
    u32 *p;
    s32 n;

    data = Database__GetTypedObject(641, lbl_803417BC, file, &size);
    if (data == NULL) {
        return 0;
    }
    if (size == 0) {
        return 0;
    } else {
        in0 = data[0];
        pi0 = (u8 *)&in0;
        po0 = (u8 *)&out0;
        body = data + 40;
        M2C_FIELD(&out0, u8 *, 0) = pi0[3];
        po0[1] = pi0[2];
        po0[2] = pi0[1];
        po0[3] = ((u8 *)&in0)[0];
        data[0] = out0;
        pi = (u8 *)&in;
        n = 32;
        po = (u8 *)&out;
        p = data + 1;
        do {
            in = *p;
            M2C_FIELD(&out, u8 *, 0) = pi[3];
            po[1] = pi[2];
            po[2] = pi[1];
            po[3] = ((u8 *)&in)[0];
            *p = out;
            p++;
        } while (--n != 0);
        return (s32)TerrainQuadtree__Construct(Mem__New(272), arg, data, body);
    }
}
