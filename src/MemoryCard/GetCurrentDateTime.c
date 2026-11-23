/* MemoryCard__GetCurrentDateTime @ 0x801D6FCC (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef long long s64;

typedef struct {
    s32 sec;
    s32 min;
    s32 hour;
    s32 mday;
    s32 mon;
    s32 year;
    s32 wday;
    s32 yday;
    s32 msec;
    s32 usec;
} CalendarTime;

typedef struct {
    s32 year;
    s32 month;
    s32 day;
    s32 hour;
    s32 minute;
    s32 second;
    s32 f18;
    s32 f1C;
} DateTime;

s64 OSGetTime(void);
void OSTicksToCalendarTime(s64, CalendarTime *);

DateTime *MemoryCard__GetCurrentDateTime(DateTime *out) {
    DateTime dt;
    CalendarTime ct;

    OSTicksToCalendarTime(OSGetTime(), &ct);
    dt.year = ct.year;
    dt.month = ct.mon + 1;
    dt.day = ct.mday;
    dt.f18 = 0;
    dt.hour = ct.hour;
    dt.minute = ct.min;
    dt.second = ct.sec;
    dt.f1C = 1;
    *out = dt;
    return out;
}
