/*******************************************************************/
// File: isr.h - interface and structures for high level interrupt
//               service routines
/*******************************************************************/

#include "common.h"

typedef struct registers
{
	u32int ds;                                       // Data segment selector
	u32int edi, esi, ebp, esp, ebx, edx, ecx, eax;   // Pushed by pusha
	u32int int_no, err_code;                         // Interrupt no. and error code (if applicable)
	u32int eip, cs, eflags, usersp, ss;              // Pushed by the processor automatically
} registers_t;
