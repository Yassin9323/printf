#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdrag.h>
//step 1
int _printf(const char *format, ...);

//step 2 
print_char(va_list ap , params_t * params );
print_percent(va_list ap , params_t * params );
print_string(va_list ap , params_t * params );

#endif
