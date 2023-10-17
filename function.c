#include "main.h"

void print_format_sign (void)
{
    
                buffer[buff_ind++] = '%';
                if (buff_ind == BUFF_SIZE)
                {
                    print_buffer(buffer, &buff_ind);
                    count += buff_ind;
                }
            
}

void print_char (void)
{
            {
                int ch = va_arg(args, int); /*Fetch the next argument as int*/

                buffer[buff_ind++] = ch;
                if (buff_ind == BUFF_SIZE)
                {
                    print_buffer(buffer, &buff_ind);
                    count += buff_ind;
                }
            }
}

void print_string (void)
{
            
                char *str = va_arg(args, char *); /*Fetch the next argument as char* */
                while (*str) /*Iterate over each character in the string*/
               {
                    if (buff_ind == BUFF_SIZE - 1)
                    {
			buffer[buff_ind] = '\0';
                        print_buffer(buffer, &buff_ind);
                    }

		    buffer[buff_ind++] = *str;
		    str++;
                }

		buffer[buff_ind] = '\0';
            
}


  int print_integer(int value)
                               
{
    char buffer[32]; /*Buffer to store the string representation*/
    int printed = 0; /*Counter for the number of characters printed*/
    int j = 0;
    int i = 0;

    /*Handle the case of negative numbers*/
    if (value < 0)
    {
        _putchar('-');
        printed++;
        value = -value;
    }

    /*Convert each digit of the integer to a character*/
    do
    {
        buffer[i++] = '0' + (value % 10);
        value /= 10;
        printed++;
    } while (value > 0);

    /*Print the characters in reverse order to get the correct representation*/
    for (j = i - 1; j >= 0; j--)
    {
        _putchar(buffer[j]);
    }

    return printed;
}
