/* FileServer__WriteBufferWord @ 0x8015D5AC (size: 0x30, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef int s32;
typedef unsigned int u32;
extern void fn_8015D4E8(s32, s32);
void FileServer__WriteBufferWord(s32 arg0) {
    *(volatile u32 *)0xCC006838 = (u32)arg0;
    *(volatile u32 *)0xCC006834 = 53;
    fn_8015D4E8(53, (s32)0xCC000000);
}
