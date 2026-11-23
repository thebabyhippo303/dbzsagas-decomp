/* Database__LoadFromMemoryAsync @ 0x802047D8 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Task__Create(s32, s32, s32, s32, s32, s32, s32);
char * strcpy(char *, const char *);
void Database__AsyncLoadTask(void);

s32 Database__LoadFromMemoryAsync(char *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    char *temp_r30;
    temp_r30 = *(char **) Task__Create((s32) &Database__AsyncLoadTask, 0, 0x10AD10AD, 0xFF, 0x1000, 0x400, 1);
    strcpy(temp_r30, arg0);
    M2C_FIELD(temp_r30, s32 *, 0x100) = arg1;
    M2C_FIELD(temp_r30, s32 *, 0x104) = arg2;
    M2C_FIELD(temp_r30, s32 *, 0x10C) = arg3;
    M2C_FIELD(temp_r30, s32 *, 0x108) = arg4;
    M2C_FIELD(temp_r30, s32 *, 0x110) = arg5;
    return 1;
}
