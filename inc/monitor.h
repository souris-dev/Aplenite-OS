/***************************************************/
// File: monitor.h - prototypes for screen
//                   functions (write, clear, etc.)
/***************************************************/

#ifndef MONITOR_H
#define MONITOR_H

#include "common.h"

// Write a single char to screen
void monitor_put(char c);

// Clear the screen
void monitor_clear();

// Write a null-terminated ASCII
// string to the screen
void monitor_write(char* c);

#endif
