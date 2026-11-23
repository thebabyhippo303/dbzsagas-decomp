/* Avatar__AreInputAxesNearZero @ 0x80099F70 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
extern float lbl_8031FBDC __attribute__((section(".data")));

int Avatar__AreInputAxesNearZero(float x, float y) {
    int result = 0;

    if (!(__builtin_fabsf(x) >= lbl_8031FBDC)) {
        result = __builtin_fabsf(y) < lbl_8031FBDC;
    }
    return result;
}
