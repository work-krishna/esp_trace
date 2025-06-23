#ifndef __TRACE_H__
#define __TRACE_H__

#include "esp_log.h"

#define TRACE(L, frmt, args...)                          \
    {                                                    \
        char tag[64] = {0};                              \
        snprintf(tag, 64, "%s[%d]", __FILE__, __LINE__); \
        ESP_LOG##L(tag, frmt, ##args);                   \
    }

#define TRACE_V(frmt, args...) TRACE(V, frmt, ##args)
#define TRACE_D(frmt, args...) TRACE(D, frmt, ##args)
#define TRACE_I(frmt, args...) TRACE(I, frmt, ##args)
#define TRACE_W(frmt, args...) TRACE(W, frmt, ##args)
#define TRACE_E(frmt, args...) TRACE(E, frmt, ##args)

#endif // __TRACE_H__