/* RenderState__SetBlendMode @ 0x8024AA8C (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

extern void GXSetBlendMode(s32 a, s32 b, s32 c, s32 d);
extern void RenderState__Set(s32 x, s32 v);

void RenderState__SetBlendMode(s32 v) {
    s32 a;
    s32 b = 0;
    s32 c = 0;

    switch (v) {
    case 6:
        a = 0;
        break;
    case 2:
        a = 1;
        b = 2;
        break;
    case 8:
        a = 1;
        b = 4;
        c = 1;
        break;
    case 10:
        a = 1;
        b = 3;
        break;
    case 7:
    case 9:
        break;
    case 1:
    default:
        a = 1;
        b = 4;
        c = 5;
        break;
    }
    GXSetBlendMode(a, b, c, 5);
    RenderState__Set(3, v);
}
