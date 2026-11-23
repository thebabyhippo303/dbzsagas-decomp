/* Avatar__ClearHandItemState @ 0x8009B2F8 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__ClearHandItemState @ 0x8009B2F8 (0x24). ProDG -O2. */
extern void Avatar__RemoveHandItemImpl(void *avatar, int state);

void Avatar__ClearHandItemState(void *avatar) {
    Avatar__RemoveHandItemImpl(avatar, 0);
}
