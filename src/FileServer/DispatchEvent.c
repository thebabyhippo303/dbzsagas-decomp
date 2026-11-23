/* FileServer__DispatchEvent @ 0x8015E054 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
extern void FileServer__StartQueuedReadDma(void);
extern void FileServer__HandleDeviceRequest(void);
extern s32 lbl_8036FB5C __attribute__((section(".data")));
void FileServer__DispatchEvent(s32 event) {
    if (event == 3) goto done;
    if ((unsigned int)event <= 3) {
        if (event == 1) goto read_dma;
        if (event == 2) goto increment;
        goto done;
    }
    if (event == 4) goto increment;
    if (event == 5) goto request;
    goto done;
read_dma:
    FileServer__StartQueuedReadDma();
    goto done;
increment:
    lbl_8036FB5C++;
    goto done;
request:
    FileServer__HandleDeviceRequest();
done:
    return;
}
