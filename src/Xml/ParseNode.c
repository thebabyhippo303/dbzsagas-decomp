/* Xml__ParseNode @ 0x803063EC (size: 0x108, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

s32 Xml__SkipProcessingInstruction(u8 *, u32);
s32 Xml__GetTextLength(u8 *, u32);
s32 Xml__InternSubstring(u8 *, u32);
void Xml__ParseNodeList(void *, u8 **, u32);
extern u8 lbl_8033C9D9[] __attribute__((section(".data")));
#define F(e, t, o) (*(t)((char *)(e) + (o)))

s32 Xml__ParseNode(void *arg0, u8 *arg1, u32 arg2) {
    u8 *sp8;
    u8 *p;
    u8 c;
    s32 len;

    sp8 = arg1;
    p = arg1;
    if (arg2 != 0) {
        do {
            c = *p;
            if (((c)[lbl_8033C9D9] & 8) != 0) {
                sp8 = p + 1;
            } else if (c == 0x3C) {
                if (p[1] == 0x2F) {
                    return p - arg1;
                }
                if (p[1] == 0x3F) {
                    sp8 = &sp8[Xml__SkipProcessingInstruction(p, arg2 - (p - arg1))];
                } else {
                    Xml__ParseNodeList(arg0, &sp8, arg2);
                    F(arg0, u8 *, 4) = F(arg0, u8 *, 4) | 1;
                }
            } else {
                len = Xml__GetTextLength(p, arg2);
                F(arg0, s32 *, 8) = Xml__InternSubstring(sp8, len);
                F(arg0, u8 *, 4) = F(arg0, u8 *, 4) | 2;
                sp8 = &sp8[len];
            }
            p = sp8;
            if ((u32)(p - arg1) >= arg2) {
                break;
            }
        } while (1);
    }
    return 0;
}
