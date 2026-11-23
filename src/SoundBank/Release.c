/* SoundBank__Release @ 0x80193160 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__DeleteArray(void *);
void SoundBank__Release(void *arg0) {
    s32 i;
    s32 off;
    s32 zero;
    void *obj;
    void *vt;
    void *list;
    void *tail;

    list = M2C_FIELD(arg0, void **, 8);
    if (list != NULL) {
        i = 0;
        if (i < M2C_FIELD(list, s32 *, 8)) {
            zero = 0;
            off = 0;
            do {
                obj = M2C_FIELD((off + M2C_FIELD(list, s32 *, 0x14)), void **, 0xC);
                if (obj != NULL) {
                    vt = M2C_FIELD(obj, void **, 0x50);
                    M2C_FIELD(vt, M2C_UNK (**)(void *, M2C_UNK), 0xC)((char *)obj + M2C_FIELD(vt, s16 *, 8), 3);
                    M2C_FIELD((off + M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x14)), s32 *, 0xC) = zero;
                }
                list = M2C_FIELD(arg0, void **, 8);
                i += 1;
                off += 0x10;
            } while (i < M2C_FIELD(list, s32 *, 8));
        }
        tail = M2C_FIELD(arg0, void **, 8);
        if (tail != NULL) {
            Mem__DeleteArray(tail);
        }
        M2C_FIELD(arg0, void **, 8) = NULL;
    }
}
