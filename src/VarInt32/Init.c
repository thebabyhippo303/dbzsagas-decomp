/* VarInt32__Init @ 0x8018CE64 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarInt32__Init @ 0x8018CE64 (0x54). ProDG -O2. */
typedef struct {
	char pad0[4];
	void *vtable;
	char pad8[0x48 - 8];
	int value;
} VarInt32;

extern char lbl_8033F0C8[];
extern void *VarInteger__Init(void *self, int a, int b, int d, int e, int f, int g);

void *VarInt32__Init(VarInt32 *self, int a, int b, int value,
	int d, int e, int f, int g) {
	VarInteger__Init(self, a, b, d, e, f, g);
	self->value = value;
	self->vtable = lbl_8033F0C8;
	return self;
}
