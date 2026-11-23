/* DebugDraw__Sphere @ 0x80186844 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

void DebugDraw__ColorFromIndex(s32, void *);
void fn_80244FB4(s32, double, void *);

void DebugDraw__Sphere(s32 obj, s32 index, double radius) {
    s32 color[2];
    s32 *c = color;

    DebugDraw__ColorFromIndex(index, c);
    fn_80244FB4(obj, radius, c);
}
