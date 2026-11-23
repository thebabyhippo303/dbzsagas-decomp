/* Avatar__PlaceInWorld @ 0x80025F28 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__PlaceInWorld @ 0x80025F28 (0x64). ProDG -O2. */
extern int Script__PopInt(void *self, void *ctx);
extern float Script__PopFloat(void *self, void *ctx);
extern float lbl_803DE520;
extern void Avatar__SetPositionImpl(int x, int y, float z);

void Avatar__PlaceInWorld(void *self, void *ctx) {
    int x;
    int y;
    float z;

    x = Script__PopInt(self, ctx);
    y = Script__PopInt(self, ctx);
    z = Script__PopFloat(self, ctx);
    Avatar__SetPositionImpl(x, y, z * lbl_803DE520);
}
