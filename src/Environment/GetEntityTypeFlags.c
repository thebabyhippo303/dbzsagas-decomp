/* Environment__GetEntityTypeFlags @ 0x800EA370 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct {const char *name;char pad[8];int flags;char pad2[4];} EnvType;
extern EnvType lbl_8033B220[];
extern int String__CompareIgnoreCase(const char*,const char*);
extern int lbl_803DD180;
int *Environment__GetEntityTypeFlags(int*out,const char*name){
 EnvType*cursor=lbl_8033B220;
 EnvType*end=(EnvType*)((char*)cursor+0x668);
 do{
  if(String__CompareIgnoreCase(cursor->name,name)!=0)goto next;
  *out=cursor->flags;
  goto done;
 next:
  cursor++;
 }while((int)cursor<(int)end);
 *out=lbl_803DD180;
 done:
 return out;
}