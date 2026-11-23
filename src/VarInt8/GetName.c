/* VarInt8__GetName @ 0x8018F088 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

extern char lbl_8033E38C[] __attribute__((section(".data")));
extern char lbl_8033E394[] __attribute__((section(".data")));

char *VarInt8__GetName(void *self) {
    char *name;
    if (((s32 *)self)[0x40 / 4] != 0) {
        name = lbl_8033E38C;
    } else {
        name = lbl_8033E394;
    }
    return name;
}
