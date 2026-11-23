/* VarReal__SetFromString @ 0x8018D590 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern double String__ParseFloat(const char *);
extern float lbl_8033E9C8 __attribute__((section(".data")));

int VarReal__SetFromString(char *self, char *str) {
    if ((*(int *)self & 1) != 0) {
        return 0;
    }
    if (*(float *)(self + 72) == lbl_8033E9C8) {
        **(float **)(self + 64) = (float)String__ParseFloat(str);
    } else {
        **(float **)(self + 64) = (float)String__ParseFloat(str) * *(float *)(self + 72);
    }
    **(float **)(self + 68) = lbl_8033E9C8 / **(float **)(self + 64);
    return 1;
}
