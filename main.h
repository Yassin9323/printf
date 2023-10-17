#ifndef _MAIN_H
#define _MAIN_H
#define BUFF_SIZE 1024

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _putchar(char c);
//step 1
int _printf(const char *format, ...);

//step 2: Specifiers c, s, and handling %
void print_char(void);
int print_integer(int value);
void print_format_sign(void);
void print_string(void);

#endif
