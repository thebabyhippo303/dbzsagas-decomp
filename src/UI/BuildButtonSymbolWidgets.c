/* UI__BuildButtonSymbolWidgets @ 0x80113030 (size: 0x200, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *Mem__New(u32);
void *Sphere__Construct(void *);
int strlen(const char *);
extern f32 lbl_80326684 __attribute__((section(".data")));
extern f32 lbl_80326688 __attribute__((section(".data")));
extern M2C_UNK lbl_80333A00 __attribute__((section(".data")));
extern void *lbl_803DC3B4 __attribute__((section(".sdata")));

typedef s8 *(*GetStrFn)(void *);
typedef void (*CfgFn)(void *, s32, s32, s32, s32, s32);
typedef void (*FCfgFn)(void *, f32, f32);

void *UI__BuildButtonSymbolWidgets(void *arg0, void *arg1, s32 arg2) {
    void *r24;
    void *r25;
    void *p;
    char *idp;
    void *vt;
    void *w;
    void *wvt;
    s8 *str;
    s32 ctr;
    s32 count;
    s32 i;
    s32 off;
    s32 k;
    s32 cfgarg;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_80333A00;
    r24 = arg0 + 0x74;
    r25 = arg0 + 0x14;
    vt = M2C_FIELD(arg1, void **, 0x19C);
    str = ((GetStrFn)M2C_FIELD(vt, void **, 0x3AC))(arg1 + M2C_FIELD(vt, s16 *, 0x3A8));
    p = r24;
    for (ctr = 0x18; ctr != 0; ctr--) {
        M2C_FIELD(p, s32 *, -0x60) = -1;
        M2C_FIELD(p, s32 *, 0) = 0;
        p += 4;
    }
    count = 0;
    i = 0;
    idp = r25;
    while (i < strlen(str)) {
        s8 c = str[i];
        if (c == '+') {
            k = 10;
        } else if (c > '+') {
            if (c == '@') {
                k = 14;
            } else if (c > '@') {
                if (c == '^') {
                    k = 11;
                } else {
                    k = c;
                    off = count * 4;
                    goto store;
                }
            } else {
                if (c == '=') {
                    k = 15;
                } else {
                    k = c;
                    off = count * 4;
                    goto store;
                }
            }
        } else {
            if (c == '&') {
                k = 7;
            } else if (c > '&') {
                if (c == '*') {
                    k = 6;
                } else {
                    k = c;
                    off = count * 4;
                    goto store;
                }
            } else {
                if (c == '$') {
                    k = 8;
                } else {
                    k = c;
                    off = count * 4;
                    goto store;
                }
            }
        }
        off = count * 4;
store:
        *(s32 *)idp = k;
        if (*(s32 *)idp != -1) {
            str[i] = 0x2A;
            w = Sphere__Construct(Mem__New(0x1A0));
            cfgarg = M2C_FIELD(lbl_803DC3B4, s32 *, 4);
            *(void **)((char *)r24 + off) = w;
            wvt = M2C_FIELD(w, void **, 0x19C);
            ((CfgFn)M2C_FIELD(wvt, void **, 0x14))((char *)w + M2C_FIELD(wvt, s16 *, 0x10), cfgarg, *(s32 *)((char *)r25 + off), 0, 1, 1);
            if (*(s32 *)((char *)r25 + off) == 0xF) {
                void *w2 = *(void **)((char *)r24 + off);
                void *wvt2 = M2C_FIELD(w2, void **, 0x19C);
                ((FCfgFn)M2C_FIELD(wvt2, void **, 0xF4))((char *)w2 + M2C_FIELD(wvt2, s16 *, 0xF0), lbl_80326684, lbl_80326688);
            }
            count += 1;
            idp += 4;
            if (count > 0x18) {
                goto end;
            }
        }
        i++;
    }
end:
    M2C_FIELD(arg0, void **, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
    return arg0;
}
