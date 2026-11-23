/* SceneLights__Initialize @ 0x8021A4A0 (size: 0xDC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32; typedef float f32;
typedef struct { void *head; } SList;
typedef struct { s32 count; void *items; SList list1; char pad0[8]; SList list2; char pad1[8]; SList list3; char pad2[12]; f32 f30; f32 f34; f32 f38; char pad3[12]; f32 f48; s32 f4c; } SceneLights;
extern SceneLights lbl_803ACFCC __attribute__((section(".data")));
extern f32 lbl_803465E0 __attribute__((section(".data"))); extern f32 lbl_803465E4 __attribute__((section(".data")));
extern void *memset(void*,int,u32);
extern void *fn_801636E4(void*,int,u32); extern void *MemHeap__Alloc(u32,u32);
extern void SList__Init(void*,s32); extern void SList__LinkArray(void*,s32,s32,s32);
void SceneLights__Initialize(register s32 count) {
 void *entry;
 fn_801636E4(&lbl_803ACFCC,0,0x90);
 lbl_803ACFCC.count=count;
 lbl_803ACFCC.items=MemHeap__Alloc(count*92,8);
 SList__Init(&lbl_803ACFCC.list1,0);
 SList__LinkArray(&lbl_803ACFCC.list1,(s32)lbl_803ACFCC.items,lbl_803ACFCC.count,92);
 SList__Init(&lbl_803ACFCC.list2,0);
 SList__Init(&lbl_803ACFCC.list3,0);
 entry=lbl_803ACFCC.list1.head;
 if(entry) do { *(s32*)((char*)entry+56)=0; entry=*(void**)entry; } while(entry);
 lbl_803ACFCC.f30=lbl_803465E0; lbl_803ACFCC.f34=lbl_803465E0; lbl_803ACFCC.f4c=0; lbl_803ACFCC.f48=lbl_803465E4; lbl_803ACFCC.f38=lbl_803465E0;
}