/* Stdio__SeekDescriptor @ 0x80168240 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Stdio__SeekDescriptor @ 0x80168240 (0x58). ProDG -O2. */
extern int lbl_803DD9AC;
extern int fn_802CDB30(int fd, int offset, int whence);

int Stdio__SeekDescriptor(int *err, int fd, int offset, int whence) {
	int result;
	lbl_803DD9AC = 0;
	result = fn_802CDB30(fd, offset, whence);
	if (result == -1 && lbl_803DD9AC != 0)
		*err = lbl_803DD9AC;
	return result;
}
