#ifndef __TIMER_H__
#define __TIMER_H__
#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

#include <stdint.h>


void timer_init();
void timer_update();

typedef void (*milli_timer_cb_t)(unsigned long millis);
void timer_add_callback(milli_timer_cb_t callback);


#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif // #ifndef __TIMER_H__
