#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @c: The character to print
 * Return: Always sucess
 */
int print_last_digit(int n)
{

int p;
p = (n % 10);

if (p < 0);
{

p = (-1 * p);
}

_putchar(p + '0');

return (p);
}		
