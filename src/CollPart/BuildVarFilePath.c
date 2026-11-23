/* CollPart__BuildVarFilePath @ 0x8029E970 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8;
#define NULL 0
void Mem__Delete(void *block);
unsigned int Mem__NewArray(unsigned int size);
int strlen(const char *s);
void sprintf(char *dst, const char *fmt, ...);
extern char lbl_80350380[];
extern char *lbl_803DCECC;
struct Surf { char pad[0x18]; char *path; };

void CollPart__BuildVarFilePath(struct Surf *self, s8 *name) {
    s8 *cursor;
    s8 ch;
    void *old;
    char *buf;

    ch = *name;
    cursor = name;
    if (ch != 0) {
        if (ch == '.') {
            *name = 0;
        } else {
            do {
                ch = *++cursor;
                if (ch == 0) {
                    break;
                }
            } while (ch != '.');
            if (ch != 0) {
                *cursor = 0;
            }
        }
    }

    old = *(void **)((char *)self + 0x18);
    if (old != NULL) {
        Mem__Delete(old);
    }

    buf = (char *)Mem__NewArray(strlen(name) + strlen(lbl_803DCECC) + 5);
    self->path = buf;
    sprintf(buf, lbl_80350380, lbl_803DCECC, name);
}
