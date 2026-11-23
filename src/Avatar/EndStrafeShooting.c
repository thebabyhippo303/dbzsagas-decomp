/* Avatar__EndStrafeShooting @ 0x8003A3FC (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef int s32;

extern void *Script__PopInt(void *script, void *context);
extern f32 lbl_80311A10 __attribute__((section(".data")));

void Avatar__EndStrafeShooting(void *arg0, void *arg1) {
    char *obj = (char *)Script__PopInt(arg0, arg1);
    if (*(s32 *)(obj + 0x71C) == 5) {
        char *sub = *(char **)(obj + 0x7FC);
        f32 v = lbl_80311A10;
        *(s32 *)(sub + 0x580) = 0;
        *(f32 *)(sub + 0x568) = v;
    }
}
