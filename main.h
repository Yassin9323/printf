#ifndef _MAIN_H
#define _MAIN_H
#define BUFF_SIZE 1024

#include <stdio.h> /*For standard input/output*/
#include <stdlib.h>
#include <stdarg.h>/*For handling variadic arguments*/
#include <string.h>
#include <unistd.h>

/* Global Variables */
extern va_list args;      /* Declare a variable to hold the list of arguments*/
extern char buffer[BUFF_SIZE];
extern int buff_ind;  /*Buffer index*/
extern int count;     /*Initialize a counter for the number of characters printed*/


int _putchar(char c);
/*step 1*/
int _printf(const char *format, ...);

/*step 2: Specifiers c, s, and handling % */
void print_char(void);
int print_integer(int value);
void print_format_sign(void);
void print_string(void);
void name (void);


void print_buffer(char buffer[], int *buff_ind);
/*Step 3 */
void print_binary(unsigned int value);
#endif
