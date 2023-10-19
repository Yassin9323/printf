#include "main.h"

void get_int(int num)
{
	int n;

	if (num == 0)
		return;

	n = num / 10;

	get_int(n);
	_putchar(num%10 + '0');

	return;
}
