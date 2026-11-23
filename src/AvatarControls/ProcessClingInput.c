/* AvatarControls__ProcessClingInput @ 0x800A3390 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AvatarControls__ProcessClingInput @ 0x800A3390 (0xAC). ProDG -O2. */
typedef short s16;
typedef int s32;

extern char lbl_803201D0[] __attribute__((section(".data")));

void Avatar__SetAnimScriptVarIntImpl(void *avatar, char *name, int value, int flags);
int Avatar__StartAnimationImpl(void *avatar, unsigned short anim, int a, int b, int c, int d);
void fn_800A5750(void *self);

void AvatarControls__ProcessClingInput(char *self) {
    char *avatar;
    char *inner;
    s16 input;
    s32 masked;

    avatar = *(char **)self;
    inner = *(char **)(avatar + 0x84);
    input = *(s16 *)(*(char **)(inner + 0xF0) + 0xA);
    if (input != 0x900) {
        masked = input & 0xFF00;
        if (masked == 0x600 || masked == 0xE00) {
            Avatar__SetAnimScriptVarIntImpl(avatar, lbl_803201D0, 4, 0);
        } else if (masked != 0x300) {
            if (*(s16 *)(*(char **)(inner + 0xF4) + 0xA) == 0x100) {
                Avatar__StartAnimationImpl(avatar, 0x500U, 1, 0, 1, 1);
                fn_800A5750(self);
            }
        }
        *(s32 *)(self + 0x194) = 1;
    }
}
