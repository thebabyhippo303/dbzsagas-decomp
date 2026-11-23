/* AvatarConfig__RegisterFloatSetting @ 0x8009C5E4 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AvatarConfig__RegisterFloatSetting @ 0x8009C5E4 (0x5C). ProDG -O2. */
extern int lbl_803DCC10;
void fn_8018A94C(void *registry, int id, int x, float *out, int a, int b, int mask, int c);

void AvatarConfig__RegisterFloatSetting(int *cfg, float *out, float value, int x, int flag) {
    int mask;
    int registry;

    *out = value;
    if (cfg[0] != 0) {
        registry = lbl_803DCC10;
        mask = -1;
        if (flag != 0) {
            mask = 0x10010;
        }
        fn_8018A94C((void *) registry, cfg[0], x, out, 0, 0, mask, 0);
    }
}
