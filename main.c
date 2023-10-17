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

    _printf("%\n");
    
    _printf("%%\n");
   
    _printf("%8\n");

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
    
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');

    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");

    _printf("Percent:[%%]\n");

    _printf("Leo\n");
    _printf("%c\n", 'f');
    _printf("%s\n", "String");
    _printf("%%\n");


    return (0);
}
