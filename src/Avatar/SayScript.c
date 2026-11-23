/* Avatar__SayScript @ 0x800927A8 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SayFromScript @ 0x800927A8 (0x68). ProDG -O2. */
extern char *Script__PopString(void *script, void *context, int *flag);
extern float Script__PopFloat(void *script, void *context);
extern void fn_80250D80(void *speech, char *text, int channel, float duration);

typedef struct {
    char pad[132];
    void *script;
    char pad2[6680 - 136];
    char speech[1];
} AvatarSay;

void Avatar__SayFromScript(void *avatar, void *context) {
    AvatarSay *self;
    int flag;
    char *text;
    float duration;

    self = avatar;
    flag = 1;
    text = Script__PopString(self->script, context, &flag);
    duration = Script__PopFloat(self->script, context);
    fn_80250D80(&self->speech, text, 1, duration);
    flag = 0;
}
