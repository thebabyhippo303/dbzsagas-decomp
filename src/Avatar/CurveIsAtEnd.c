/* Avatar__CurveIsAtEnd @ 0x8003E2A8 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct CurveAvatar {
    char pad[0x7F4];
    void *curve;
} CurveAvatar;

extern CurveAvatar *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);
extern int AvatarCurve__IsAtEnd(void *curve);

void Avatar__CurveIsAtEnd(void *script, void *context) {
    int atEnd;
    CurveAvatar *avatar;

    atEnd = 1;
    avatar = Script__PopInt(script, context);
    if (avatar != 0 && avatar->curve != 0)
        atEnd = AvatarCurve__IsAtEnd(avatar->curve);
    {
        int pushed;
        pushed = 0;
        if (atEnd != 0)
            pushed = 1;
        Script__PushInt(script, context, pushed);
    }
}
