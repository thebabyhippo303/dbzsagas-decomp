/* Avatar__PlaceInWorldXYZ @ 0x80025F8C (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__PlaceInWorldXYZ @ 0x80025F8C (0xAC). ProDG -O2. */
extern int Script__PopInt(void *self, void *ctx);
extern float Script__PopFloat(void *self, void *ctx);
extern float lbl_803DE520;
extern void Avatar__SetPositionImpl(int avatar, float *pos, float facing);

void Avatar__PlaceInWorldXYZ(void *self, void *ctx) {
	int avatar;
	float x;
	float y;
	float z;
	float facing;
	float pos[3];

	float *p;

	avatar = Script__PopInt(self, ctx);
	x = Script__PopFloat(self, ctx);
	y = Script__PopFloat(self, ctx);
	z = Script__PopFloat(self, ctx);
	facing = Script__PopFloat(self, ctx);
	p = pos;
	p[0] = x;
	p[1] = y;
	p[2] = z;
	Avatar__SetPositionImpl(avatar, p, facing * lbl_803DE520);
}
