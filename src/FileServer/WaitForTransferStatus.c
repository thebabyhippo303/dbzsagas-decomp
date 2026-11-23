/* FileServer__WaitForTransferStatus @ 0x8015B534 (size: 0x14, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef int s32; typedef unsigned int u32;

void FileServer__WaitForTransferStatus(s32 *arg0, s32 arg1) {
    while ((*arg0 & 0x14) == 0) {
    }
    *arg0 = *arg0 & 0x14;
}
