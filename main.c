#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	printf("Let's try to printf a simple sentence.\n");

	_printf(NULL);

	_printf("%%");

	_printf("%");

	return (0);
} 
