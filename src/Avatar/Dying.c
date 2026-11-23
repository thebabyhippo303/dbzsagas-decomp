/* Avatar__Dying @ 0x8002FBB0 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__Dying @ 0x8002FBB0 (0x64). ProDG -O2. */
typedef int s32;

extern void *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, s32 value);
extern float lbl_803116F4 __attribute__((section(".data")));

void Avatar__Dying(void *script, void *context) {
    char *avatar = Script__PopInt(script, context);
    s32 dying = 0;

    if (!(*(float *)(avatar + 0x288) > lbl_803116F4) && *(s32 *)(avatar + 0x90) != 0)
        dying = 1;
    Script__PushInt(script, context, dying);
}
