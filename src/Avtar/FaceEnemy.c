/* Avtar__FaceEnemy @ 0x8003C87C (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avtar__FaceEnemy @ 0x8003C87C (0x38). ProDG -O2. */
extern int *fn_8023A310(void);
extern void fn_80060C80(void *out, int value);

void Avtar__FaceEnemy(void) {
    char buf[32];
    int *obj = fn_8023A310();
    if (obj[0x7E4 / 4] == 0) {
        fn_80060C80(buf, *(int *)((char *)obj + 0xB8C));
    }
}
