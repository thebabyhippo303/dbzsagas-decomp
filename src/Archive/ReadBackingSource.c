/* Archive__ReadBackingSource @ 0x8017FBAC (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Archive__ReadBackingSource @ 0x8017FBAC (0x74). ProDG -O2. */
typedef int s32;

extern int FileStream__Read(void *self, s32 arg, void *buffer);
extern int fn_80180ADC(void *self, s32 arg, void *buffer);
extern int fn_80180FD4(void *buffer, s32 a, s32 b, s32 c, s32 d);

int Archive__ReadBackingSource(void *arg0, s32 arg1, char *arg2) {
    if ((*(s32 *)arg2 & 1) != 0) {
        fn_80180ADC(arg0, arg1, *(void **)(arg2 + 8));
        return fn_80180FD4(*(void **)(arg2 + 8), -1, 0, 0, 0);
    }
    return FileStream__Read(arg0, arg1, *(void **)(arg2 + 8)) == arg1;
}
