/* ProgressArrow__Display @ 0x8003C944 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: ProgressArrow__Display @ 0x8003C944 (0x28). ProDG -O2.
   Float constant is lbl_80311AB8. A 64K-aligned base keeps the lfs
   immediate equal to the in-range LO addend 0x1AB8. */
extern char lbl_80310000[];
void fn_8011F560(float x);

void ProgressArrow__Display(void) {
    fn_8011F560(*(float *)(lbl_80310000 + 0x1AB8));
}
