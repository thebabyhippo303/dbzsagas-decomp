/* Floater__MoveAwayFromPosXYZ @ 0x802B02D8 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

f32 Script__PopFloat(void *script, void *context);

void Floater__MoveAwayFromPosXYZ(void *arg0, void *arg1) {
    f32 vec[3];
    f32 *vp;
    f32 dist;
    void *obj;
    void *vtbl;

    dist = Script__PopFloat(arg0, arg1);
    vp = vec;
    vp[2] = Script__PopFloat(arg0, arg1);
    vp[1] = Script__PopFloat(arg0, arg1);
    vec[0] = Script__PopFloat(arg0, arg1);
    obj = M2C_FIELD(arg0, void **, 0xC8);
    vtbl = M2C_FIELD(obj, void **, 0x34);
    M2C_FIELD(vtbl, void (**)(void *, f32 *, f32), 0x1DC)((char *)obj + M2C_FIELD(vtbl, s16 *, 0x1D8), vec, dist);
}
