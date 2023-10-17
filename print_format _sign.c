#include "main.h"

void print_format_sign (void)
{
    {
	    	int count = 0;
                buffer[buff_ind++] = '%';
                if (buff_ind == BUFF_SIZE)
                {
                    print_buffer(buffer, &buff_ind);
                    count += buff_ind;
                }
            }
}
