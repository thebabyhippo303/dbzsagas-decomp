/* DebugDraw__Point @ 0x801867F0 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef int M2C_UNK;
typedef float f32;
extern void DebugDraw__ColorFromIndex(s32, M2C_UNK *);
extern void fn_80244FB0(s32, f32, M2C_UNK *);
void DebugDraw__Point(s32 arg0, s32 arg1, f32 farg0) {
    M2C_UNK sp8;
    DebugDraw__ColorFromIndex(arg1, &sp8);
    fn_80244FB0(arg0, farg0, &sp8);
}
