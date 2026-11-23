/* Simple__GetWeaponHitMessageInfo @ 0x8002A958 (size: 0xDC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__GetWeaponHitMessageInfo @ 0x8002A958 (0xDC). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);
extern void Script__PushFloat(void *script, void *context, float value);
extern void fn_802C809C(void *msg, void **outObj, void *a, void *b, float *pos,
                         float *dir, void *c, void *d);

void Simple__GetWeaponHitMessageInfo(void *script, void *context) {
    void *msg;
    float *pos;
    struct {
        float pos[3];
        float pad0;
        float dir[3];
        float pad1;
        void *mid;
        char gap[12];
        void *obj;
        void *a;
        void *b;
        void *tail;
    } out;

    msg = Script__PopInt(script, context);
    pos = out.pos;
    fn_802C809C(msg, &out.obj, &out.a, &out.b, pos, out.dir, &out.mid, &out.tail);
    Script__PushInt(script, context, (int)out.obj);
    Script__PushInt(script, context, *(int *)*(void **)out.obj);
    Script__PushFloat(script, context, out.pos[0]);
    Script__PushFloat(script, context, pos[1]);
    Script__PushFloat(script, context, pos[2]);
    Script__PushFloat(script, context, out.dir[0]);
    Script__PushFloat(script, context, out.dir[1]);
    Script__PushFloat(script, context, out.dir[2]);
}
