/* TextureMgr__CaptureScreenTexture @ 0x8024735C (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

s32 TexBind__GetWidth(s32);
s32 TexBind__GetHeight(u16);
void *TexBind__GetImageData(s32);
void GXSetTexCopySrc(s32, s32, s32, s32);
void GXSetTexCopyDst(s32, s32, s32, s32);
void GXCopyTex(void *, s32);
void GXPixModeSync(void);

typedef struct {
    char pad[6];
    u16 id;
    char pad2[8];
    u32 x10;
} CapTexDB;
extern CapTexDB lbl_803B1C6C __attribute__((section(".data")));

s16 TextureMgr__CaptureScreenTexture(void) {
    CapTexDB *db;
    u16 id;
    u16 w;
    u16 h;
    void *img;
    s32 fmt;

    db = &lbl_803B1C6C;
    id = db->id;
    w = TexBind__GetWidth(id);
    h = TexBind__GetHeight(id);
    img = TexBind__GetImageData(id);
    fmt = 4;
    if (img == NULL) {
        return 0;
    }
    if ((db->x10 & 0x3F) == 18) {
        fmt = 3;
    }
    GXSetTexCopySrc(0, 0, w, h);
    GXSetTexCopyDst(w, h, fmt, 0);
    GXCopyTex(img, 0);
    GXPixModeSync();
    return (s16)id;
}
