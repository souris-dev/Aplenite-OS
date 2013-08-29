//////////////////////////////////////////
// File: main.c - kernel entry point
/////////////////////////////////////////

#include "monitor.h"

int main(struct multiboot *mboot_ptr)
{
    // Initialise the screen (by clearing it)
    monitor_clear();
    // Write out a sample string
    monitor_write("Hello, world!");
    
    return 0;
}
