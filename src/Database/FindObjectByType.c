/* Database__FindObjectByType @ 0x8020410C (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Database__FindObjectByType @ 0x8020410C (0x80). ProDG -O2. */
typedef struct TypeNode {
	struct TypeNode *next;
	int type;
	int pad;
	void *records;
} TypeNode;

typedef struct {
	char pad[0x40];
	short query_flags;
	short pad3;
	int query_a;
	int query_b;
	int query_c;
	int query_d;
	int query_e;
	int query_f;
} LoadedDb;

extern TypeNode *lbl_803ADB6C __attribute__((section(".data")));
extern LoadedDb lbl_803ADB5C __attribute__((section(".data")));
extern void *Database__FindMatchingRecord(void *records);

void *Database__FindObjectByType(int type, short flags, int a, int b, int c, int d, int e, int f) {
	TypeNode *node = lbl_803ADB6C;
	while (node != 0 && type != node->type)
		node = node->next;
	if (node == 0)
		return 0;
	lbl_803ADB5C.query_flags = flags;
	lbl_803ADB5C.query_a = a;
	lbl_803ADB5C.query_b = b;
	lbl_803ADB5C.query_c = c;
	lbl_803ADB5C.query_d = d;
	lbl_803ADB5C.query_e = e;
	lbl_803ADB5C.query_f = f;
	return Database__FindMatchingRecord(node->records);
}
