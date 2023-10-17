#include "main.h"

void print_string(void)
{
            {
		int count = 0;
                char *str = va_arg(args, char *); // Fetch the next argument as char*
                while (*str) // Iterate over each character in the string
                {
                    buffer[buff_ind++] = *str;
                    str++;
                    if (buff_ind == BUFF_SIZE)
                    {
                        print_buffer(buffer, &buff_ind);
                        count += buff_ind;
                    }
                }
            }
}
