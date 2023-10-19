#include "main.h"

/**
 * putss - A print string
 * @s: a string
 * Return: a num of bytes
 */
int putss(char *s)
{
	int count = 0;

	if (s)
	{
		for (count = 0; s[count] != '\0'; count++)
		{
			_putchar(s[count]);
		}
	}

	return (count);
}
