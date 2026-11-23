/* TextureMgr__InitRenderTargetSlot @ 0x8024FA1C (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

u16 TexBind__Allocate(void);
s32 memset(void *, int, s32);
s32 TexBind__CreateFromDesc(u16, s32, s32 *, s32); /* extern */

u32 TextureMgr__InitRenderTargetSlot(void *arg0, u16 p1, u16 p2, u16 p3, u16 px, u16 py, u16 pz) {
    register s32 desc[18];
    u16 h;

    h = TexBind__Allocate();
    M2C_FIELD(arg0, s16 *, 0x12) = pz;
    M2C_FIELD(arg0, s16 *, 0xA) = pz;
    M2C_FIELD(arg0, u16 *, 0xE) = px;
    M2C_FIELD(arg0, s16 *, 0x10) = py;
    M2C_FIELD(arg0, s16 *, 6) = px;
    M2C_FIELD(arg0, s16 *, 8) = py;
    M2C_FIELD(arg0, u16 *, 0xC) = h;
    M2C_FIELD(arg0, u16 *, 4) = h;
    memset(desc, 0, 0x48U);
    ((s16 *) desc)[8] = px;
    ((s16 *) desc)[9] = py;
    desc[0] = 2;
    return TexBind__CreateFromDesc(M2C_FIELD(arg0, u16 *, 0xC), 0, desc, 1);
}
