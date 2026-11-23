/* Preload__CacheBardockAssets @ 0x8012C774 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheBardockAssets @ 0x8012C774 (0x50). ProDG -O2. */
extern char lbl_80328434[];
extern char lbl_8032844C[];
extern char lbl_80328468[];
extern char lbl_80328470[];
extern void Preload__LoadDblAsset(char *path);
extern void Preload__RegisterBank(char *name);
extern void fn_8012E9E0(char *path);

int Preload__CacheBardockAssets(void) {
    Preload__LoadDblAsset(lbl_80328434);
    Preload__LoadDblAsset(lbl_8032844C);
    Preload__RegisterBank(lbl_80328468);
    fn_8012E9E0(lbl_80328470);
    return 1;
}
