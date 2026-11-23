/* Sfx__PlayAtPos @ 0x802B09C0 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Sfx__PlayAtPos @ 0x802B09C0 (0xCC). ProDG -O2. */
typedef struct {
	char pad[0x20];
	short adjust;
	char pad2[2];
	void (*playAtPos)(void *self, char *name, float *pos);
} SfxPlayVtable;

typedef struct {
	char pad[0xC];
	SfxPlayVtable *vtable;
} SfxPlayInner;

typedef struct {
	char pad[0xAC];
	SfxPlayInner *inner;
} SfxPlayState;

typedef struct {
	char pad[0xC8];
	SfxPlayState *state;
} SfxPlayScript;

extern char *Script__PopString(void *script, void *context, int *ok);
extern float Script__PopFloat(void *script, void *context);
extern void fn_80184430(char *text);

void Sfx__PlayAtPos(SfxPlayScript *script, void *context) {
	int ok;
	SfxPlayState *state = script->state;
	char *name = Script__PopString(script, context, &ok);
	float x = Script__PopFloat(script, context);
	float y = Script__PopFloat(script, context);
	float z = Script__PopFloat(script, context);
	float pos[3];
	float *p = pos;

	p[0] = x;
	p[1] = y;
	p[2] = z;
	if (name != (char *)-1) {
		SfxPlayInner *inner = state->inner;
		SfxPlayVtable *vtable = inner->vtable;
		vtable->playAtPos((char *)inner + vtable->adjust, name, p);
	}
	if (ok != 0 && name != 0) {
		fn_80184430(name);
	}
}
