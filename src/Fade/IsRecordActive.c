/* Fade__IsRecordActive @ 0x80228D78 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern float lbl_803468B0 __attribute__((section(".data")));

float *Fade__FindByIdOrDefault(int id);

int Fade__IsRecordActive(int id) {
    float *record = Fade__FindByIdOrDefault(id);

    return record[2] != lbl_803468B0;
}
