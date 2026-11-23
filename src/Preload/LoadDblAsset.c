/* Preload__LoadDblAsset @ 0x8012E9A0 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__LoadDblAsset @ 0x8012E9A0 (0x40). ProDG -O2. */
extern int lbl_803D83BC;
extern void *dblLoad(const char *path, void *context, int flags);

void *Preload__LoadDblAsset(const char *path) {
    if (lbl_803D83BC) {
        return 0;
    }
    return dblLoad(path, 0, 0);
}
