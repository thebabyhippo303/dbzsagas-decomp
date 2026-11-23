/* SoundChannel__Start @ 0x80196B78 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
void fn_802D291C(int, int);
void fn_802D4EC4(int, int);
typedef struct Inner { int pad[2]; int handle; } Inner;
typedef struct Chan { char pad[0x1C]; Inner *inner; } Chan;

int SoundChannel__Start(Chan *self, int loud) {
    int h = self->inner->handle;
    if (h != 0) {
        if (loud != 0) {
            fn_802D291C(h, 31);
        }
        fn_802D4EC4(self->inner->handle, 1);
    }
    return 1;
}
