/* Simple__SetOBBYSize @ 0x802AE9D0 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched OBB size getters and setters. ProDG -O2.
   Simple__GetOBBXSize @ 0x802AE908 (0x2C)  float @ 0x39C, doubled
   Simple__GetOBBYSize @ 0x802AE934 (0x2C)  float @ 0x3A0, doubled
   Simple__GetOBBZSize @ 0x802AE960 (0x2C)  float @ 0x3A4, doubled
   Simple__SetOBBXSize @ 0x802AE99C (0x34)
   Simple__SetOBBYSize @ 0x802AE9D0 (0x34)
*/
typedef struct {
    char pad[0x39c];
    float xsize;
    float ysize;
    float zsize;
} ObbInner;

typedef struct {
    char pad[0xc8];
    ObbInner *inner;
} ObbObj;

void fn_8023A264(void *a, void *b, float c);
void fn_8023A378(void);
void fn_802C57FC(void *p);
void fn_802C5910(void *p);

void Simple__GetOBBXSize(ObbObj *self, void *ctx) {
    float x = self->inner->xsize;
    fn_8023A264(self, ctx, x + x);
}

void Simple__GetOBBYSize(ObbObj *self, void *ctx) {
    float y = self->inner->ysize;
    fn_8023A264(self, ctx, y + y);
}

void Simple__GetOBBZSize(ObbObj *self, void *ctx) {
    float z = self->inner->zsize;
    fn_8023A264(self, ctx, z + z);
}

void Simple__SetOBBXSize(ObbObj *self) {
    fn_8023A378();
    fn_802C57FC(self->inner);
}

void Simple__SetOBBYSize(ObbObj *self) {
    fn_8023A378();
    fn_802C5910(self->inner);
}
