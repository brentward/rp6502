#ifndef _RTC_H_
#define _RTC_H_

// Kernel events
void rtc_init_(void);

/*
 * The API implementaiton for RTC support
 */

void rtc_api_get_time(void);
void rtc_api_set_time(void);

#endif /* _RTC_H_ */