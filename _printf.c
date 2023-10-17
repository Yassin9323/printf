#include "main.h"

va_list args;
char buffer[BUFF_SIZE];
int buff_ind;
int count;

int _printf(const char *format, ...)
{
	int printed = 0;   /*Number of characters printed by each conversion specifier*/
	
	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format) 
	{
		if (*format == '%') /*Check for the start of a conversion specifier*/
		{
			format++; /*Move to the next character after '%'*/

			if (*format == '%') /*Case: '%%' prints a single '%'*/
			{
				print_format_sign();
			}
			else if (*format == 'c') /*Case: '%c' prints a character*/
			{
				print_char();
			}
			else if (*format == 's') /*Case: '%s' prints a string*/
			{
				print_string();
			}
			else if (*format == 'd' || *format == 'i') /*Case: '%d' or '%i' prints an integer*/
			{
				int value = va_arg(args, int);
				printed = print_integer(value);
				count += printed;
			}
		}
		else /*Case: Regular character, not a conversion specifier*/
		{
			buffer[buff_ind++] = *format;
			if (buff_ind == BUFF_SIZE)
			{
				print_buffer(buffer, &buff_ind);
				count += buff_ind;
			}
		}

		format++; 
	}

	print_buffer(buffer, &buff_ind);
	count += buff_ind;

	va_end(args); 

	return count; 
}
