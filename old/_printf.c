#include "main.h"

va_list args;
char buffer[BUFF_SIZE];
int buff_ind;
int count;

int _printf(const char *format, ...)
{
	int printed = 0;/*N of chars printed by each conversion specifier*/

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
			_putchar(*format);
		else
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == '%')/*Case: '%%' prints a single '%'*/
				print_format_sign();
			else if (*format == 'c')
				print_char();
			else if (*format == 's')
				print_string();
			else if (*format == 'd' || *format == 'i')
			{
				int value = va_arg(args, int);

				printed = print_integer(value);
				count += printed;
			}
		}
		/*else
		 * {
		 *	buffer[buff_ind++] = *format;
		 *	if (buff_ind == BUFF_SIZE)
		 *	{
		 *		print_buffer(buffer, &buff_ind);
		 *		count += buff_ind;
		 *	}
		 * }
		 */
		format++;
	}

	print_buffer(buffer, &buff_ind);
	count += buff_ind;

	va_end(args);

	return (count);
}
