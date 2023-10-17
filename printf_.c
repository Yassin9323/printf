#include "main.h"

void print_buffer(char buffer[], int *buff_ind);
/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	va_list args;
	int ind = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (ind = 0; format[ind]; ind++)
	{
		if (format[ind] != '%')
			putchar(format[ind]);
		else
		{
			format++;
			if (format[ind] == '\0')
				break;
			else if (format[ind] == '%')
				print_format_sign();
			else if (format[ind] == 'c')
				print_char();
			else if (format[ind] == 's')
				print_string();
		}
	}
	va_end(args);
	return (0);
}

void print_buffer(char buffer[], int *buff_ind)
{
    if (*buff_ind > 0)
    {
        for (int i = 0; i < *buff_ind; i++)
        {
            putchar(buffer[i]);
        }
    }

    *buff_ind = 0;
}
~
