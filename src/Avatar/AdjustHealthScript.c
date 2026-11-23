/* Avatar__AdjustHealthScript @ 0x800928DC (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__AdjustHealthFromScript @ 0x800928DC (0x38). */
extern float Script__PopFloat(void *script, void *context);
extern void Avatar__AdjustHealth(void *avatar, float amount);

typedef struct {
    char pad[0x84];
    void *script;
} AvatarHealthScript;

void Avatar__AdjustHealthFromScript(AvatarHealthScript *avatar, void *context) {
    Avatar__AdjustHealth(avatar, Script__PopFloat(avatar->script, context));
}
