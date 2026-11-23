/* UIList__GetSelectedIndex @ 0x80135840 (size: 0x8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: UIList__GetSelectedIndex @ 0x80135840 (0x8). ProDG -O2. */
typedef struct {
	char pad[0x35C];
	int selected_index;
} UIList;

int UIList__GetSelectedIndex(UIList *list) {
	return list->selected_index;
}
