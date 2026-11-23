/* PartitionMgr__LoadNextPartition @ 0x80253794 (size: 0x104, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void Partition__BuildFileName(void *arg0, void *arg1, void *arg2);
void Database__LoadFromMemoryAsync(void *arg0, void *arg1, void *arg2, s32 arg3, void *arg4, void *arg5);
void *Database__LoadFromMemory(void *arg0, void *arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5);
void Partition__RegisterTerrain(void *arg0, void *arg1);

void PartitionMgr__LoadNextPartition(void *arg0, s32 arg1) {
    void *temp_r11;
    void *temp_r10;
    void *temp_r9;
    char buf[64];

    if (M2C_FIELD(arg0, void **, 348) != NULL) {
        return;
    }
    temp_r11 = M2C_FIELD(arg0, void **, 324);
    temp_r10 = (char *)arg0 + 324;
    M2C_FIELD(arg0, void **, 348) = temp_r11;
    if (temp_r11 == NULL) {
        return;
    }
    M2C_FIELD(arg0, void **, 324) = M2C_FIELD(temp_r11, void **, 4);
    if (M2C_FIELD(temp_r10, void **, 4) == temp_r11) {
        M2C_FIELD(temp_r10, void **, 4) = M2C_FIELD(temp_r11, void **, 0);
    } else {
        temp_r9 = M2C_FIELD(temp_r11, void **, 4);
        M2C_FIELD(temp_r9, void **, 0) = M2C_FIELD(temp_r11, void **, 0);
    }
    M2C_FIELD(temp_r11, s32 *, 0) = 0;
    M2C_FIELD(temp_r11, s32 *, 4) = 0;
    M2C_FIELD(temp_r10, s32 *, 12) = M2C_FIELD(temp_r10, s32 *, 12) - 1;
    temp_r11 = M2C_FIELD(arg0, void **, 348);
    Partition__BuildFileName(arg0, buf, M2C_FIELD(M2C_FIELD(temp_r11, void **, 8), void **, 140));
    if (arg1 != 0) {
        temp_r9 = M2C_FIELD(arg0, void **, 348);
        Database__LoadFromMemoryAsync(buf, M2C_FIELD(temp_r9, void **, 20), M2C_FIELD(temp_r9, void **, 24), 0, arg0, Partition__RegisterTerrain);
    } else {
        void *loaded;
        temp_r9 = M2C_FIELD(arg0, void **, 348);
        loaded = Database__LoadFromMemory(buf, M2C_FIELD(temp_r9, void **, 20), M2C_FIELD(temp_r9, void **, 24), 0, 0, 0);
        Partition__RegisterTerrain(arg0, loaded);
    }
}
