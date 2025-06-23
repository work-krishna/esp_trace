/*
 * trace.h - Enhanced logging macros for ESP-IDF

 * Author: Krishna Kumar Sah <work.krishnasah@gmail.com>
 * Repository: https://github.com/krishnasah/esp_trace
 *
 *
 * This file provides a set of macros to facilitate logging with file and line
 * information in ESP-IDF applications. It allows developers to easily trace
 * the execution flow and debug issues by including the source file name and
 * line number in the log messages.
 *
 *
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

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