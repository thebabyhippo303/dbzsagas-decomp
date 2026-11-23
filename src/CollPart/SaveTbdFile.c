/* CollPart__SaveTbdFile @ 0x80281380 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0

void * memcpy(void *, const void *, u32);
char * strcat(char *, char *);
void TableFile__OpenForWrite(void *, char *);
extern char lbl_8034F280[] __attribute__((section(".data")));
extern char lbl_8034F288[] __attribute__((section(".data")));

s32 CollPart__SaveTbdFile(void *arg0, char *name) {
    s8 buf[104];
    s8 *p1 = (s8 *) buf;
    s8 *p;
    s32 i;
    s8 c;

    memcpy(buf, lbl_8034F280, 8);
    strcat((char *) p1, name);
    i = 0;
    p = p1;
    c = p1[i];
    if (c != 0) {
        if (c == '.') {
            p[i] = 0;
        } else {
            do {
                i++;
                c = p[i];
                if (c == 0) {
                    break;
                }
            } while (c != '.');
            p[i] = 0;
        }
    }
    strcat((char *) buf, lbl_8034F288);
    TableFile__OpenForWrite(*(void **) arg0, (char *) buf);
    return 1;
}
