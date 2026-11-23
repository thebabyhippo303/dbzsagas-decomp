/* CmdCon__ExecuteScriptText @ 0x80189F58 (size: 0x1B0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__DeleteArray(void *);
s32 String__SkipWhitespace(char *);
void String__TrimTrailingWhitespace(char *);
s32 CmdCon__ExecuteLine(void *, s32);
char * Mem__NewArray(s32);
int strlen(const char *);
s32 CmdCon__ExecuteScriptText(void *arg0, s8 *arg1) {
    s32 len;
    s8 *p;
    s8 *out;
    s8 *buf;
    s8 c;

    p = arg1;
    len = strlen(p) + 1;
    if (len > (s32) M2C_FIELD(arg0, s32 *, 0x18)) {
        buf = M2C_FIELD(arg0, s8 **, 0x14);
        if (buf != NULL) {
            Mem__DeleteArray(buf);
        }
        M2C_FIELD(arg0, s8 **, 0x14) = NULL;
    }
    if (M2C_FIELD(arg0, s8 **, 0x14) == NULL) {
        M2C_FIELD(arg0, s32 *, 0x18) = len;
        buf = Mem__NewArray(len);
        M2C_FIELD(arg0, s8 **, 0x14) = buf;
        if (buf == NULL) {
            return 0;
        }
    }
    do {
        p = String__SkipWhitespace(p);
        out = M2C_FIELD(arg0, s8 **, 0x14);
        c = *p;
        while (c != 0 && c != 10 && c != 59) {
            c = *p;
            if (c == 13) {
                goto cr;
            }
            if (c == 92) {
                goto bs;
            }
            if (c == 9) {
                *out = 32;
            } else if (c == 47) {
                *out = 92;
            } else {
                *out = c;
            }
            out++;
            if (*(u8 *)p == 92) {
                goto bs;
            }
            p++;
            goto next;
bs:
            p = String__SkipWhitespace(p + 1);
            c = *p;
            goto skip;
cr:
            p++;
            c = *p;
skip:
            while (c == 13 || c == 10) {
                p++;
                c = *p;
            }
next:
            c = *p;
        }
        *out = 0;
        buf = M2C_FIELD(arg0, s8 **, 0x14);
        String__TrimTrailingWhitespace(out);
        if (*buf != 0) {
            CmdCon__ExecuteLine(arg0, (s32) buf);
        }
        c = *p;
        if (c == 10 || c == 59) {
            p++;
        }
    } while (*p != 0);
    return 1;
}
