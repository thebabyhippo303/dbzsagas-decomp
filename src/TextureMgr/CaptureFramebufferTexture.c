/* TextureMgr__CaptureFramebufferTexture @ 0x80247430 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;

s32 TexBind__GetWidth(s32);
s32 TexBind__GetHeight(s32);
s32 TexBind__GetImageData(s32);
void GXSetTexCopySrc(s32, s32, s32, s32);
void GXSetTexCopyDst(s32, s32, s32, s32);
void GXCopyTex(s32, s32);
void GXPixModeSync(void);

typedef struct { char pad[8]; u16 id; u16 padX; s32 flag; } CapDB;
extern CapDB lbl_803B1C6C __attribute__((section(".data")));

s16 TextureMgr__CaptureFramebufferTexture(void) {
    CapDB *db = &lbl_803B1C6C;
    u16 id = db->id;
    u16 w;
    u16 h;
    s32 p;
    if (id == 0) {
        return 0;
    }
    w = (u16)TexBind__GetWidth(id);
    h = (u16)TexBind__GetHeight(id);
    p = TexBind__GetImageData(id);
    if (p == 0) {
        db->flag = p;
        return 0;
    }
    GXSetTexCopySrc(0, 0, w, h);
    GXSetTexCopyDst(w, h, 4, 0);
    GXCopyTex(TexBind__GetImageData(id), 0);
    GXPixModeSync();
    db->flag = 1;
    return (s16)id;
}