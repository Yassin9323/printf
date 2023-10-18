#include "main.h"

/**
 * print_buffer - A function that stores data into the buffer
 * @buffer: an array
 * @buff_ind: buffer index
 * Return: void
 */
void print_buffer(char buffer[], int *buff_ind)
{
	int i;

	if (*buff_ind > 0)
	{
		for (i = 0; i < *buff_ind; i++)
		{
			_putchar(buffer[i]);
		}
	}

	*buff_ind = 0;
}
