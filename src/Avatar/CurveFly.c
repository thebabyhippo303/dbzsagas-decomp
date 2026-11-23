/* Avatar__CurveFly @ 0x8003E1DC (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__CurveFly @ 0x8003E1DC (0x94). ProDG -O2. */
typedef struct {
    char pad[0x7F4];
    void *flight;
} CurveAvatar;

extern CurveAvatar *Script__PopInt(void *script, void *context);
extern char *Script__PopString(void *script, void *context, int *ok);
extern float Script__PopFloat(void *script, void *context);
extern void Avatar__StartFlightOnNamedSpline(void *flight, const char *name,
    int mode, float speed, int flags);
extern void fn_80184430(char *text);

void Avatar__CurveFly(void *script, void *context) {
    int ok;
    CurveAvatar *avatar;
    char *name;
    float speed;

    avatar = Script__PopInt(script, context);
    name = Script__PopString(script, context, &ok);
    speed = Script__PopFloat(script, context);
    if (avatar != 0 && avatar->flight != 0)
        Avatar__StartFlightOnNamedSpline(avatar->flight, name, 0, speed, 0);
    if (ok != 0 && name != 0)
        fn_80184430(name);
}
