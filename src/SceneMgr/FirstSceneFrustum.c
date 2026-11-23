/* SceneMgr__FirstSceneFrustum @ 0x8022AE54 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef struct { char pad[16]; u32 f16; char pad2[36]; u32 f56; } Glob803AD7B0;
extern Glob803AD7B0 lbl_803AD7B0;
s32 SceneMgr__NextSceneFrustum(void);
s32 SceneMgr__FirstSceneFrustum(void) {
    lbl_803AD7B0.f56 = lbl_803AD7B0.f16;
    return SceneMgr__NextSceneFrustum();
}
