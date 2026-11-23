/* MusicStreamQueue__SetDriver @ 0x80191FA8 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr,type,offset) (*(type)((char *)(expr)+(offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type,expr) ({typedef char mt_same_width[(sizeof(type)==sizeof(expr))?1:-1]; union {__typeof__(expr) from;type to;}mt_bits={(expr)};mt_bits.to;})
s32 StreamQueue__SetDriver(void *,s32);
void MusicStreamQueue__LoadTracks(void *);
s32 MusicStreamQueue__SetDriver(void *arg0,s32 arg1) {
 if (StreamQueue__SetDriver(arg0,arg1)==0) return 0;
 MusicStreamQueue__LoadTracks(arg0);
 return 1;
}