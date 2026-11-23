/* File__Flush @ 0x80187A0C (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: File__Flush @ 0x80187A0C (0x54). ProDG -O2. */
typedef struct {
	char pad[0x14];
	int descriptor;
	void *buffer;
	int pending_size;
} File;

extern void fn_801806E4(int descriptor, void *buffer, int size, int mode);

void File__Flush(File *file) {
	if (file->buffer != 0) {
		if (file->pending_size != 0)
			fn_801806E4(file->descriptor, file->buffer,
				file->pending_size, 0);
		file->pending_size = 0;
	}
}
