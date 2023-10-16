#include "main.h"

/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	va_list args;
	int ind;
	int c;
	char *str;
	int len = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (ind = 0; format[ind]; ind++)
	{
		if (format[ind] != '%')
			putchar(format);
		else
		{
			format++;
			if (format[ind] == '\0')
				break;
			else if (format[ind] == '%')
				putchar[format[ind]];
			else if (format[ind] == 'c')
				c = va_arg(args, int);
			else if (format[ind] == 's')
			{
				str = va_arg(args, char*);
				while (str[len] != '\0')
					len++;
				putchar(str);
				putchar(len);
				c += len;
			}
		}
	}
	va_end(args);
	return (0);
}
