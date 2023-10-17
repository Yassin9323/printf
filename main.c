#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	/*int x;*/
	int y;

    _printf("Let's try to printf a simple sentence.\n");
    printf("Let's try to printf a simple sentence.\n");

    _printf("%");
    /*printf("%");*/
    
    _printf("%%\n");
    printf("%%\n");

    _printf("%k\n");
    printf("%k\n");

    _printf("Nothing means NULL\n");
    printf("Nothing means NULL\n");

    _printf(NULL);
    printf(NULL);

    y = _printf(NULL);
    _printf("%d\n", y);

    /**
     * x = printf(NULL);
     * printf("%d\n", x);
     */


    return (0);
}
