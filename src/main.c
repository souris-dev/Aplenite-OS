//////////////////////////////////////////
// File: main.c - kernel entry point
/////////////////////////////////////////

#include "monitor.h"
#include "descriptor_tables.h"

int main(struct multiboot *mboot_ptr)
{   
    // Initialise all the ISRs and segmentation
    init_descriptor_tables();

    // Initialise the screen (by clearing it)
    monitor_clear();
    // Write out a sample string
    monitor_write("Welcome to Aplenite OS!\n");
    monitor_write("\nType in 'help' for a list of commands, and 'about'\nfor version info.\n\n");
    
    // execute some asm statements (instructiosns)
    asm volatile("int $0x3");
    asm volatile("int $0x4");

    return 0;
}
