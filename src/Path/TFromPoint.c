/* Path__TFromPoint @ 0x8002ECB8 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct PathVtable {
    char pad[0x20];
    short thisOff;
    char pad2[2];
    float (*tFromPoint)(void *self, Vec3 point);
} PathVtable;

typedef struct PathObj {
    char pad[0x14];
    PathVtable *vt;
} PathObj;

extern void *Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);
extern void Script__PushFloat(void *script, void *context, float value);
extern float fn_801FC8A0(void *path);

void Path__TFromPoint(void *script, void *context) {
    PathObj *path = Script__PopInt(script, context);
    Vec3 point;
    Vec3 *pp;
    PathVtable *vt;
    float t;
    void *self;

    pp = &point;
    pp->x = Script__PopFloat(script, context);
    pp->y = Script__PopFloat(script, context);
    pp->z = Script__PopFloat(script, context);
    t = path->vt->tFromPoint((char *)path + path->vt->thisOff, point);
    Script__PushFloat(script, context, t / fn_801FC8A0(path));
}
