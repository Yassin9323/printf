#include "main.h"

/**
 * _printf - A custom printf function
 * @format: An array holding all variadic functions
 * Return: an integer
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	unsigned int count = 0;
	unsigned int str_count;

	va_list args;

	if (format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			str_count = putss(va_arg(args, char *));
			i++;
			count += (str_count - 1);
		}
		else if (format[i + 1] == '%')
			_putchar('%');
		else
		{
			_putchar(format[i]);
		}
		count += 1;
	}

	va_end(args);

	return (count);
}
