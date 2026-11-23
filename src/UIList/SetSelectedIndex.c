/* UIList__SetSelectedIndex @ 0x80135860 (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: UIList__SetSelectedIndex @ 0x80135860 (0x1C). ProDG -O2. */
typedef struct {
	char pad0[0x340];
	void ***entries;
	int count;
	char pad1[0x14];
	int selected_index;
} UIList;

void UIList__SetSelectedIndex(UIList *list, int index) {
	if (index < 0)
		return;
	if (index >= list->count)
		return;
	list->selected_index = index;
}
