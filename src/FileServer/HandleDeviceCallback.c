/* FileServer__HandleDeviceCallback @ 0x8015AB88 (size: 0xF0, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef int s32;
typedef unsigned int u32;

extern s32 lbl_8036F8A0;
extern s32 lbl_8036FB50;
extern void FileServer__DispatchEvent(s32);

typedef struct {
    char pad[0x69C];
    s32 (*fn)(void);
    char pad2[0x6BC - 0x6A0];
    s32 flag;
    u32 *ptr;
    s32 extracted;
    char pad3[4];
    s32 mode;
} FileServerGlobals;

extern FileServerGlobals lbl_80395D80;

void FileServer__HandleDeviceCallback(void *unused, void *device) {
    s32 mode;
    u32 *code;
    u32 word;
    (void)unused;

    if (lbl_8036F8A0 != 0) {
        return;
    }
    if (lbl_8036FB50 != 0) {
        FileServer__DispatchEvent(lbl_8036FB50);
        return;
    }
    mode = lbl_80395D80.mode;
    if (mode == 2 || mode == 3 || lbl_80395D80.fn() != 0) {
        *(s32 *)((char *)device + 0x19C) |= 0x400;
        lbl_80395D80.flag = 1;
        code = *(u32 **)((char *)device + 0x198);
        if (code >= (u32 *)0x8016CCE8u && code <= (u32 *)0x8016CCF4u) {
            code = (u32 *)0x8016CCE8u;
            *(u32 **)((char *)device + 0x198) = code;
        }
        word = *code;
        if ((s32)(word & 0xFC1FFFFFu) == 0x7C0000A6) {
            lbl_80395D80.extracted = (s32)((word >> 18) & 0xF8);
            lbl_80395D80.ptr = code;
        }
    }
}
