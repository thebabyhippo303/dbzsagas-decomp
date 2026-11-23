/* TexBind__SetRenderTarget @ 0x8024FAAC (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed short s16; typedef unsigned short u16; typedef signed int s32;
extern u16 lbl_803D7620;
s32 TexBind__GetWidth(u16 id);
s32 TexBind__GetHeight(u16 id);
void Gfx__SetViewport(s32, s32, s32, s32);
void TexBind__SetRenderTarget(u16 target) {
    s32 w;
    s32 h;
    lbl_803D7620 = target;
    w = TexBind__GetWidth(target);
    h = TexBind__GetHeight(target);
    Gfx__SetViewport(0, 0, w, h);
}
