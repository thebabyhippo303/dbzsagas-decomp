/* Stdio__ApplyToAllFiles @ 0x80167EE0 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Stdio__ApplyToAllFiles @ 0x80167EE0 (0x80). ProDG -O2. */
typedef struct StdioNode StdioNode;

typedef struct {
	char pad[12];
	short flag;
	char rest[82];
} StdioFile;

struct StdioNode {
	StdioNode *next;
	int count;
	StdioFile *files;
};

typedef struct {
	char pad[0x1D8];
	StdioNode node;
} StdioObj;

int Stdio__ApplyToAllFiles(StdioObj *self, int (*fn)(StdioFile *file, ...)) {
	int acc = 0;
	StdioNode *node = &self->node;

	if (node) {
		do {
			StdioFile *file = node->files;
			int count = node->count;

			while (--count >= 0) {
				if (file->flag) {
					acc |= fn(file);
				}
				file++;
			}
			node = node->next;
		} while (node);
	}
	return acc;
}
